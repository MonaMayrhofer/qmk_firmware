// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"


enum layer_names {
    NLBQZ,//NL_BASE_QWERTZ,
    NLSPC,//NL_SPECIALS,
    NLPRO,//NL_PROGRAMMER,
    NLCTL,//NL_CONTROL,
    NLADV,//NL_ADVANCED
    NLSGL//NL_SINGLE_HANDED
};

// https://docs.qmk.fm/keycodes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     */
    [NLBQZ] = LAYOUT_niopaws(

        //Left
        KC_BSPC    ,DB_TOGG    ,DE_W       ,DE_E       ,DE_R       ,DE_T       ,TO(NLSGL)
       ,KC_ESC     ,DE_Q       ,DE_S       ,DE_D       ,DE_F       ,DE_G       ,MO(NLCTL)
       ,KC_LSFT    ,DE_A       ,DE_X       ,DE_C       ,DE_V       ,DE_B
                   ,DE_Y                               ,KC_LEFT_GUI,MO(NLPRO)  ,KC_SPC        ,KC_LALT
                                                                               ,KC_LCTL       ,KC_RALT

        //Right
                   ,DE_X       ,DE_Z       ,DE_U       ,DE_I       ,DE_O       ,_______       ,_______
                   ,DE_X       ,DE_H       ,DE_J       ,DE_K       ,DE_L       ,DE_P          ,DE_SS
                               ,DE_N       ,DE_M       ,DE_COMM    ,DE_DOT     ,KC_ENTER      ,KC_TAB
       ,DE_X       ,MO(NLCTL)  ,MO(NLSPC)  ,DE_1                               ,DE_MINS
       ,KC_NO      ,DE_X
        ),

    [NLSGL] = LAYOUT_niopaws(

        //Left
        KC_NO      ,DE_Q       ,DE_W       ,DE_E       ,KC_NO      ,KC_NO      ,TO(NLBQZ)
       ,KC_ESC     ,DE_A       ,DE_S       ,DE_D       ,DE_F       ,KC_NO      ,KC_NO
       ,KC_LSFT    ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO
                   ,KC_NO                              ,KC_NO      ,KC_NO      ,KC_SPC        ,KC_LALT
                                                                               ,KC_LCTL       ,KC_RALT

        //Right
                   ,_______    ,DE_Z       ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO         ,KC_NO
                   ,_______    ,DE_H       ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO         ,KC_NO
                               ,DE_N       ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO         ,_______
       ,KC_NO      ,KC_NO      ,KC_NO      ,KC_NO                              ,_______
       ,KC_NO      ,KC_NO
        ),



    [NLSPC] = LAYOUT_niopaws(

        //Left
        _______    ,_______    ,DE_2       ,DE_3       ,DE_4       ,DE_5       ,_______
       ,_______    ,DE_1       ,KC_BSPC    ,DE_UDIA    ,DE_ODIA    ,KC_DEL     ,_______
       ,_______    ,DE_ADIA    ,_______    ,_______    ,_______    ,_______
                   ,DE_CIRC                            ,_______    ,_______    ,_______       ,_______
                                                                               ,_______       ,_______

        //Right
                    ,_______   ,DE_6       ,DE_7       ,DE_8       ,DE_9       ,_______     ,_______
                    ,_______   ,KC_LEFT    ,KC_DOWN    ,KC_UP      ,KC_RIGHT   ,DE_0        ,DE_ACUT
                               ,_______    ,_______    ,_______    ,_______    ,_______     ,_______
       ,_______    ,KC_TRNS    ,_______    ,_______                            ,_______
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
                   ,_______    ,DE_AMPR    ,DE_LCBR    ,DE_LBRC    ,DE_RBRC     ,_______    ,_______
                   ,_______    ,DE_SLSH    ,_______    ,DE_LPRN    ,DE_RPRN     ,DE_RCBR    ,_______
                               ,_______    ,_______    ,_______    ,_______     ,DE_EQL     ,_______
       ,_______    ,_______    ,_______    ,_______                             ,_______
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
                  ,_______     ,KC_F6      ,KC_F7      ,KC_F8      ,KC_F9       ,_______    ,_______
                  ,_______     ,KC_HOME    ,KC_PGDN    ,KC_PGUP    ,_______     ,KC_F10     ,_______
                               ,KC_END     ,_______    ,_______    ,_______     ,_______    ,_______
       ,MO(NLADV) ,_______     ,_______    ,_______                             ,_______
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
                   ,_______    ,KC_F16     ,KC_F17     ,KC_F18     ,KC_F19      ,_______    ,KC_F23
                   ,_______    ,_______    ,_______    ,_______    ,_______     ,KC_F20     ,KC_F24
                               ,DB_TOGG    ,QK_BOOT    ,QK_RBT     ,_______     ,_______    ,_______
       ,_______    ,_______    ,_______    ,_______                             ,_______
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
