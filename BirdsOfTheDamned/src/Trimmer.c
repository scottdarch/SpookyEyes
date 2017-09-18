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
#include "em_adc.h"
#include "em_cmu.h"

static void trimmer_start_sample(Trimmer* self) {
    ADC_Start(self->_adc, adcStartSingle);
}

static unsigned int trimmer_is_conversion_complete(Trimmer* self) {
    return !((self->_adc->STATUS & ADC_STATUS_SINGLEDV) == 0);
}

static double trimmer_get_last_value(Trimmer* self) {
    return (double)ADC_DataSingleGet(self->_adc) / 4095.00;
}

static void trimmer_set_enable(Trimmer* self, unsigned int enable) {
    if (enable) {
        GPIO_PinOutSet(self->pwr_port, self->pwr_pin);
        CMU_ClockEnable(cmuClock_ADC0, true);
    } else {
        GPIO_PinOutClear(self->pwr_port, self->pwr_pin);
        CMU_ClockEnable(cmuClock_ADC0, false);
    }
}

Trimmer* init_trimmer(Trimmer* init,
        GPIO_Port_TypeDef pwr_port,
        unsigned int pwr_pin,
        ADC_TypeDef* adc) {
    if (init) {
        init->start_conversion = trimmer_start_sample;
        init->is_conversion_complete = trimmer_is_conversion_complete;
        init->get_last_value = trimmer_get_last_value;
        init->set_enable = trimmer_set_enable;
        init->pwr_port = pwr_port;
        init->pwr_pin = pwr_pin;
        init->_adc = adc;
    }
    return init;
}
