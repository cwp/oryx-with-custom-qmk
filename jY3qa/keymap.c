#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_Q,           KC_LCBR,        KC_LBRC,        KC_LPRN,        KC_LABK,                                        KC_RABK,        KC_RPRN,        KC_RBRC,        KC_RCBR,        KC_Z,           KC_QUES,        
    KC_GRAVE,       KC_DQUO,        KC_B,           KC_H,           KC_G,           KC_QUOTE,                                       KC_MINUS,       KC_DOT,         KC_COMMA,       KC_J,           KC_X,           KC_EXLM,        
    KC_TAB,         MT(MOD_LCTL, KC_C),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_N),MT(MOD_LSFT, KC_T),KC_K,                                           KC_UNDS,        MT(MOD_RSFT, KC_A),MT(MOD_RGUI, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RCTL, KC_M),KC_ENTER,       
    KC_TRANSPARENT, KC_P,           KC_F,           ALL_T(KC_L),    MEH_T(KC_D),    KC_V,                                           KC_SLASH,       MEH_T(KC_U),    ALL_T(KC_O),    KC_Y,           KC_W,           KC_TRANSPARENT, 
                                                    KC_R,           OSL(2),                                         OSL(1),         KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_A,           KC_B,           KC_C,           KC_D,           KC_E,           KC_F,                                           KC_NO,          KC_F14,         KC_NO,          KC_F15,         KC_NO,          KC_NO,          
    KC_SLASH,       KC_PLUS,        KC_9,           KC_8,           KC_7,           KC_MINUS,                                       KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_ASTR,        KC_0,           KC_6,           KC_5,           KC_4,           KC_DOT,                                         KC_NO,          MT(MOD_RSFT, KC_MEDIA_PREV_TRACK),MT(MOD_RGUI, KC_MEDIA_PLAY_PAUSE),MT(MOD_RALT, KC_MEDIA_NEXT_TRACK),KC_RIGHT_CTRL,  KC_TRANSPARENT, 
    QK_LLCK,        KC_EQUAL,       KC_3,           KC_2,           KC_1,           KC_PERC,                                        KC_NO,          KC_MEH,         KC_HYPR,        KC_NO,          KC_NO,          QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_F12,         KC_NO,          KC_PAGE_UP,                                     LGUI(LSFT(KC_K)),LALT(KC_Q),     LGUI(KC_SLASH), LCTL(KC_T),     LALT(LSFT(KC_I)),LGUI(LCTL(KC_D)),
    KC_NO,          KC_NO,          LGUI(LSFT(KC_RBRC)),RSFT(KC_F12),   LGUI(LSFT(KC_LBRC)),KC_NO,                                          LGUI(KC_X),     LGUI(KC_LBRC),  LGUI(LSFT(KC_I)),LGUI(KC_RBRC),  LGUI(LSFT(KC_Z)),LGUI(KC_F2),    
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          LGUI(KC_C),     KC_LEFT,        KC_UP,          KC_RIGHT,       LGUI(KC_Z),     LGUI(KC_D),     
    QK_LLCK,        KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_PGDN,                                        LGUI(KC_V),     KC_BSPC,        KC_DOWN,        KC_DELETE,      KC_F2,          QK_LLCK,        
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



