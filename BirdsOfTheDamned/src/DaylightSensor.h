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

#include "em_i2c.h"

typedef struct DaylightSensorType {

    // +-----------------------------------------------------------------------+
    // | PRIVATE
    // +-----------------------------------------------------------------------+
    I2C_TransferSeq_TypeDef _transfer;
    I2C_TypeDef* _i2c_peripheral;
    I2C_TransferReturn_TypeDef _last_state;

    size_t _config_states;
    size_t _config_state_ptr;
} DaylightSensor;

DaylightSensor* init_daylight_sensor_max44009(DaylightSensor* init, I2C_TypeDef* i2c_peripheral);
