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

    s_birdhead = init_bird_head(&s_birdhead_data, TIMER0, 1, 2);
    s_daylightsensor = init_daylight_sensor_max44009(&s_daylightsensor_data, I2C0);
    s_trimmer = init_trimmer(&s_trimmer_data, ACMP0_CH1_PORT,
                                              ACMP0_CH1_PIN,
                                              ADJ_PWR_PORT,
                                              ADJ_PWR_PIN);

    nightPhantomMachine_init(&s_machine);
    nightPhantomMachine_enter(&s_machine);

#ifdef LED0_PORT
        GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
    while (1) {

        // +--[EVENTS]---------------------------------------------------------+
        if (nightPhantomMachineIfaceTrimpot_israised_start_adc_conversion(&s_machine)) {
            nightPhantomMachineIfaceTrimpot_raise_adc_conversion_complete(&s_machine, 0.0f);
        }

        if (nightPhantomMachineIfacePm_israised_do_sleep(&s_machine)) {
#ifdef LED0_PORT
            GPIO_PinOutClear(LED0_PORT, LED0_PIN);
#endif
        } else {
#ifdef LED0_PORT
            GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
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
        sh->reset_interrupt(sh);
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

}

void nightPhantomMachineIfaceWdt_disable(const NightPhantomMachine* handle) {

}

void nightPhantomMachineIfaceWdt_reset(const NightPhantomMachine* handle) {

}


