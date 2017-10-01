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

#include "em_adc.h"
#include "em_cmu.h"

#include "AnalogInput.h"

static void analog_input_start_sample(AnalogInput* self) {
    ADC_Start(self->_adc, adcStartSingle);
}

static unsigned int analog_input_is_conversion_complete(AnalogInput* self) {
    return !((self->_adc->STATUS & ADC_STATUS_SINGLEDV) == 0);
}

static double analog_input_get_last_value(AnalogInput* self) {
    // We are always using 12 bits so just always divide by 0xFFF.
    return (double)ADC_DataSingleGet(self->_adc) / 4095.00;
}

static void analog_input_set_enable(AnalogInput* self, unsigned int enable) {
    if (enable) {
        GPIO_PinOutSet(self->pwr_port, self->pwr_pin);
        CMU_ClockEnable(self->_clock, true);
    } else {
        GPIO_PinOutClear(self->pwr_port, self->pwr_pin);
        CMU_ClockEnable(self->_clock, false);
    }
}

static uint32_t analog_input_get_last_value_raw(AnalogInput* self) {
    return ADC_DataSingleGet(self->_adc);
}

AnalogInput* init_analog_input(AnalogInput* init,
        CMU_Clock_TypeDef adc_clock,
        GPIO_Port_TypeDef pwr_port,
        unsigned int pwr_pin,
        ADC_TypeDef* adc) {
    if (init) {
        init->start_conversion = analog_input_start_sample;
        init->is_conversion_complete = analog_input_is_conversion_complete;
        init->get_last_value = analog_input_get_last_value;
        init->get_last_value_raw = analog_input_get_last_value_raw;
        init->set_enable = analog_input_set_enable;
        init->pwr_port = pwr_port;
        init->pwr_pin = pwr_pin;
        init->_adc = adc;
        init->_clock = adc_clock;
    }
    return init;
}
