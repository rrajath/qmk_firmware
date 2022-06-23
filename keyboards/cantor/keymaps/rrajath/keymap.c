// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
	/*
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, KC_SPC, KC_BSPC,          KC_ENT, KC_SPC, KC_RALT
																						)*/
     /*
      * ┌────┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬────┐
      * │ NO │ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │Tab│ NO │
      * ├────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼────┤
      * │ NO │ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │ NO │
      * ├────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼────┤
      * │ NO │ Z │ X │ C │ D │ V │       │ K │ H │ , │ . │ / │ NO │
      * └────┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴────┘
      *              ┌────┐                   ┌────┐
      *              │ NO ├───┐           ┌───┤ NO │
      *              └────┤Esc├───┐   ┌───┤Ent├────┘
      *                   └───┤SPC│   │Bsp├───┘
      *                       └───┘   └───┘
      */

	[0] = LAYOUT_split_3x6_3(
				KC_NO, KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                                                KC_J,          KC_L,         KC_U,         KC_Y,         KC_TAB,       KC_NO,
				KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,                                                KC_M,          RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_NO,
				KC_NO, MEH_T(KC_Z),  KC_X,         KC_C,         KC_D,         KC_V,                                                KC_K,          KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_NO,
				                                                 KC_NO,        LT(2,KC_ESC), LT(1,KC_SPC),           LT(3,KC_BSPC), LT(4,KC_ENT), KC_NO
													 ),
	
	[1] = LAYOUT_split_3x6_3(
				KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                                               KC_MS_L,        KC_MS_D,     KC_MS_U,      KC_MS_R,      KC_BTN1,      KC_NO,
				KC_NO, LGUI(KC_NO),  LALT(KC_NO),  LCTL(KC_NO),  LSFT(KC_NO),  KC_NO,                                               KC_LEFT,        KC_DOWN,     KC_UP,        KC_RGHT,      KC_CAPS,      KC_NO,
				KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                                               KC_WH_R,        KC_WH_U,     KC_WH_D,      KC_WH_L,      KC_BTN2,      KC_NO,
				                                                 RESET,        KC_NO,        KC_NO,                  KC_BSPC,       KC_DEL,         KC_NO
													 ),
	
	[2] = LAYOUT_split_3x6_3(
				KC_NO, RESET,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                                               RGB_TOG,        RGB_MOD,     RGB_HUI,      RGB_SAI,      KC_NO,        KC_NO,
				KC_NO, LGUI(KC_NO),  LALT(KC_NO),  LCTL(KC_NO),  LSFT(KC_NO),  KC_NO,                                               KC_MPRV,        KC_VOLD,     KC_VOLU,      KC_MNXT,      KC_NO,        KC_NO,
				KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                                               KC_MUTE,        KC_F14,      KC_F15,       KC_NO,        KC_NO,        KC_NO,
				                                                 KC_NO,        KC_TRNS,      KC_NO,                  KC_MPLY,       KC_NO,          KC_NO
													 ),
	
	[3] = LAYOUT_split_3x6_3(
				KC_NO, KC_LBRC,      KC_7,         KC_8,         KC_9,         KC_RBRC,                                             KC_NO,          KC_NO,       KC_NO,        KC_NO,        RESET,       KC_NO,
				KC_NO, KC_SCLN,      KC_4,         KC_5,         KC_6,         KC_EQL,                                              KC_NO,          LSFT(KC_NO), LCTL(KC_NO),  LALT(KC_NO),  LGUI(KC_NO), KC_NO,
				KC_NO, KC_GRV,       KC_1,         KC_2,         KC_3,         KC_BSLS,                                             KC_NO,          KC_NO,       KC_NO,        KC_NO,        KC_NO,       KC_NO,
				                                                 KC_NO,        KC_MINS,      KC_0,                   KC_TRNS,       KC_NO,          KC_NO
													 ),
	
	[4] = LAYOUT_split_3x6_3(
				KC_NO, KC_F12,       KC_F7,        KC_F8,        KC_F9,        KC_NO,                                               KC_NO,          KC_NO,       KC_NO,        KC_NO,        KC_NO,       KC_NO,
				KC_NO, KC_F11,       KC_F4,        KC_F5,        KC_F6,        KC_NO,                                               KC_NO,          LSFT(KC_NO), LCTL(KC_NO),  LALT(KC_NO),  LGUI(KC_NO), KC_NO,
				KC_NO, KC_F10,       KC_F1,        KC_F2,        KC_F3,        KC_NO,                                               KC_NO,          KC_NO,       KC_NO,        KC_NO,        KC_NO,       KC_NO,
				                                                 KC_NO,        KC_QUOT,      KC_SPC,                 KC_NO,         KC_TRNS,        KC_NO
													 )
};

const uint16_t PROGMEM combo_quote[] = {RCTL_T(KC_E), RALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM combo_tab[] = {RSFT_T(KC_N), RCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM combo_dash[] = {LGUI_T(KC_A), LALT_T(KC_R), COMBO_END};
const uint16_t PROGMEM combo_cut[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM combo_copy[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_paste[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
	COMBO(combo_quote, KC_QUOT),
	COMBO(combo_tab, KC_TAB),
	COMBO(combo_dash, KC_MINS)
};
