/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define KC_ALTGRV LALT_T(KC_GRV)
#define KC_LOWBSP LT(1, KC_BSPC)
#define KC_SFTSPC RSFT_T(KC_SPC)
#define KC_GUISPC LGUI_T(KC_SPC)
#define KC_RAIENT LT(2, KC_ENT)
#define KC_CTLTAB RCTL_T(KC_TAB)
#define KC_SSK SGUI(KC_5)
#define KC_LWORD LALT(KC_LEFT)
#define KC_RWORD LALT(KC_RIGHT)
#define KC_CMDSPC LGUI(KC_SPC)
#define KC_LTAB SGUI(KC_LBRC)
#define KC_LAPP LCTL(KC_UP)
#define KC_RTAB SGUI(KC_RBRC)
#define KC_LDSK LCTL(KC_LEFT)
#define KC_LFOL LCTL(KC_DOWN)
#define KC_RDSK LCTL(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
              KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_NO,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
              KC_NO,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,   KC_NO,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,LCTL_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NO,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_ALTGRV, KC_LOWBSP, KC_GUISPC,     KC_SFTSPC, KC_RAIENT, KC_CTLTAB
                                     //`---------------------------------'  `-------------------------------'
    ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,   KC_SSK, KC_LWORD,    KC_UP, KC_RWORD, KC_MINS,                   KC_EQL, KC_PGUP, KC_PGDN,   KC_NO, KC_QUOT, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,   KC_ESC, KC_LEFT, KC_DOWN, KC_RIGHT, KC_CMDSPC,                  KC_HOME,   KC_END, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LALT,   MO(1), KC_LSFT,     KC_RSFT,   MO(3), KC_RCTL
                                        //`--------------------------'  `--------------------------'
    ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,   KC_NO, KC_LTAB, KC_LAPP, KC_RTAB,  KC_UNDS,                     KC_PLUS,   KC_NO,  KC_DEL, KC_BSPC, KC_DQUO, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,   KC_NO, KC_LDSK, KC_LFOL, KC_RDSK, KC_CMDSPC,                      KC_NO,   KC_NO, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS,   MO(3), KC_LSFT,     KC_RSFT,   MO(2), KC_TRNS
                                        //`--------------------------'  `--------------------------'
    ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,  KC_F11,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_F12, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_NO, KC_TRNS,   KC_NO,     KC_NO, KC_TRNS,   KC_NO
                                        //`--------------------------'  `--------------------------'
    )
};