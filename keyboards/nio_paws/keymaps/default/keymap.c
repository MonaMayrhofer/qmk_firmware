// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"


enum layer_names {
    NLBQZ,//NL_BASE_QWERTZ,
    NLSPC,//NL_SPECIALS,
    NLPRO,//NL_PROGRAMMER,
    NLCTL,//NL_CONTROL,
    NLADV//NL_ADVANCED
};

// https://docs.qmk.fm/keycodes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     */
    [NLBQZ] = LAYOUT_niopaws(

        //Left
        DE_1       ,DE_2       ,DE_W       ,DE_E       ,DE_R       ,DE_T       ,DE_4
       ,KC_ESC     ,DE_Q       ,DE_S       ,DE_D       ,DE_F       ,DE_G       ,DE_5
       ,KC_LSFT    ,DE_A       ,DE_X       ,DE_C       ,DE_V       ,DE_B
                   ,DE_Y                               ,KC_LEFT_GUI,MO(NLPRO)  ,KC_SPC        ,DE_6
                                                                               ,DE_7          ,KC_RALT

        //Right
                               ,DE_Z       ,DE_U       ,DE_I       ,DE_O       ,DE_P          ,DE_SS
                               ,DE_H       ,DE_J       ,DE_K       ,DE_L       ,KC_ENTER      ,KC_TAB
                               ,DE_N       ,DE_M       ,DE_COMM    ,DE_DOT     ,DE_MINS
       ,_______    ,MO(NLCTL)  ,MO(NLSPC)  ,DE_1
       ,KC_LALT    ,_______
        ),


    [NLSPC] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,DE_2       ,DE_3       ,DE_4       ,DE_5       ,_______
       ,_______    ,DE_1       ,KC_BSPC    ,DE_UDIA    ,DE_ODIA    ,KC_DEL     ,_______
       ,_______    ,DE_ADIA    ,_______    ,_______    ,_______    ,_______
                   ,DE_CIRC                            ,_______    ,_______    ,_______       ,_______
                                                                               ,_______       ,_______

        //Right
                               ,DE_6       ,DE_7       ,DE_8       ,DE_9       ,DE_0        ,DE_ACUT
                               ,KC_LEFT    ,KC_DOWN    ,KC_UP      ,KC_RIGHT   ,_______     ,_______
                               ,_______    ,_______    ,_______    ,_______    ,_______
       ,_______    ,KC_TRNS    ,_______    ,_______
       ,_______    ,_______
        ),
    [NLPRO] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,DE_DQUO    ,_______    ,DE_DLR     ,DE_TILD    ,_______
       ,DE_CIRC    ,DE_EXLM    ,DE_LABK    ,DE_RABK    ,DE_PLUS    ,DE_HASH    ,_______
       ,_______    ,_______    ,_______    ,_______    ,DE_PIPE    ,_______
                   ,_______                            ,_______    ,_______    ,_______     ,_______
                                                                               ,_______     ,_______

        //Right
                               ,DE_AMPR    ,DE_LCBR    ,DE_LBRC    ,DE_RBRC     ,DE_RCBR    ,_______
                               ,DE_SLSH    ,_______    ,DE_LPRN    ,DE_RPRN     ,DE_EQL     ,_______
                               ,_______    ,_______    ,_______    ,_______     ,_______
       ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______
        ),

    [NLCTL] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,KC_F2      ,KC_F3      ,KC_F4      ,KC_F5      ,_______
       ,_______    ,KC_F1      ,KC_PSCR    ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______    ,_______    ,_______    ,_______    ,_______
                   ,_______                            ,_______    ,KC_INS     ,_______     ,_______
                                                                               ,_______     ,_______

        //Right
                               ,KC_F6      ,KC_F7      ,KC_F8      ,KC_F9       ,KC_F10     ,_______
                               ,KC_HOME    ,KC_PGDN    ,KC_PGUP    ,_______     ,_______    ,_______
                               ,KC_END     ,_______    ,_______    ,_______     ,_______
       ,MO(NLADV) ,_______     ,_______    ,_______
       ,_______   ,_______
        ),

    [NLADV] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,KC_F12     ,KC_F13     ,KC_F14     ,KC_F15     ,_______
       ,KC_F21     ,KC_F11     ,_______    ,_______    ,_______    ,_______    ,_______
       ,KC_F22     ,_______    ,_______    ,_______    ,_______    ,_______
                   ,_______                            ,_______    ,_______    ,_______     ,_______
                                                                               ,_______     ,_______

        //Right
                               ,KC_F16     ,KC_F17     ,KC_F18     ,KC_F19      ,KC_F20     ,KC_F23
                               ,_______    ,_______    ,_______    ,_______     ,_______    ,KC_F24
                               ,DB_TOGG    ,QK_BOOT    ,QK_RBT     ,_______     ,_______
       ,_______    ,_______    ,_______    ,_______
       ,_______    ,_______
        )

/*
*/


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

