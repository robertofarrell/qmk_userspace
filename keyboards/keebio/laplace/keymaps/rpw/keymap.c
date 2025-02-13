#include QMK_KEYBOARD_H

#include "rpw.c"

#define _BASE 0
#define _SYM 1
#define _NUM 2
#define _NAV 3
#define _NAV2 4

#define SP_FN1 LT(_NUM, KC_SPACE)
#define SP_FN2 LT(_NUM, KC_SPACE)
#define ENT_FN1 LT(_SYM, KC_ENT)
#define ENT_FN2 LT(_SYM, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_DEL,   KC_BSPC,
    CTL_ESC,  CTL_A,    ALT_S,    SFT_D,    GUI_F,    KC_G,     KC_H,     GUI_J,    SFT_K,    ALT_L,    CTL_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  MO(_NAV2),
    KC_LCTL,  KC_LALT,  KC_LGUI,  _______,  ENT_FN1,  SP_FN2,   MO(_NAV),  KC_RALT,  _______,  KC_RCTL
  ),

  [_SYM] = LAYOUT(
    KC_TILD,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MINS,   KC_EQL,    KC_LBRC,   KC_RBRC,   KC_BSLS,    KC_GRV,
    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UNDS,   KC_PLUS,   KC_LCBR,   KC_RCBR,    KC_PIPE, KC_TRNS,
    UG_TOGG,   _______,  _______,  _______,  _______,  KC_DEL,   KC_0,     KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  [_NUM] = LAYOUT(
    KC_TILD,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
    _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,  _______,  _______,  _______,  KC_COLN,  _______,
    _______,  _______,  _______,  KC_DEL,   KC_PGDN,  KC_END,   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  KC_DEL,   _______,  _______,  _______,  _______,  _______
  ),

  [_NAV] = LAYOUT(
    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_PLUS,
    _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,  KC_LEFT,   KC_DOWN,  KC_UP,   KC_RIGHT,  _______,
    _______,  _______,  _______,  KC_DEL,   KC_PGDN,  KC_END,   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  KC_DEL,   _______,  _______,  _______,  _______,  _______
  ),

  [_NAV2] = LAYOUT(
    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_PLUS,
    _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,  KC_LEFT,   KC_DOWN,  KC_UP,   KC_RIGHT,  _______,
    _______,  _______,  _______,  KC_DEL,   KC_PGDN,  KC_END,   _______,  KC_LEFT,   KC_DOWN,  KC_UP,   KC_RIGHT,  _______,
    _______,  _______,  _______,  _______,  KC_DEL,   _______,  _______,  _______,  _______,  _______
  )
};
