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

typedef struct AnalogInputType {
    void (*start_conversion)(struct AnalogInputType* self);
    unsigned int (*is_conversion_complete)(struct AnalogInputType* self);
    double (*get_last_value)(struct AnalogInputType* self);
    uint32_t (*get_last_value_raw)(struct AnalogInputType* self);
    void (*set_enable)(struct AnalogInputType* self, unsigned int enable);
    GPIO_Port_TypeDef pwr_port;
    unsigned int pwr_pin;
    ADC_TypeDef* _adc;
    CMU_Clock_TypeDef _clock;
} AnalogInput;

AnalogInput* init_analog_input(AnalogInput* init,
                      CMU_Clock_TypeDef adc_clock,
                      GPIO_Port_TypeDef pwr_port,
                      unsigned int pwr_pin,
                      ADC_TypeDef* adc);
