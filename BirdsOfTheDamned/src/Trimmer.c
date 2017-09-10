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

#include "Trimmer.h"
#include "em_acmp.h"

static void trimmer_private_disable_power(Trimmer* self) {
    GPIO_PinOutClear(self->pwr_port, self->pwr_pin);
}

static void trimmer_private_enable_power(Trimmer* self) {
    GPIO_PinOutSet(self->pwr_port, self->pwr_pin);
}

static void trimmer_start_sample(Trimmer* self) {
    trimmer_private_enable_power(self);
    // TODO: start ADC conversion
}

Trimmer* init_trimmer(Trimmer* init,
        GPIO_Port_TypeDef cmp_port,
        unsigned int cmp_pin,
        GPIO_Port_TypeDef pwr_port,
        unsigned int pwr_pin) {
    if (init) {
        init->cmp_port = cmp_port;
        init->cmp_pin = cmp_pin;
        init->pwr_port = pwr_port;
        init->pwr_pin = pwr_pin;
    }
    return init;
}
