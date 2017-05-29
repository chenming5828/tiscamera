/*
 * Copyright 2015 The Imaging Source Europe GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TCAM_PROPERTY_IDENTIFICATIONS_H
#define TCAM_PROPERTY_IDENTIFICATIONS_H

typedef unsigned int TCAM_PROPERTY_ID;

const TCAM_PROPERTY_ID TCAM_PROPERTY_INVALID = 0x199e0001;

const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE      = 0x199e0002;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE_AUTO = 0x199e0003;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE_AUTO_REFERENCE = 0x199e3003;
const TCAM_PROPERTY_ID TCAM_PROPERTY_HIGHLIGHT_REDUCTION = 0x199e1003;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_REFERENCE = 0x199e1004;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE_AUTO_UPPER_LIMIT_AUTO = 0x199e1005;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE_AUTO_UPPER_LIMIT = 0x199e1006;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EXPOSURE_AUTO_LOWER_LIMIT = 0x199e1007;

const TCAM_PROPERTY_ID TCAM_PROPERTY_GAIN       = 0x199e0004;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GAIN_RED   = 0x199e0005;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GAIN_GREEN = 0x199e0006;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GAIN_BLUE  = 0x199e0007;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GAIN_AUTO  = 0x199e0008;

const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_MODE       = 0x199e0009;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_SOURCE     = 0x199e0010;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_ACTIVATION = 0x199e0011;
const TCAM_PROPERTY_ID TCAM_PROPERTY_SOFTWARETRIGGER    = 0x199e0012;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_DENOISE    = 0x199e3012;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_MASK       = 0x199e3013;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_DEBOUNCER  = 0x199e3014;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_DELAY      = 0x199e3015;

const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_SELECTOR  = 0x199e3016;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_OPERATION = 0x199e3017;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_POLARITY = 0x199e3018;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_EXPOSURE_MODE = 0x199e3019;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_BURST_COUNT = 0x199e3020;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_DEBOUNCE_TIME_US = 0x199e3021;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_MASK_TIME_US = 0x199e3022;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TRIGGER_NOISE_SURPRESSION_TIME_US = 0x199e3023;

const TCAM_PROPERTY_ID TCAM_PROPERTY_GPIO  = 0x199e0013;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GPIN  = 0x199e0014;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GPOUT = 0x199e0015;

const TCAM_PROPERTY_ID TCAM_PROPERTY_OFFSET_X    = 0x199e0016;
const TCAM_PROPERTY_ID TCAM_PROPERTY_OFFSET_Y    = 0x199e0017;
const TCAM_PROPERTY_ID TCAM_PROPERTY_OFFSET_AUTO = 0x199e0018;

const TCAM_PROPERTY_ID TCAM_PROPERTY_BRIGHTNESS = 0x199e0019;
const TCAM_PROPERTY_ID TCAM_PROPERTY_CONTRAST   = 0x199e0020;
const TCAM_PROPERTY_ID TCAM_PROPERTY_SATURATION = 0x199e0021;
const TCAM_PROPERTY_ID TCAM_PROPERTY_HUE        = 0x199e0022;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GAMMA      = 0x199e0023;

const TCAM_PROPERTY_ID TCAM_PROPERTY_IRCUT     = 0x199e0030;
const TCAM_PROPERTY_ID TCAM_PROPERTY_IRIS      = 0x199e0031;
const TCAM_PROPERTY_ID TCAM_PROPERTY_IRIS_AUTO = 0x199e0032;

const TCAM_PROPERTY_ID TCAM_PROPERTY_FOCUS          = 0x199e0033;
const TCAM_PROPERTY_ID TCAM_PROPERTY_FOCUS_AUTO     = 0x199e0034;
const TCAM_PROPERTY_ID TCAM_PROPERTY_FOCUS_ONE_PUSH = 0x199e0035;

const TCAM_PROPERTY_ID TCAM_PROPERTY_ZOOM = 0x199e0036;

const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_ENABLE    = 0x199e0037;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_OPERATION = 0x199e0038;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_POLARITY  = 0x199e0039;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_DELAY     = 0x199e0040;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_DURATION  = 0x199e0041;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STROBE_EXPOSURE  = 0x199e0042;

const TCAM_PROPERTY_ID TCAM_PROPERTY_REVERSE_X         = 0x199e0050;
const TCAM_PROPERTY_ID TCAM_PROPERTY_REVERSE_Y         = 0x199e0051;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BLACKLEVEL        = 0x199e0100;
const TCAM_PROPERTY_ID TCAM_PROPERTY_CHUNK_MODE_ACTIVE = 0x199e0101;

const TCAM_PROPERTY_ID TCAM_PROPERTY_WB                               = 0x199e2001;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_AUTO                          = 0x199e2002;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_RED                           = 0x199e2003;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_GREEN                         = 0x199e2004;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_BLUE                          = 0x199e2005;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_ONCE                          = 0x199e2006;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_MODE                          = 0x199e2007;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_PRESET                        = 0x199e2008;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BALANCERATIO_SELECTOR            = 0x199e2009;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BALANCERATIO                     = 0x199e2010;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BALANCE_WHITE_AUTO_PRESET        = 0x199e2011;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BALANCE_WHITE_TEMPERATURE_PRESET = 0x199e2012;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_TEMPERATURE                   = 0x199e2013;
const TCAM_PROPERTY_ID TCAM_PROPERTY_WB_AUTO_PRESET                   = 0x199e2014;
const TCAM_PROPERTY_ID TCAM_PROPERTY_GREEN_PATTERN_FIX                = 0x199e2015;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TONEMAPPING                      = 0x199e2016;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TONEMAPPING_CONTRAST             = 0x199e2017;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TONEMAPPING_INTENSITY            = 0x199e2018;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TONEMAPPING_AUTO                 = 0x199e2019;

const TCAM_PROPERTY_ID TCAM_PROPERTY_SKIPPING           = 0x199e0338;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BINNING            = 0x199e0339;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BINNING_VERTICAL   = 0x199e0351;
const TCAM_PROPERTY_ID TCAM_PROPERTY_BINNING_HORIZONTAL = 0x199e0352;

const TCAM_PROPERTY_ID TCAM_PROPERTY_SHARPNESS = 0x199e0340;

const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_COUNT       = 0x199e4001;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_SELECTOR    = 0x199e4002;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_TYPE        = 0x199e4003;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_LINK        = 0x199e4004;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_ENDIANNESS  = 0x199e4005;
const TCAM_PROPERTY_ID TCAM_PROPERTY_STREAM_CHANNEL_PACKET_SIZE = 0x199e4006;
const TCAM_PROPERTY_ID TCAM_PROPERTY_EVENT_CHANNEL_COUNT        = 0x199e4007;

const TCAM_PROPERTY_ID TCAM_PROPERTY_PAYLOAD_SIZE       = 0x199e4500;
const TCAM_PROPERTY_ID TCAM_PROPERTY_PAYLOAD_PER_FRAME  = 0x199e4501;
const TCAM_PROPERTY_ID TCAM_PROPERTY_PAYLOAD_PER_PACKET = 0x199e4502;
const TCAM_PROPERTY_ID TCAM_PROPERTY_TOTAL_PACKET_SIZE  = 0x199e4503;
const TCAM_PROPERTY_ID TCAM_PROPERTY_PACKETS_PER_FRAME  = 0x199e4504;
const TCAM_PROPERTY_ID TCAM_PROPERTY_PACKET_TIME_US     = 0x199e4505;

const TCAM_PROPERTY_ID TCAM_PROPERTY_FACE_DETECTION      = 0x199e9000;
const TCAM_PROPERTY_ID TCAM_PROPERTY_NOISE_REDUCTION     = 0x199e9001;
const TCAM_PROPERTY_ID TCAM_PROPERTY_IMAGE_STABILIZATION = 0x199e9002;

const TCAM_PROPERTY_ID TCAM_PROPERTY_CHUNK_IMX174_FRAME_ID      = 0x199e9900;
const TCAM_PROPERTY_ID TCAM_PROPERTY_CHUNK_IMX174_FRAME_SET     = 0x199e9901;
const TCAM_PROPERTY_ID TCAM_PROPERTY_IMX174_WDR_SHUTTER2        = 0x199e9902;
const TCAM_PROPERTY_ID TCAM_PROPERTY_IMX174_HARDWARE_WDR_ENABLE = 0x199e9903;

const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_CONTROL = 0x199e9904;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_LEFT = 0x199e9905;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_TOP = 0x199e9906;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_WIDTH = 0x199e9907;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_HEIGHT = 0x199e9908;
const TCAM_PROPERTY_ID TCAM_PROPERTY_AUTO_FUNCTIONS_ROI_PRESET = 0x199e9909;

#endif /* TCAM_PROPERTY_IDENTIFICATIONS_H */
