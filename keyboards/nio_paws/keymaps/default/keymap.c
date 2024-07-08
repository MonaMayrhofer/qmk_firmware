// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     */
    [0] = LAYOUT_niopaws(

        //
        KC_Q, KC_W, KC_E, KC_R, KC_T,       //
        KC_A, KC_S, KC_D, KC_F, KC_G,       //
        KC_Y, KC_X, KC_C, KC_V, KC_B,       //
        KC_1, KC_2,                         //
        KC_3, KC_4,                         //
                                            //
        KC_Z, KC_U, KC_I, KC_O, KC_P,       //
        KC_H, KC_J, KC_K, KC_L, KC_L,       //
        KC_N, KC_M, KC_SPC, KC_SPC, KC_SPC, //
        KC_1, KC_2, KC_3, KC_4,             //
        KC_5, KC_6                          //
        )};
