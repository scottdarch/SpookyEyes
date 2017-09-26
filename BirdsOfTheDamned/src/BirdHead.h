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

#include <stdint.h>
#include "em_timer.h"

typedef enum {
    BIRDEYEMODE_OFF,
    BIRDEYEMODE_ON
} BirdEyeMode;


typedef struct BirdHeadType {
    void (*set_mode)(struct BirdHeadType*, BirdEyeMode);
    void (*set_intensity)(struct BirdHeadType*, double);

    // +-----------------------------------------------------------------------+
    // | PRIVATE
    // +-----------------------------------------------------------------------+
    TIMER_TypeDef* _timer;
    unsigned int _channel_left_eye;
    unsigned int _channel_right_eye;
} BirdHead;

BirdHead* init_bird_head(BirdHead* init, TIMER_TypeDef* timer, unsigned int channel_left_eye, unsigned int channel_right_eye);
