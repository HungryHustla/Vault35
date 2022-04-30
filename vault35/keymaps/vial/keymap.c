#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE,   
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  
                KC_LGUI,   MO(1), KC_BSPC, KC_SPACE, KC_SPACE, MO(2),  RESET
  ),

  [1] = LAYOUT_all(
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
      ____,      ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,       ____,   
       ____,     ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,     ____,  
                           ____,    ____,  ____, ____,  ____,  ____,     ____ 
  ),
  
  [2] = LAYOUT_all(
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
      ____,      ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,       ____,   
       ____,     ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,     ____,  
                          ____,    ____,  ____, ____,  ____,  ____,     ____
  ),

  [3] = LAYOUT_all(
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
      ____,      ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,       ____,   
       ____,     ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,     ____,  
                          ____,    ____,  ____, ____,  ____,  ____,     ____
  ),

};