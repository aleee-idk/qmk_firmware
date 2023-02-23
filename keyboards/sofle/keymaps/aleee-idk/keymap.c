#include QMK_KEYBOARD_H
#include "keymap_spanish.h"

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _COLEMAK,
    _GAME,
    _SYMBOLS,
    _NUMPAD,
    _SYSTEM,
    _ADJUST,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
    KC_GAME,
    KC_SYMBOLS,
    KC_NUMPAD,
    KC_SYSTEM,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   |  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  | BSPC |
 * |------+------+------+------+------+------|  PLAY |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LALT | LCTR | LGUI |SYMBOLS | /Space  /       \Enter \  |SYSTEM | RGUI | RCTR | ALGR |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *             `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  ES_QUOT, \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  ES_GRV, \
  KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_BSPC, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MPLY,    XXXXXXX,KC_N,    KC_M, ES_COMM,  ES_DOT, ES_MINS,  KC_RSFT, \
             KC_LALT ,KC_LCTL, KC_LGUI, KC_SPC, KC_SYMBOLS,      KC_SYSTEM,  KC_ENT, KC_RGUI, KC_RCTL, KC_ALGR \
),
/*
 * GAME
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   |  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  | BSPC |
 * |------+------+------+------+------+------|  PLAY |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LALT | LCTR | LGUI |SYMBOLS | /Space  /       \Enter \  |SYSTEM | RGUI | RCTR | ALGR |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *             `----------------------------------'           '------''---------------------------'
 */

[_GAME] = LAYOUT( \
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  ES_QUOT, \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  ES_GRV, \
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_BSPC, \
  KC_LCTL, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MPLY,    XXXXXXX,KC_N,    KC_M, ES_COMM,  ES_DOT, ES_MINS, KC_RSFT, \
             KC_LGUI ,KC_LALT, KC_LCTL, KC_SPC, KC_SYMBOLS,      KC_SYSTEM,  KC_ENT, KC_RCTL, KC_ALGR, KC_RGUI \
),
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |SYMBOLS | /Enter  /       \Space \  |SYSTEM | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  ES_QUOT,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  ES_GRV,
  KC_ESC,   KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_BSPC,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MPLY,      XXXXXXX,KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
             KC_LALT ,KC_LCTL, KC_LGUI, KC_SPC, KC_SYMBOLS,      KC_SYSTEM,  KC_ENT, KC_RGUI, KC_RCTL, KC_ALGR \
),
/* SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  °   |   !  |   "  |   #  |   $  |   %  |                    |   &  |   /  |   (  |   )  |   =  |   ?  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   <  |   >  |   [  |   ]  |   "  |                    |   *  |   /  |   +  |   -  |   \  |   ^  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   ¿  |   ?  |   (  |   )  |   '  |-------.    ,-------|   |  |   $  |   #  |   =  |   ~  | BSCP |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|   ¡  |   !  |   {  |   }  |   `  |-------|    |-------|   &  |   %  |   ;  |   :  |   _  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LALT | LCTR | LGUI |SYMBOLS | /SPACE  /       \Enter \  |SYSTEM | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_SYMBOLS] = LAYOUT(
  S(KC_GRV),        S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                                 S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(ES_QUOT),
  _______,          ES_LABK ,S(ES_LABK),  S(KC_QUOT), S(KC_BSLS), S(KC_2),                    KC_PAST, KC_PSLS, KC_PPLS, KC_PMNS, ALGR(ES_QUOT), ALGR(KC_QUOT),
  KC_NUMPAD,   ES_IEXL,   S(ES_QUOT), S(KC_8),  S(ES_9), ES_QUOT,                              KC_GRV, S(KC_4), S(KC_3), S(KC_0), ALGR(ES_PLUS), _______,
  _______,          S(ES_IEXL), S(KC_1), KC_QUOT, KC_BSLS, ALGR(KC_NUHS), _______,       _______, S(KC_6),  S(KC_5), S(ES_COMM), S(ES_DOT), S(ES_MINS), _______,
                       _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______
),
/* ALT SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |   /  |   4  |   5  |   6  |   -  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   *  |   1  |   2  |   3  |   +  |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   0  |   .  |Enter |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LALT | LCTR | LGUI |SYMBOLS | /SPACE  /       \Enter \  |SYSTEM | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_NUMPAD] = LAYOUT(
  XXXXXXX, XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,                           XXXXXXX,  KC_P7  , KC_P8,  KC_P9 ,  XXXXXXX ,XXXXXXX, \
  XXXXXXX, XXXXXXX , XXXXXXX , XXXXXXX, XXXXXXX , XXXXXXX,                           KC_PSLS,  KC_P4  , KC_P5,  KC_P6 ,  KC_PMNS ,XXXXXXX, \
  XXXXXXX, XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,                           KC_PAST, KC_P1  , KC_P2,  KC_P3 ,  KC_PPLS ,KC_BSPC, \
  XXXXXXX, XXXXXXX , XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,          XXXXXXX, XXXXXXX,  KC_P0  , KC_PDOT,  KC_PENT ,  XXXXXXX ,XXXXXXX, \
                _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______
),
/* SYSTEM
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Ins  | Pscr |S+Pscr|      |      |                    | Home | PgDN | PgUp | End  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | LAt  | LCtl |LShift|      | Caps |-------.    ,-------| Left | Down |  Up  | Rigth|Shift | Supr |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | Prev | Play | Next | Ctrl|      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LALT | LCTR | LGUI |SYMBOLS | /SPACE  /       \Enter \  |SYSTEM | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_SYSTEM] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11, KC_F12,
  _______,  KC_INS,  KC_PSCR,   S(KC_PSCR),  XXXXXXX, XXXXXXX,                       KC_HOME, KC_PGDN,   KC_PGUP, KC_END, XXXXXXX, _______,
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_LEFT,  KC_DOWN, KC_UP, KC_RIGHT,  KC_RSFT, KC_DEL,
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_RCTL, _______,
                         _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |QWERTY|COLEMAK|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |SYMBOLS | /Enter  /       \Space \  |SYSTEM | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX , XXXXXXX,  XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX,KC_QWERTY,KC_COLEMAK, KC_GAME,XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX, CG_TOGG, XXXXXXX,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
  )
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _COLEMAK:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("GAME"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case _SYSTEM:
            oled_write_P(PSTR("Sys"), false);
            break;
        case _SYMBOLS:
            oled_write_ln_P(PSTR("Symls"), false);
            break;
        case _NUMPAD:
            oled_write_ln_P(PSTR("Nmpd"), false);
            break;
        case _ADJUST:
            oled_write_ln_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);

    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case KC_GAME:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAME);
            }
            return false;
        case KC_SYMBOLS:
            if (record->event.pressed) {
                layer_on(_SYMBOLS);
                update_tri_layer(_SYMBOLS, _SYSTEM, _ADJUST);
            } else {
                layer_off(_SYMBOLS);
                update_tri_layer(_SYMBOLS, _SYSTEM, _ADJUST);
            }
            return false;
        case KC_NUMPAD:
            if (record->event.pressed) {
                layer_on(_NUMPAD);
            } else {
                layer_off(_NUMPAD);
            }
            return false;
        case KC_SYSTEM:
            if (record->event.pressed) {
                layer_on(_SYSTEM);
                update_tri_layer(_SYMBOLS, _SYSTEM, _ADJUST);
            } else {
                layer_off(_SYSTEM);
                update_tri_layer(_SYMBOLS, _SYSTEM, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (get_highest_layer(layer_state)) {
      case _COLEMAK:
      case _QWERTY:
        if (index == 0) {
          if (clockwise) {
              tap_code(KC_VOLD);
          } else {
              tap_code(KC_VOLU);
          }
        }
      break;

      case _SYSTEM:
          if (index == 0) {
              if (clockwise) {
                  tap_code(KC_MPRV);
              } else {
                  tap_code(KC_MNXT);
              }
          }
      break;
    }
    return true;
}

#endif
