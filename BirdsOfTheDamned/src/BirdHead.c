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

static void bird_head_set_all_brightness(BirdHead* self, uint32_t brightness) {
    // TODO: LIRP to 16 bit range
    TIMER_CompareBufSet(self->_timer, self->_channel_left_eye, brightness);
    TIMER_CompareBufSet(self->_timer, self->_channel_right_eye, brightness);
}

BirdHead* init_bird_head(BirdHead* init, TIMER_TypeDef* timer, unsigned int channel_left_eye, unsigned int channel_right_eye) {
    if (init) {

        TIMER_CompareBufSet(timer, channel_left_eye, 0);
        TIMER_CompareBufSet(timer, channel_right_eye, 0);

        init->_timer = timer;
        init->_channel_left_eye = channel_left_eye;
        init->_channel_right_eye = channel_right_eye;
        init->set_all_brightness = bird_head_set_all_brightness;
    }
    return init;
}
