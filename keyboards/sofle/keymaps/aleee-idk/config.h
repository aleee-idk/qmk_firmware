#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
