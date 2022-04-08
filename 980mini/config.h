// Copyright 2022 rooski15 (@rooski15)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"


#define RGB_DI_PIN B7
// The number of LEDs connected
#define DRIVER_LED_TOTAL  81
//#ifdef RGB_DI_PIN
#    define RGBLED_NUM 81

#define RGB_MATRIX_CENTER { 112, 32 }

//RGB Modes
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT

//Additional defines
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
