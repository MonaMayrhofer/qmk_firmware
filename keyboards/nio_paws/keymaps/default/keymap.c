// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"


enum layer_names {
    NL_BASE_QWERTZ,
    NL_SPECIALS,
    NL_PROGRAMMER,
    NL_CONTROL,
    NL_ADVANCED
};

// https://docs.qmk.fm/keycodes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     */
    [NL_BASE_QWERTZ] = LAYOUT_niopaws(

        //Left
    KC_ESC,     DE_Q       ,DE_W       ,DE_E       ,DE_R,       DE_T,
     KC_LSFT,     DE_A       ,DE_S       ,DE_D       ,DE_F,       DE_G,
               DE_Y       ,DE_X       ,DE_C       ,DE_V,       DE_B,
                                                   KC_LEFT_GUI, MO(NL_PROGRAMMER),    KC_SPC,        _______,
                                                                           KC_LCTL,        KC_RALT,

        //Right
                                DE_Z,       DE_U,       DE_I,       DE_O,       DE_P,           DE_SS,
                                DE_H,       DE_J,       DE_K,       DE_L,       KC_ENTER,       KC_TAB,
                                DE_N,       DE_M,       DE_COMM,    DE_DOT,     DE_MINS,
        KC_RCTL,       MO(NL_CONTROL),     MO(NL_SPECIALS),    _______,
        KC_LALT,        _______
        ),



    [NL_SPECIALS] = LAYOUT_niopaws(

        //Left
        _______    ,DE_1       ,DE_2       ,DE_3       ,DE_4       ,DE_5
       ,_______    ,DE_ADIA    ,KC_BSPC    ,DE_UDIA    ,DE_ODIA    ,KC_DEL
                   ,_______    ,_______    ,_______    ,_______    ,_______
                                           ,_______    ,_______    ,_______     ,_______
                                                                   ,_______     ,_______

        //Right
                               ,DE_6       ,DE_7       ,DE_8       ,DE_9       ,DE_0        ,DE_ACUT
                               ,KC_LEFT    ,KC_DOWN    ,KC_UP      ,KC_RIGHT   ,_______     ,_______
                               ,_______    ,_______    ,_______    ,_______    ,_______
       ,_______    ,KC_TRNS    ,_______    ,_______
       ,_______    ,_______
        ),
    [NL_CONTROL] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______    ,_______    ,_______    ,_______    ,_______
                   ,_______    ,_______    ,_______    ,_______    ,_______
                                           ,_______    ,_______    ,_______     ,_______
                                                                   ,_______     ,_______

        //Right
                               ,_______    ,_______    ,_______    ,_______     ,_______    ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______    ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______
       ,MO(NL_ADVANCED),_______    ,_______    ,_______
       ,_______    ,_______
        ),

    [NL_PROGRAMMER] = LAYOUT_niopaws(

        //Left
        DE_CIRC    ,DE_EXLM    ,DE_DQUO    ,_______    ,DE_DLR     ,_______
       ,_______    ,_______    ,DE_LABK    ,DE_RABK    ,DE_PLUS    ,DE_HASH
                   ,_______    ,_______    ,DE_PIPE    ,_______    ,_______
                                           ,_______    ,_______    ,_______     ,_______
                                                                   ,_______     ,_______

        //Right
                               ,DE_AMPR    ,DE_LCBR    ,DE_LPRN    ,DE_RPRN     ,DE_RCBR    ,_______
                               ,DE_SLSH    ,_______    ,DE_LBRC    ,DE_RBRC     ,DE_EQL     ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______
       ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______
        ),
    [NL_ADVANCED] = LAYOUT_niopaws(

        //Left
    _______,   QK_DEBUG_TOGGLE,    _______,    _______,    _______,    QK_BOOTLOADER,
    _______,   _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,
                                            _______,    _______,   _______,     _______,
                                                                   _______,     _______,

        //Right
                                _______,    _______,    _______,   _______,    _______,    _______,
                                _______,    _______,    _______,   _______,    _______,    _______,
                                _______,    _______,    _______,   _______,    _______,
        KC_TRNS,    _______,    _______,    _______,
        _______,    KC_TRNS
        )



/*
    [NL_PROGRAMMER] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______    ,_______    ,_______    ,_______    ,_______
                   ,_______    ,_______    ,_______    ,_______    ,_______
                                           ,_______    ,_______    ,_______     ,_______
                                                                   ,_______     ,_______

        //Right
                               ,_______    ,_______    ,_______    ,_______     ,_______    ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______    ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______
       ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______
        )
    */
};
void keyboard_post_init(void){
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
}

