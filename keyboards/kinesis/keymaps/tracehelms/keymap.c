// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later


/*
 * TODO:
 *   - Add mouse keys
 *   - Make LEDs controllable (https://github.com/kinx-project/kint/issues/17#issuecomment-859419347)
 *   - Add number pad on right side
 *   -
 *
 *
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _COLE,
    _QWER,
    _COLE_NO_MODS,
    _GAME,
    _LAYER,
};


/****************************************************************************************************
*
* Keymap: Default Layer in Colemak
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Caps   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS | Layer|  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   F  |   P  |   G  |                           |   J  |   L  |   U  |   Y  |  ;:  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Esc    |   A  |   R  |   S  |   T  |   D  |                           |   H  |   N  |   E  |   I  |   O  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |ALT(Z)|CTL(X)|SFT(C)|GUI(V)|   B  |                           |GUI(K)|SFT(M)|CTL(,)|ALT(.)|  /?  | Shift  |
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
    KC_CAPS, KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,   KC_MUTE,      KC_VOLD,         KC_VOLU,        OSL(_LAYER),      QK_BOOT,
    KC_EQL,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                              KC_6,     KC_7,         KC_8,            KC_9,           KC_0,             KC_MINS,
    KC_TAB,  KC_Q,         KC_W,         KC_F,         KC_P,         KC_G,                                              KC_J,     KC_L,         KC_U,            KC_Y,           KC_SCLN,          KC_BSLS,
    KC_ESC,  KC_A,         KC_R,         KC_S,         KC_T,         KC_D,                                              KC_H,     KC_N,         KC_E,            KC_I,           KC_O,             KC_QUOT,
    KC_LSFT, LALT_T(KC_Z), LCTL_T(KC_X), LSFT_T(KC_C), LGUI_T(KC_V), KC_B,                                              KC_K,     RGUI_T(KC_M), RSFT_T(KC_COMM), RCTL_T(KC_DOT), RALT_T(KC_SLSH), KC_RSFT,
             KC_GRV,       KC_QUOT,      KC_LEFT,      KC_RGHT,                                                                   KC_DOWN,      KC_UP,           KC_LBRC,        KC_RBRC,
                                                                     KC_BSPC,  KC_RGUI,                       KC_RGUI,  KC_BSPC,
                                                                               KC_LALT,                       KC_RALT,
                                                       KC_SPC,       KC_ENTER, KC_LCTL,                       KC_RCTL,  KC_ENTER, KC_SPC
  ),

  [_QWER] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(_COLE),  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                       KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                                       KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                       KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
              KC_GRV,   KC_QUOT,  KC_LEFT,  KC_RGHT,                                                                                        KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_TRNS,  KC_TRNS,                                               KC_TRNS,   KC_TRNS,
                                                                KC_TRNS,                                               KC_TRNS,
                                            KC_TRNS,   KC_TRNS, KC_TRNS,                                               KC_TRNS,   KC_TRNS, KC_TRNS
  ),


  // TODO turn this into a layer that can be toggled on/off for colemak AND qwerty
  [_COLE_NO_MODS] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(_COLE),  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                       KC_TRNS,  KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_TRNS,
              KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                      KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,                                               KC_TRNS,
                                            KC_TRNS,   KC_TRNS, KC_TRNS,                                               KC_TRNS,  KC_TRNS, KC_TRNS
  ),

  [_GAME] = LAYOUT(
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TO(_COLE), QK_BOOT,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_MINS,
    KC_T,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,      KC_BSLS,
    KC_G,     KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,   KC_QUOT,
    KC_B,     KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,   KC_RSFT,
              KC_GRV,   KC_QUOT,  KC_LEFT,  KC_RGHT,                                                                                       KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_BSPC,  KC_RGUI,                                               KC_RGUI,  KC_BSPC,
                                                                KC_LALT,                                               KC_RALT,
                                            KC_SPC,   KC_ENTER, KC_LCTL,                                               KC_RCTL,  KC_ENTER, KC_SPC
  ),

  [_LAYER] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  TO(_QWER),  TO(_COLE),  KC_NO,    TO(_GAME),    KC_NO,    KC_NO,         KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_MPLY,  KC_MPRV,  KC_MNXT,  TO(_COLE),  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,                                                                                    KC_NO,  KC_NO,  KC_NO,  KC_NO,
                                            KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,
                                                    KC_NO,                                                    KC_NO,
                                     KC_NO, KC_NO,  KC_NO,                                                    KC_NO,  KC_NO,  KC_NO
  ),
};
