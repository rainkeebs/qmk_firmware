#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
		LT(3,KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSPC,
		KC_LCTL, KC_LGUI, KC_LALT, LT(1,KC_SPC), KC_SPC, KC_RALT,KC_RGUI,  KC_RCTL),

	[1] = LAYOUT(
		KC_GRAVE,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
		CTL_T(KC_TAB), KC_MINS, KC_EQL, KC_QUOT, KC_SCLN, KC_DLR, KC_LEFT, KC_DOWN, KC_UP,KC_RGHT, KC_ENT,
		LSFT_T(KC_LCBR),  KC_TILDE,  KC_AT, KC_HASH, KC_PIPE, KC_CIRCUMFLEX, KC_EQUAL, KC_QUOTE,KC_NUHS, KC_SLSH,  RSFT_T(KC_RCBR),
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[2] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS,
        RESET, KC_PLUS, KC_UNDS, KC_BSLS, KC_COLN,  KC_DLR, KC_HOME, KC_PGDN, KC_PGUP,KC_END, KC_TRNS,
        LSFT_T(KC_LABK), KC_EXLM, KC_PERC,KC_BSLASH, KC_AMPR,  KC_AT, KC_CIRCUMFLEX, KC_DQUO,KC_LCBR, KC_RCBR,   RSFT_T(KC_RABK),
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[3] = LAYOUT(
        KC_GRAVE, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_TRNS,
        KC_TAB, KC_MINS, KC_EQL, KC_QUOT, KC_SCLN, KC_DLR, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        LSFT_T(KC_LCBR),  KC_TILDE,  KC_AT, KC_HASH, KC_PIPE, KC_CIRCUMFLEX, KC_EQUAL, KC_QUOTE,KC_LBRACKET, KC_RBRACKET, RSFT_T(KC_RCBR),
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)


};
