// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_UP,    // GP1
        KC_LEFT,  // GP2
        KC_RGHT,  // GP3
        KC_DOWN //GP4
    )
};

// Encoder behavior
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][2][2] = {
    [0] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif

// OLED display
#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    oled_write_ln("LucaMacroPad", false);
}
#endif