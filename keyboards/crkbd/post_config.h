/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#ifndef BOOTMAGIC_LITE_ROW
#    define BOOTMAGIC_LITE_ROW 0
#endif
#ifndef BOOTMAGIC_LITE_COLUMN
#    define BOOTMAGIC_LITE_COLUMN 1
#endif

#ifndef BOOTMAGIC_LITE_ROW_RIGHT
#    define BOOTMAGIC_LITE_ROW_RIGHT 4
#endif
#ifndef BOOTMAGIC_LITE_COLUMN_RIGHT
#    define BOOTMAGIC_LITE_COLUMN_RIGHT 1
#endif

#ifdef RGBLIGHT_ENABLE
#    ifndef RGBLIGHT_LIMIT_VAL
#        define RGBLIGHT_LIMIT_VAL 120
#    endif
#endif

#ifdef RGB_MATRIX_ENABLE
#    ifndef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#        define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    endif
#endif

#ifdef OLED_ENABLE
    #ifndef OLED_FONT_H
        #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
    #endif
#endif

// MY OLD STUFF FROM BEFORE I REFRESHED MY LOCAL REPO
// My additions
//#define SPLIT_USB_DETECT
// Default is 2000
//#define SPLIT_USB_TIMEOUT 10000
//#define SPLIT_WATCHDOG_ENABLE
// Default is 3000
//#define SPLIT_WATCHDOG_TIMEOUT 3000