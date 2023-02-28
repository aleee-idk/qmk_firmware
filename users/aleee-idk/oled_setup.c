/*
 * Copyright QMK Community
 * Copyright 2021 Tyler Thrailkill (@snowe/@snowe2010) <tyler.b.thrailkill@gmail.com>
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

#ifdef OLED_ENABLE

#    include QMK_KEYBOARD_H
#    include "quantum.h"
#    include "aleee-idk.h"

#    include <stdio.h> // for keylog?

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_270; // flips the display 180 degrees if offhand
    }
    return OLED_ROTATION_270;
}

void oled_render_status(void) {
    static const char PROGMEM tux[] = {153, 154, 10, 180, 180, 185, 186, 0};

    static const char PROGMEM mac[] = {149, 150, 10, 180, 180, 181, 182, 0};

    oled_set_cursor(2, 0);

    if (keymap_config.swap_lctl_lgui) {
        oled_write_P(mac, false);
    } else {
        oled_write_P(tux, false);
    }

    oled_set_cursor(0, 4);

    oled_write_P(PSTR("GUI"), false);

    oled_set_cursor(1, 5);
    oled_write_P(PSTR("Dis!"), keymap_config.no_gui);

    oled_set_cursor(0, 7);

    oled_write_P(PSTR("Mode"), false);
    oled_set_cursor(1, 8);
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
            oled_write_ln_P(PSTR("Undef"), false);
    }

    oled_set_cursor(0, 10);
    oled_write_P(PSTR("Layer"), false);
    oled_set_cursor(1, 11);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case _SYSTEM:
            oled_write_ln_P(PSTR("Sys"), false);
            break;
        case _SYMBOLS:
            oled_write_ln_P(PSTR("Syml"), false);
            break;
        case _NUMPAD:
            oled_write_ln_P(PSTR("Nmpd"), false);
            break;
        case _ADJUST:
            oled_write_ln_P(PSTR("Adj"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }

#    ifdef LUNA_ENABLE
    render_luna(0, 13);
#    endif
}

bool oled_task_user(void) {
#    ifdef LUNA_ENABLE
    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();
#    endif

    if (is_keyboard_master()) {
        oled_render_status();

    } else {
    }
    return false;
}

#endif // OLED_ENABLE
