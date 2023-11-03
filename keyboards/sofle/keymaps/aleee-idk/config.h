#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP
