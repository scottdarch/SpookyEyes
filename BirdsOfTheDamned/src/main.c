/*
 * Copyright 2017 Scott A Dixon
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations under the License.
 */
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include "em_device.h"
#include "em_chip.h"
#include "em_emu.h"
#include "em_wdog.h"
#include "em_cmu.h"
#include "em_rtc.h"
#include "InitDevice.h"

#include "BirdHead.h"
#include "DaylightSensor.h"
#include "NightPhantomMachine.h"

#include "AnalogInput.h"

// +---------------------------------------------------------------------------+
// | TASKS AND OBJECTS
// +---------------------------------------------------------------------------+
static NightPhantomMachine s_machine;

static BirdHead s_birdhead_data;
static DaylightSensor s_daylightsensor_data;
static AnalogInput s_ain_data;

static BirdHead* s_birdhead = NULL;
static DaylightSensor* s_daylightsensor = NULL;
static AnalogInput* s_ain = NULL;

/**
 * Linear interpolation from a rand() value to a value within a given range.
 */
static uint32_t rand_linterp(uint32_t max, uint32_t min) {
    EFM_ASSERT(max > min);
    const double m = (double)(max - min) / (double)RAND_MAX;
    const double x = (double)rand();
    const double y = m * x + (double)min;
    return (uint32_t)y;
}

// +---------------------------------------------------------------------------+
// | RTC
// +---------------------------------------------------------------------------+

void RTC_IRQHandler(void) {
    RTC_IntClear(RTC_IEN_COMP0);
}

// +---------------------------------------------------------------------------+
// | MAIN!
// +---------------------------------------------------------------------------+
int main(void) {
    /* Chip errata */
    CHIP_Init();

    SysTick->CTRL = 0;

    enter_DefaultMode_from_RESET();

    RTC_Enable(false);

    CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFRCO);
    CMU_HFRCOBandSet(cmuHFRCOBand_7MHz);
    CMU_ClockSelectSet(cmuClock_LFA, cmuSelect_LFRCO);
    CMU_ClockDivSet(cmuClock_RTC, cmuClkDiv_32768);
    CMU_ClockEnable(cmuClock_RTC, true);
    RTC_CompareSet(0, 2);
    NVIC_EnableIRQ(RTC_IRQn);
    RTC_IntEnable(RTC_IEN_COMP0);


    if (RMU->RSTCAUSE & RMU_RSTCAUSE_EM4WURST) {
        s_daylightsensor = connect_daylight_sensor_max44009(&s_daylightsensor_data, I2C0);
    } else {
        s_daylightsensor = init_daylight_sensor_max44009(&s_daylightsensor_data, I2C0);
    }

    RMU->CMD = RMU_CMD_RCCLR;
    EMU->AUXCTRL = EMU_AUXCTRL_HRCCLR;

    s_birdhead = init_bird_head(&s_birdhead_data, TIMER0, 0, 1);
    // TODO: switch to real pin for v1x boards.
    s_ain = init_analog_input(&s_ain_data,
            cmuClock_ADC0,
            ADJ_PWR_DEVKIT_PORT,
            ADJ_PWR_DEVKIT_PIN,
            ADC0);

    nightPhantomMachine_init(&s_machine);
    nightPhantomMachine_enter(&s_machine);

#ifdef LED0_PORT
    GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif

    while (1) {

        // +--[EVENTS]---------------------------------------------------------+

        if (nightPhantomMachineIfaceAdc_israised_start_acquire_trimpot(&s_machine)) {
            s_ain->set_input(s_ain, analogInputSourceTrimmer);
            s_ain->set_enable(s_ain, true);
            s_ain->start_conversion(s_ain);
        }

        if (nightPhantomMachineIfaceRand_israised_set_seed(&s_machine)) {
            const sc_real randomness = nightPhantomMachineIfaceRand_get_set_seed_value(&s_machine);
            const double seed = (randomness * (sc_real)RAND_MAX);
            const unsigned int iseed = (unsigned int)seed;
            srand(iseed);
        }

        if (!GPIO_PinInGet(GPIO_EM4WU4_PORT, GPIO_EM4WU4_PIN)) {
            s_daylightsensor->reset_interrupt(s_daylightsensor);
        }

        if (nightPhantomMachine_isFinal(&s_machine)) {
#ifdef LED0_PORT
            GPIO_PinOutClear(LED0_PORT, LED0_PIN);
#endif
            // We're about to shut off the MCU completely. The light sensor's
            // interrupt will wake it back up when it's dark out.
            GPIO_EM4EnablePinWakeup(GPIO_EM4WUEN_EM4WUEN_F2, 0);
            EMU_EnterEM4();
            // Reset after wake since all our state is lost in EM4
            SCB->AIRCR = (0x05FA << SCB_AIRCR_VECTKEY_Pos) | (1 << SCB_AIRCR_SYSRESETREQ_Pos);
        }

        if (s_ain->is_conversion_complete(s_ain)) {
            const double result = s_ain->get_last_value(s_ain);
            nightPhantomMachineIfaceAdc_raise_acquisition_complete(&s_machine, result);
            s_ain->set_enable(s_ain, false);
        }

        // +--[RUN MACHINE]----------------------------------------------------+
        nightPhantomMachine_runCycle(&s_machine);
    }
}

// +---------------------------------------------------------------------------+
// | YAKINDU MACHINE
// +---------------------------------------------------------------------------+
void nightPhantomMachineIfaceRand_lurk(const NightPhantomMachine* handle, const sc_integer max_wait_sec, const sc_integer min_wait_sec) {
#ifdef LED0_PORT
    GPIO_PinOutClear(LED0_PORT, LED0_PIN);
#endif
    const uint32_t random_compare_value = rand_linterp((uint32_t)max_wait_sec, (uint32_t)min_wait_sec);
    RTC_CompareSet(0, random_compare_value);
    RTC_Enable(true);
    EMU_EnterEM2(true);
    RTC_Enable(false);
#ifdef LED0_PORT
    GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
}

void nightPhantomMachineIfaceDaylight_sensor_set_sensitivity(const NightPhantomMachine* handle, const sc_real sensitivity) {
    DaylightSensor* const sh = s_daylightsensor;
    if (sh) {
        sh->set_sensitivity(sh, sensitivity);
    }
}

sc_boolean nightPhantomMachineIfaceDaylight_sensor_is_nighttime(const NightPhantomMachine* handle) {
    DaylightSensor* const sh = s_daylightsensor;
    if (sh) {
        return sh->get_is_nighttime(sh);
    } else {
        return false;
    }
}

void nightPhantomMachineIfaceEyes_enable(const NightPhantomMachine* handle, sc_boolean enable) {
    BirdHead* const bh = s_birdhead;
    if (bh) {
        bh->set_mode(bh, (enable) ? BIRDEYEMODE_ON : BIRDEYEMODE_OFF);
    }
}

void nightPhantomMachineIfaceEyes_set_intensity(const NightPhantomMachine* handle, sc_real intensity) {
    BirdHead* const bh = s_birdhead;
    if (bh) {
        bh->set_intensity(bh, intensity);
    }
}

void nightPhantomMachineIfaceWdt_enable(const NightPhantomMachine* handle) {
    WDOGn_Enable(DEFAULT_WDOG, true);
}

void nightPhantomMachineIfaceWdt_disable(const NightPhantomMachine* handle) {
    WDOGn_Enable(DEFAULT_WDOG, false);
}

void nightPhantomMachineIfaceWdt_reset(const NightPhantomMachine* handle) {
    WDOGn_Feed(DEFAULT_WDOG);
}

