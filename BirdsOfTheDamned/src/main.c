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
#include "em_device.h"
#include "em_chip.h"
#include "InitDevice.h"

#include "BirdHead.h"
#include "DaylightSensor.h"

// +---------------------------------------------------------------------------+
// | TASKS AND OBJECTS
// +---------------------------------------------------------------------------+
static BirdHead s_birdhead;
static DaylightSensor s_daylightsensor;

#define TASK_COUNT 1
static Task* s_tasks[TASK_COUNT];

// +---------------------------------------------------------------------------+
// | MAIN!
// +---------------------------------------------------------------------------+
int main(void) {
    /* Chip errata */
    CHIP_Init();

    enter_DefaultMode_from_RESET();

    BirdHead* bh = init_bird_head(&s_birdhead, TIMER0, 1, 2);
    (void)bh;
    DaylightSensor* ds = init_daylight_sensor_max44009(&s_daylightsensor, I2C0);
    s_tasks[0] = (Task*)ds;

    bh->set_all_brightness(bh, 0xFF);

#ifdef LED0_PORT
        GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
    while (1) {
        bool all_tasks_idle = true;
        for (size_t i = 0; i < TASK_COUNT; ++i) {
#ifdef LED1_PORT
            GPIO_PinOutSet(LED1_PORT, LED1_PIN);
#endif
            Task *const task = s_tasks[i];
            if (!task->run_cycle(task)) {
                all_tasks_idle = false;
            }
#ifdef LED1_PORT
            GPIO_PinOutClear(LED1_PORT, LED1_PIN);
#endif
        }
        // TODO: sleep on idle.
        if (all_tasks_idle) {
#ifdef LED0_PORT
        GPIO_PinOutClear(LED0_PORT, LED0_PIN);
#endif
        } else {
#ifdef LED0_PORT
        GPIO_PinOutSet(LED0_PORT, LED0_PIN);
#endif
        }
    }
}
