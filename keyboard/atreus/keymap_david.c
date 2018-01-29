#include "keymap_common.h"

/* Custom layout with added temporary layers for quickly accessing
 mavigation and standard keyboard keys.

 layout can be viewed here
 http://www.keyboard-layout-editor.com/##@_switchMount=alps&switchBrand=matias&switchType=PG155B01&pcb:true%3B&@_r:10&rx:1&y:-0.09999999999999998&x:2%3B&=E%3B&@_y:-0.65&x:1%3B&=W&_x:1%3B&=R%3B&@_y:-0.75%3B&=Q%3B&@_y:-0.9&x:4%3B&=T%3B&@_y:-0.7000000000000001&x:2%3B&=D%3B&@_y:-0.6499999999999999&x:1%3B&=S&_x:1%3B&=F%3B&@_y:-0.75%3B&=A%3B&@_y:-0.8999999999999999&x:4%3B&=G%3B&@_y:-0.7000000000000002&x:2%3B&=C%3B&@_y:-0.6499999999999999&x:1%3B&=X&_x:1%3B&=V%3B&@_y:-0.75%3B&=Z%3B&@_y:-0.8999999999999999&x:4%3B&=B%3B&@_y:-0.75&x:5&fa@:6&:0&:0&:4%3B&h:1.5%3B&=%3Ci%20class%2F='mss%20mss-Unicode-BackSpace-DeleteLeft-Big-2'%3E%3C%2F%2Fi%3E%0A%0A%0ACtrl%3B&@_y:-0.9500000000000002&x:2&f:3%3B&=Delete%3B&@_y:-0.6499999999999999&x:1&f:3%3B&=%2F=%0A%0A%0ACtrl&_x:1&a:7&fa@:9%3B%3B&=%3Ci%20class%2F='kb%20kb-logo-linux-tux-ibm'%3E%3C%2F%2Fi%3E%3B&@_y:-0.75&a:4&f:3%3B&=fn%3B&@_y:-0.8999999999999999&x:4&f:3%3B&=Tab%0A%0A%0AShift%3B&@_r:-10&rx:7&ry:0.965&y:-0.20000000000000018&x:2&c=%23696bff&f:3%3B&=I%0A%0A%0A%3Ci%20class%2F='fa%20fa-keyboard-o'%3E%3C%2F%2Fi%3E%3B&@_y:-0.6499999999999999&x:1&c=%23cccccc&f:3%3B&=U&_x:1&c=%23696bff&sm=alps&sb=matias&st=PG155B01&f:3%3B&=O%0A%0A%0A%3Ci%20class%2F='fa%20fa-arrows-h'%3E%3C%2F%2Fi%3E%3B&@_y:-0.75&x:4&c=%23cccccc&sm=&sb=&st=&f:3%3B&=P%3B&@_y:-0.8999999999999999&f:3%3B&=Y%3B&@_y:-0.7000000000000002&x:2&f:3%3B&=K%3B&@_y:-0.6499999999999999&x:1&f:3%3B&=J&_x:1&f:3%3B&=L%3B&@_y:-0.75&x:4&f:3%3B&=%2F:%0A%2F%3B%3B&@_y:-0.8999999999999999&f:3%3B&=H%3B&@_y:-0.7000000000000002&x:2&f:3%3B&=%3C%0A,%3B&@_y:-0.6499999999999999&x:1&f:3%3B&=M&_x:1&f:3%3B&=%3E%0A.%3B&@_y:-0.7500000000000004&x:4&f:3%3B&=%3F%0A%2F%2F%3B&@_y:-0.9000000000000004&f:3%3B&=N%3B&@_y:-0.7499999999999996&x:-1&h:1.5%3B&=%3Ci%20class%2F='kb%20kb-Return-3'%3E%3C%2F%2Fi%3E%0A%0A%0AAlt%3B&@_y:-0.9499999999999997&x:2&f:3%3B&=%22%0A'%3B&@_y:-0.6500000000000004&x:1&f:3%3B&=fn&_x:1&f:3%3B&=%2F_%0A-%3B&@_y:-0.75&x:4&f:3%3B&=Esc%0A%0A%0AShift%3B&@_y:-0.9000000000000004&f:3%3B&=Space */

// Reduce the time to decision of a tap or hold
/* #define TAPPING_TERM 150 */

// Set the number of taps required for toggling
/* #define TAPPING_TOGGLE 3 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: mostly letters */
  KEYMAP(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, \
         KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_FN4, \
         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, \
         KC_FN0, KC_FN6, KC_LGUI, KC_LSFT, KC_BSPC, KC_FN8, KC_FN9,     \
         KC_SPC, KC_FN0, KC_QUOT, KC_MINS, KC_FN10),                     \
  /* 1: punctuation and numbers */
   KEYMAP(SHIFT(KC_1), SHIFT(KC_2), KC_UP, SHIFT(KC_LBRC), SHIFT(KC_RBRC), \
          KC_PGUP, KC_7, KC_8, KC_9, SHIFT(KC_8),                       \
          SHIFT(KC_3), KC_LEFT, KC_DOWN, KC_RIGHT, SHIFT(KC_4),         \
          KC_PGDN, KC_4, KC_5, KC_6, SHIFT(KC_EQUAL),                   \
          KC_LBRC, KC_RBRC, SHIFT(KC_9), SHIFT(KC_0), SHIFT(KC_7),      \
          KC_GRAVE, KC_1, KC_2, KC_3, KC_BSLS,                          \
          KC_TRNS, KC_FN1, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS,    \
          KC_TRNS, KC_TRNS, KC_TRNS, KC_DOT, KC_0, KC_EQUAL),
  /* 2: arrows and function keys */
  KEYMAP(KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, \
         KC_UP, KC_F7, KC_F8, KC_F9, KC_F10,             \
         KC_DEL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN,      \
         KC_DOWN, KC_F4, KC_F5, KC_F6, KC_F11,             \
         KC_NO, KC_VOLU, KC_NO, KC_NO, KC_FN3,           \
         KC_NO, KC_F1, KC_F2, KC_F3, KC_F12,                        \
         KC_FN2, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS,    \
         KC_TRNS, KC_TRNS, KC_FN2, KC_PSCREEN, KC_SLCK, KC_PAUSE),
  /* 3: kbd keys layer */
  KEYMAP(KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         \
         KC_DEL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         \
         KC_CAPS, KC__VOLUP, KC_NO, KC_NO, KC_FN3,                \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         \
         KC_CALC, KC__VOLDOWN, KC__MUTE, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  /* 4: navigation layer */
  KEYMAP(KC_WH_R, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
         KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,   \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   \
         KC_WBAK, KC_BTN4, KC_BTN3, KC_BTN5, KC_WFWD,          \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   \
         KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSEL, KC_TRNS, \
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
  [1] = ACTION_LAYER_ON(2, 1),  // switch to layer 2
  [2] = ACTION_LAYER_OFF(2, 1),  // switch back to layer 0
  [3] = ACTION_FUNCTION(BOOTLOADER),
  [4] = ACTION_LAYER_TAP_KEY(3, KC_SCLN), // switch to kbd keys layer
  [5] = ACTION_LAYER_TAP_KEY(4, KC_O), // switch to nav layer
  [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_EQL), // hold for ctl tap for =
  [7] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB), // hold for shift tap for tab
  [8] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_TAB), // hold for ctl tap for bspc
  [9] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_ENT), // hold for alt tap for enter
  [10] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ESC) // hold for shift tap for esc
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
