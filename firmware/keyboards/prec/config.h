/* Copyright 2026 yuto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS \
    { C13, A2, A1, C14 }

#define AMUX_COUNT 2
#define AMUX_MAX_COLS_COUNT 8

#define AMUX_EN_PINS \
    { B0, B1 }

#define AMUX_SEL_PINS \
    { B10, B11, B12 }

#define AMUX_COL_CHANNELS_SIZES \
    { 6, 6 }

// MUX0: COL0..COL5 are routed to channel 2,1,0,3,4,5 in the schematic.
#define AMUX_0_COL_CHANNELS \
    { 2, 1, 0, 3, 4, 5 }

// MUX1: COL6..COL11 are routed to channel 3,0,1,2,5,4 in the schematic.
#define AMUX_1_COL_CHANNELS \
    { 3, 0, 1, 2, 5, 4 }

#define AMUX_COL_CHANNELS AMUX_0_COL_CHANNELS, AMUX_1_COL_CHANNELS

#define DISCHARGE_PIN A4
#define ANALOG_PORT A3

#define DEFAULT_ACTUATION_MODE 0
#define DEFAULT_MODE_0_ACTUATION_LEVEL 620
#define DEFAULT_MODE_0_RELEASE_LEVEL 560
#define DEFAULT_MODE_1_INITIAL_DEADZONE_OFFSET DEFAULT_MODE_0_ACTUATION_LEVEL
#define DEFAULT_MODE_1_ACTUATION_OFFSET 90
#define DEFAULT_MODE_1_RELEASE_OFFSET 90
#define DEFAULT_EXTREMUM 1023
#define EXPECTED_NOISE_FLOOR 0
#define NOISE_FLOOR_THRESHOLD 50
#define BOTTOMING_CALIBRATION_THRESHOLD 100
#define DEFAULT_NOISE_FLOOR_SAMPLING_COUNT 30
#define DEFAULT_BOTTOMING_READING 1023
#define DEFAULT_CALIBRATION_STARTER true

#define DISCHARGE_TIME 10

#define EECONFIG_KB_DATA_SIZE 105

// Route VIA custom channel packets to keyboard-level handlers.
#define VIA_CUSTOM_LIGHTING_ENABLE
