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

#pragma once

#include <stdbool.h>
#include "em_gpio.h"
#include "em_adc.h"

typedef struct TrimmerType {
    void (*start_conversion)(struct TrimmerType* self);
    unsigned int (*is_conversion_complete)(struct TrimmerType* self);
    GPIO_Port_TypeDef cmp_port;
    unsigned int cmp_pin;
    GPIO_Port_TypeDef pwr_port;
    unsigned int pwr_pin;
    ADC_TypeDef* _adc;
} Trimmer;

Trimmer* init_trimmer(Trimmer* init,
                      GPIO_Port_TypeDef cmp_port,
                      unsigned int cmp_pin,
                      GPIO_Port_TypeDef pwr_port,
                      unsigned int pwr_pin,
                      ADC_TypeDef* adc);
