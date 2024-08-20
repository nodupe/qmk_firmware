// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

//Disabled all that I could to reduce size.

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

#ifdef RGBLIGHT_ENABLE

#undef  RGBLIGHT_EFFECT_RGB_TEST
#undef  RGBLIGHT_EFFECT_ALTERNATING
#undef  RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef  RGBLIGHT_EFFECT_KNIGHT
#undef  RGBLIGHT_EFFECT_TWINKLE

#endif
#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_TILDE,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  C(KC_C), \
KC_HYPR,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  C(KC_X), \
KC_MEH,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  LALT(KC_X), \
                      K32,  K33,  K34,         K35,  K36,  K37                                \
)

