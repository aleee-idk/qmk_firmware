#pragma once

#ifdef OLED_ENABLE
#    include "oled_setup.h"
#endif

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

enum sofle_layers {
    _QWERTY,
    _COLEMAK,
    _GAME,
    _SYMBOLS,
    _NUMPAD,
    _SYSTEM,
    _ADJUST,
};

enum custom_keycodes { KC_QWERTY = SAFE_RANGE, KC_COLEMAK, KC_GAME, KC_SYMBOLS, KC_NUMPAD, KC_SYSTEM, KC_ADJUST, KC_PRVWD, KC_NXTWD, KC_LSTRT, KC_LEND, KC_DLINE };
