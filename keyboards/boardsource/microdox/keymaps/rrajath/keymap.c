/*
Copyright 2020 Cole Smith <cole@boadsource.xyz>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_TAB, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), MEH_T(KC_Z), KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(2,KC_ESC), LT(1,KC_SPC), LT(3,KC_BSPC), LT(4,KC_ENT), KC_NO),
	[1] = LAYOUT_split_3x5_3(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1, LGUI(KC_NO), LALT(KC_NO), LCTL(KC_NO), LSFT(KC_NO), KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_BTN2, KC_NO, KC_TRNS, KC_NO, KC_BSPC, KC_DEL, KC_NO),
	[2] = LAYOUT_split_3x5_3(RESET, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, KC_NO, LGUI(KC_NO), LALT(KC_NO), LCTL(KC_NO), LSFT(KC_NO), KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_F14, KC_F15, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MPLY, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_3(KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, KC_NO, LSFT(KC_NO), LCTL(KC_NO), LALT(KC_NO), LGUI(KC_NO), KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_0, KC_TRNS, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x5_3(KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, LSFT(KC_NO), LCTL(KC_NO), LALT(KC_NO), LGUI(KC_NO), KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUOT, KC_SPC, KC_NO, KC_TRNS, KC_NO)

	/*
  [_QWERTY] = LAYOUT_split_3x5_3(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                      KC_LCTL, LOWER, KC_SPC,         KC_BSPC, RAISE,  KC_ENT
  ),

  [_RAISE] = LAYOUT_split_3x5_3(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,      XXXXXXX, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
    KC_LCTL, KC_GRV,  KC_LGUI, KC_LALT, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_QUOT,
                      XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LOWER] = LAYOUT_split_3x5_3(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
    KC_CAPS, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, KC_DQT,
                      XXXXXXX, XXXXXXX, XXXXXXX,      KC_ENT,  XXXXXXX, KC_DEL
  )
	*/
};

const uint16_t PROGMEM combo_quote[] = {LCTL_T(KC_E), LALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM combo_tab[] = {LSFT_T(KC_N), LCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM combo_dash[] = {LGUI_T(KC_A), LALT_T(KC_R), COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
	COMBO(combo_quote, KC_QUOT),
	COMBO(combo_tab, KC_TAB),
	COMBO(combo_dash, KC_MINS)
};
