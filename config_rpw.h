#pragma once

/* QMK */
// Amount of time before the hold function of a dual-function key
// is considered pressed
#define TAPPING_TERM 200

//#define TAPPING_TERM_PER_KEY

// Ensure that a dual-function key isn't required to be held past the
// duration of the tapping term, to activate the hold function in
// combination with another key.
// Ref: https://docs.qmk.fm/tap_hold#permissive-hold
//
// For me permissive hold generally does more harm then good.  The only
// exception to this is for Shift.  For this reason, enable permissive hold
// per-key and configure only for our shifts.
#define PERMISSIVE_HOLD_PER_KEY

// Ensure that if a dual-function key is held past the tapping term,
// but no other key is pressed before the dual-function is released, the
// tap function is sent.
//
// Ref: https://docs.qmk.fm/tap_hold#retro-tapping
#define RETRO_TAPPING

// Enable Chordal Hold
// #define CHORDAL_HOLD

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define GUI_F LGUI_T(KC_F)

// Right-hand home row mods
#define GUI_J RGUI_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

#define CTL_ESC LCTL_T(KC_ESC)
#define SYM_ENT LT(_SYM, KC_ENT)
#define SYM_SPC LT(_SYM, KC_SPC)
#define NUM_SPC LT(_NUM, KC_SPC)
#define NAV_ENT LT(_NAV, KC_ENT)
#define NAV_SPC LT(_NAV, KC_SPC)
#define NPAD_BSPC LT(_NUMPAD, KC_BSPC)

#define RSFT_ENT RSFT_T(KC_ENT)
