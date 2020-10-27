/*
Copyright 2020 ruwey

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID    0x20a0
#define PRODUCT_ID   0x4247
#define DEVICE_VER   0x0001
#define MANUFACTURER LeeKu
#define PRODUCT      YAS62

// Matrix Dimensions
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

// Pins                   0   1   2   3   4   5   6   7   8   9   a   b   c   d   e   f
#define MATRIX_ROW_PINS { C3, C4, C5, C6, C7 }
#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B2, B3, B4, B6, B5, B7 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

//#define BACKLIGHT_LEVELS 1

// RGB Backlight Support
//#define RGB_DI_PIN C1
#define RGBLED_NUM 12
#define RGBLIGHT_ANIMATIONS
//#define WS2812_ADDRESS 0x11
//#define WS2812_TIMEOUT 10000
//#define WS2812_TRST_US 120
