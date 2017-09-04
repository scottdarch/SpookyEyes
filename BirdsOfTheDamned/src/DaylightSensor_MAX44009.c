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

#include "DaylightSensor.h"

// +--------------------------------------------------------------------------+
// | I2C DEFINITIONS
// +--------------------------------------------------------------------------+
// A0@VCC
#define MAX44009_ADDRESS 0x96

#define MAX44009_REG_INT_STAT 0x00
#define MAX44009_REG_INT_EN 0x1
#define MAX44009_REG_CONFIG 0x2
#define MAX44009_REG_LUX_HIGH 0x3
#define MAX44009_REG_LUX_LOW 0x4
#define MAX44009_REG_THRESH_HIGH 0x5
#define MAX44009_REG_THRESH_LOW 0x6
#define MAX44009_REG_THRESH_TIMER 0x7


static uint8_t _reg_config[] = { MAX44009_REG_CONFIG, 0x40 };

// Time delay = (128xT7 + 64xT6 + 32xT5 + 16xT4 + 8xT3 + 4xT2 + 2xT1 + T0) x 100ms
static uint8_t _reg_threshold_timer[] = { MAX44009_REG_THRESH_TIMER, 30 };

// Mantissa (LM[7:4]): Four most significant bits of mantissa lower threshold
// Exponent (LE[3:0]): Exponent bits lower threshold
// Lower lux threshold = 2(exponent) x mantissa x 0.045
// Exponent = 8xLE3 + 4xLE2 + 2xLE1 + LE0
// Mantissa = 128xLM7 + 64xLM6 + 32xLM5 + 16xLM4
static uint8_t _reg_threshold_low[] = { MAX44009_REG_THRESH_LOW, 0x01 };

static uint8_t _reg_int_enable[] = { MAX44009_REG_INT_EN, 0x01 };

static I2C_TransferSeq_TypeDef _config_messages[] = {
    {
        .addr  = MAX44009_ADDRESS,
        .flags = I2C_FLAG_WRITE,
        .buf   = { { _reg_config, 2 },
                   { 0, 0 },
        }
    },
    {
        .addr  = MAX44009_ADDRESS,
        .flags = I2C_FLAG_WRITE,
        .buf   = { { _reg_threshold_timer, 2 },
                   { 0, 0 },
        }
    },
    {
        .addr  = MAX44009_ADDRESS,
        .flags = I2C_FLAG_WRITE,
        .buf   = { { _reg_threshold_low, 2 },
                   { 0, 0 },
        }
    },
    {
        .addr  = MAX44009_ADDRESS,
        .flags = I2C_FLAG_WRITE,
        .buf   = { { _reg_int_enable, 2 },
                   { 0, 0 },
        }
    }
};

// +--------------------------------------------------------------------------+
// | Task
// +--------------------------------------------------------------------------+
static bool daylight_sensor_task_run_cycle(Task* self) {
    DaylightSensor* dl_self = (DaylightSensor*)self;
    if (dl_self->_config_state_ptr < dl_self->_config_states) {
        if (i2cTransferInProgress == dl_self->_last_state) {
            dl_self->_last_state = I2C_Transfer(dl_self->_i2c_peripheral);
            if (i2cTransferDone == dl_self->_last_state) {
                dl_self->_config_state_ptr++;
            }
        } else {
            dl_self->_last_state = I2C_TransferInit(dl_self->_i2c_peripheral, &(_config_messages[dl_self->_config_state_ptr]) );
        }
        return false;
    } else {
        return true;
    }
}

// +--------------------------------------------------------------------------+
// | DaylightSensor
// +--------------------------------------------------------------------------+
DaylightSensor* init_daylight_sensor_max44009(DaylightSensor* init, I2C_TypeDef* i2c_peripheral) {
    if (init) {
        init->super.run_cycle = daylight_sensor_task_run_cycle;
        init->_i2c_peripheral = i2c_peripheral;
        init->_last_state = i2cTransferDone;
        init->_config_states = sizeof(_config_messages) / sizeof(I2C_TransferSeq_TypeDef);
        init->_config_state_ptr = 0;
    }
    return init;
}
