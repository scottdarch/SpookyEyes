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
        if (analogInputSourceTrimmer == self->_source) {
            GPIO_PinOutSet(self->pwr_port, self->pwr_pin);
        }
        CMU_ClockEnable(self->_clock, true);
    } else {
        GPIO_PinOutClear(self->pwr_port, self->pwr_pin);
        CMU_ClockEnable(self->_clock, false);
    }
}

static void analog_input_set_input(AnalogInput* self,
                              AnalogInput_source input)
{
    ADC_Init_TypeDef init = ADC_INIT_DEFAULT;

    init.timebase = ADC_TimebaseCalc(0);
    init.prescale = ADC_PrescaleCalc(400000, 0);

    ADC_InitSingle_TypeDef initsingle = ADC_INITSINGLE_DEFAULT;

    initsingle.acqTime = adcAcqTime64;
    initsingle.resolution = adcRes12Bit;

    switch(input) {
    case analogInputSourceTemp:
        init.lpfMode = adcLPFilterBypass;
        initsingle.input = adcSingleInpCh6;
        initsingle.reference = adcRefVDD;
        //initsingle.input = adcSingleInpTemp;
        //initsingle.reference = adcRef1V25;
        break;
    default:
        init.lpfMode = adcLPFilterRC;
        initsingle.input = adcSingleInpCh6;
        initsingle.reference = adcRefVDD;
        break;
    }
    self->_source = input;

    ADC_Reset(self->_adc);
    ADC_Init(self->_adc, &init);

    /* Initialize a single sample conversion.
     * To start a conversion, use ADC_Start().
     * Conversion result can be read with ADC_DataSingleGet(). */
    ADC_InitSingle(self->_adc, &initsingle);
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
        init->set_input = analog_input_set_input;
        init->pwr_port = pwr_port;
        init->pwr_pin = pwr_pin;
        init->_adc = adc;
        init->_source = analogInputSourceNone;
        init->_clock = adc_clock;
    }
    return init;
}
