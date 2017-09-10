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

static void bird_head_set_mode(BirdHead* self, BirdEyeMode mode) {
    self->_mode = mode;
}

static unsigned int bird_head_run_cycle(BirdHead* self) {
    if (self->_forward) {
        if (self->_intensity == 0xFFFF) {
            self->_forward = false;
        }
    } else if (self->_intensity == 0) {
        self->_forward = true;
    }
    if (self->_forward) {
        self->_intensity += 1;
    } else {
        self->_intensity -= 1;
    }
    TIMER_CompareBufSet(self->_timer, self->_channel_left_eye, self->_intensity);
    TIMER_CompareBufSet(self->_timer, self->_channel_right_eye, self->_intensity);
    return (self->_intensity != 0);
}

BirdHead* init_bird_head(BirdHead* init, TIMER_TypeDef* timer, unsigned int channel_left_eye, unsigned int channel_right_eye) {
    if (init) {

        TIMER_CompareBufSet(timer, channel_left_eye, 0);
        TIMER_CompareBufSet(timer, channel_right_eye, 0);

        init->_timer = timer;
        init->_channel_left_eye = channel_left_eye;
        init->_channel_right_eye = channel_right_eye;
        init->_mode = BIRDEYEMODE_OFF;
        init->_forward = true;
        init->_intensity = 0;

        init->run_cycle = bird_head_run_cycle;
        init->set_mode = bird_head_set_mode;
    }
    return init;
}
