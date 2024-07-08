// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     */
    [0] = LAYOUT_niopaws(

        //
        KC_Q, KC_W, KC_E, KC_R, KC_T, //
        KC_A, KC_S, KC_D, KC_F, KC_G, //
        KC_Y, KC_X, KC_C, KC_V, KC_B, //
        KC_SPC, KC_LCTL,              //
        KC_LSFT,
        KC_LALT,                            //
                                            //
        KC_P, KC_O, KC_I, KC_U, KC_Z,       //
        KC_L, KC_L, KC_K, KC_J, KC_H,       //
        KC_SPC, KC_SPC, KC_SPC, KC_M, KC_N, //
        KC_SPC, KC_SPC, KC_SPC,
        KC_SPC, //
        KC_SPC,
        KC_SPC //
        )};
