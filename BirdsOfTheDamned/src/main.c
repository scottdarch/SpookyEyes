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

#include "em_device.h"
#include "em_chip.h"
#include "em_emu.h"
#include "em_wdog.h"
#include "InitDevice.h"

#include "BirdHead.h"
#include "DaylightSensor.h"
#include "Trimmer.h"
#include "NightPhantomMachine.h"

// +---------------------------------------------------------------------------+
// | TASKS AND OBJECTS
// +---------------------------------------------------------------------------+
static NightPhantomMachine s_machine;

static BirdHead s_birdhead_data;
static DaylightSensor s_daylightsensor_data;
static Trimmer s_trimmer_data;

static BirdHead* s_birdhead = NULL;
static DaylightSensor* s_daylightsensor = NULL;
static Trimmer* s_trimmer = NULL;

// +---------------------------------------------------------------------------+
// | MAIN!
// +---------------------------------------------------------------------------+
int main(void) {
    /* Chip errata */
    CHIP_Init();

    enter_DefaultMode_from_RESET();

    if (RMU->RSTCAUSE & RMU_RSTCAUSE_EM4WURST) {
        s_daylightsensor = connect_daylight_sensor_max44009(&s_daylightsensor_data, I2C0);
    } else {
        s_daylightsensor = init_daylight_sensor_max44009(&s_daylightsensor_data, I2C0);
    }

    RMU->CMD = RMU_CMD_RCCLR;
    EMU->AUXCTRL = EMU_AUXCTRL_HRCCLR;

    s_birdhead = init_bird_head(&s_birdhead_data, TIMER0, 0, 1);
    // TODO: switch to real pin for v1x boards.
    s_trimmer = init_trimmer(&s_trimmer_data, ACMP0_CH1_PORT,
                                              ACMP0_CH1_PIN,
                                              ADJ_PWR_DEVKIT_PORT,
                                              ADJ_PWR_DEVKIT_PIN);

    nightPhantomMachine_init(&s_machine);
    nightPhantomMachine_enter(&s_machine);

#ifdef LED0_PORT
    GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
    while (1) {

        // +--[EVENTS]---------------------------------------------------------+
        if (nightPhantomMachineIfaceTrimpot_israised_start_adc_conversion(&s_machine)) {
            s_trimmer->start_conversion(s_trimmer);
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

        if (s_trimmer->is_conversion_complete(s_trimmer)) {
            nightPhantomMachineIfaceTrimpot_raise_adc_conversion_complete(&s_machine, 0.0f);
        }

        // +--[RUN MACHINE]----------------------------------------------------+
#ifdef LED1_PORT
        GPIO_PinOutSet(LED1_PORT, LED1_PIN);
#endif
        nightPhantomMachine_runCycle(&s_machine);

#ifdef LED1_PORT
        GPIO_PinOutClear(LED1_PORT, LED1_PIN);
#endif

    }
}

// +---------------------------------------------------------------------------+
// | YAKINDU MACHINE
// +---------------------------------------------------------------------------+
void nightPhantomMachineIfaceDaylight_sensor_set_sensitivity(const NightPhantomMachine* handle, const sc_real sensitivity) {

}

sc_boolean nightPhantomMachineIfaceDaylight_sensor_is_nighttime(const NightPhantomMachine* handle) {
    DaylightSensor* const sh = s_daylightsensor;
    if (sh) {
        return sh->get_is_nighttime(sh);
    } else {
        return false;
    }
}


void nightPhantomMachineIfaceEyes_start_glowing(const NightPhantomMachine* handle) {
    BirdHead* const bh = s_birdhead;
    if (bh) {
        bh->set_mode(bh, BIRDEYEMODE_ON);
    }
}

void nightPhantomMachineIfaceEyes_stop_glowing(const NightPhantomMachine* handle) {
    BirdHead* const bh = s_birdhead;
    if (bh) {
        bh->set_mode(bh, BIRDEYEMODE_OFF);
    }
}

sc_boolean nightPhantomMachineIfaceEyes_is_glowing(const NightPhantomMachine* handle) {
    BirdHead* const bh = s_birdhead;
    if (bh) {
        return bh->run_cycle(bh);
    } else {
        return false;
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


