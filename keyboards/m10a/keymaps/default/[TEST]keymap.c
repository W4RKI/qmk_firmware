// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "m10a.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layers {
  _LAYER0,
  _LAYER1,
  _LAYER2,
  _LAYER3,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
  _LAYER9
};

// // Fillers to make layering more clear
// #define _______ KC_TRNS
// #define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LAYER0] = {{LAYER7, LAYER8, LAYER9}, {LAYER4, LAYER5, LAYER6}, {LAYER1, LAYER2, LAYER3}, {KC_NO, KC_NO, KC_NO}},
  [_LAYER1] = {{KC_7, KC_8, KC_9}, {KC_4, KC_5, KC_6}, {KC_1, KC_2, KC_3}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER2] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER3] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER4] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER5] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER6] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER7] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER8] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}},
  [_LAYER9] = {{KC_A, KC_B, KC_C}, {KC_D, KC_E, KC_F}, {KC_G, KC_H, KC_I}, {KC_NO, KC_NO, LT(LAYER0, KC_0)}}
};

void matrix_init_user(void) {
  #ifdef BACKLIGHT_ENABLE
    backlight_level(0);
  #endif
}
