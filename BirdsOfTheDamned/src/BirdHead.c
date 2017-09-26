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

#include "BirdHead.h"

#define MAX_INTENSITY 0xFFFF

static void bird_head_set_mode(BirdHead* self, BirdEyeMode mode) {
    if (BIRDEYEMODE_OFF == mode) {
        TIMER_CompareBufSet(self->_timer, self->_channel_left_eye, 0);
        TIMER_CompareBufSet(self->_timer, self->_channel_right_eye, 0);
    }
}

void bird_head_set_intensity(BirdHead* self, double intensity) {
    const double x = (double)MAX_INTENSITY * intensity;
    uint32_t y;
    if (x < 0) {
        y = 0;
    } else if (x > MAX_INTENSITY) {
        y = MAX_INTENSITY;
    } else {
        y = (uint32_t)x;
    }

    TIMER_CompareBufSet(self->_timer, self->_channel_left_eye, y);
    TIMER_CompareBufSet(self->_timer, self->_channel_right_eye, y);
}

BirdHead* init_bird_head(BirdHead* init, TIMER_TypeDef* timer, unsigned int channel_left_eye, unsigned int channel_right_eye) {
    if (init) {

        init->_timer = timer;
        init->_channel_left_eye = channel_left_eye;
        init->_channel_right_eye = channel_right_eye;

        init->set_mode = bird_head_set_mode;
        init->set_intensity = bird_head_set_intensity;

        bird_head_set_mode(init, BIRDEYEMODE_OFF);
    }
    return init;
}
