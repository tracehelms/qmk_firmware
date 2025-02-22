// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _COLE,
    _QWER,
};


/****************************************************************************************************
*
* Keymap: Default Layer in Colemak
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Caps   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   F  |   P  |   G  |                           |   J  |   L  |   U  |   Y  |  ;:  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Esc    |   A  |   R  |   S  |   T  |   D  |                           |   H  |   N  |   E  |   I  |   O  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   K  |   M  |  ,<  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   |  '"  | Left | Right|                                         | Down |  Up  |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Bksp | Gui  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Alt  |         | Alt  |      |      |
*                                 |Space |Enter |------|         |------| Enter| Space|
*                                 |      |      | Ctrl |         | Ctrl |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLE] = LAYOUT(
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TO(_QWER), QK_BOOT,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                                                                      KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,   KC_BSLS,
    KC_ESC,   KC_A,     KC_R,     KC_S,     KC_T,     KC_D,                                                                      KC_H,     KC_N,     KC_E,     KC_I,     KC_O,      KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,   KC_RSFT,
              KC_GRV,   KC_QUOT,  KC_LEFT,  KC_RGHT,                                                                                       KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_BSPC,  KC_RGUI,                                               KC_RGUI,  KC_BSPC,
                                                                KC_LALT,                                               KC_RALT,
                                            KC_SPC,   KC_ENTER, KC_LCTL,                                               KC_RCTL,  KC_ENTER, KC_SPC
  ),


/****************************************************************************************************
*
* Keymap: Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Caps   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Esc    |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   |  '"  | Left | Right|                                         | Down | Up   |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Bksp | Gui  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Alt  |         | Alt  |      |      |
*                                 |Space |Enter |------|         |------| Enter| Space|
*                                 |      |      | Ctrl |         | Ctrl |      |      |
*                                 `--------------------'         `--------------------'
*/
  [_QWER] = LAYOUT(
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TO(_COLE), QK_BOOT,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,      KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,   KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,   KC_RSFT,
              KC_GRV,   KC_QUOT,  KC_LEFT,  KC_RGHT,                                                                                       KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_BSPC,  KC_RGUI,                                               KC_RGUI,  KC_BSPC,
                                                                KC_LALT,                                               KC_RALT,
                                            KC_SPC,   KC_ENTER, KC_LCTL,                                               KC_RCTL,  KC_ENTER, KC_SPC
  )
};
