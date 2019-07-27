#include "sweet16.h"

enum custom_keycodes {
  DBLZERO = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT_ortho_4x4(
        KC_F7,   KC_F8,   KC_F9,   KC_RSFT,
        KC_F4,   KC_F5,   KC_F6,   KC_NO,
        KC_F1,   KC_F2,   KC_F3,   TO(1),
        KC_F10,  KC_F11,  KC_F12,  KC_RCTL
    ),
 [1] = LAYOUT_ortho_4x4(
        KC_7,    KC_8,    KC_9,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    TO(0),
        KC_1,    KC_2,    KC_3,    KC_NO,
		KC_0,    DBLZERO, KC_DOT,  KC_ENT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DBLZERO:
      if (record->event.pressed) {
        // when keycode DBLZERO is pressed
        SEND_STRING("00");
      } else {
        // when keycode DBLZERO is released
      }
      break;

  }
  return true;
}



