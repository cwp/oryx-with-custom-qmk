#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
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
    KC_NO,          KC_NO,          LGUI(LSFT(KC_RBRC)),RSFT(KC_F12),   LGUI(LSFT(KC_LBRC)),ST_MACRO_0,                                     LGUI(KC_X),     LGUI(KC_LBRC),  LGUI(LSFT(KC_I)),LGUI(KC_RBRC),  LGUI(LSFT(KC_Z)),LGUI(KC_F2),
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  ST_MACRO_1,                                     LGUI(KC_C),     KC_LEFT,        KC_UP,          KC_RIGHT,       LGUI(KC_Z),     LGUI(KC_D),
    QK_LLCK,        KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_PGDN,                                        LGUI(KC_V),     KC_BSPC,        KC_DOWN,        KC_DELETE,      KC_F2,          QK_LLCK,
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_K)) SS_DELAY(100) SS_RCTL(SS_RGUI(SS_TAP(X_D))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RGUI(SS_TAP(X_K)) SS_DELAY(100) SS_RGUI(SS_TAP(X_D)));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}






// Implement a custom shift layer
// const key_override_t amperstand_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_LBRC, KC_AMPR, 1, MOD_MASK_CAG);       // [ -> &
// const key_override_t circumflex_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_LCBR, KC_CIRC, 1, MOD_MASK_CAG);       // { -> ^
// const key_override_t hash_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_LPRN, KC_HASH, 1, MOD_MASK_CAG);             // ( -> #
// const key_override_t equals_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_LABK, KC_EQL, 1, MOD_MASK_CAG);            // < -> =
// const key_override_t pipe_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_RABK, KC_PIPE, 1, MOD_MASK_CAG);             // > -> |
// const key_override_t dollar_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_RPRN, KC_DLR, 1, MOD_MASK_CAG);            // ) -> $
// const key_override_t percent_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_RBRC, KC_PERC, 1, MOD_MASK_CAG);          // ] -> %
// const key_override_t asterisk_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_RCBR, KC_ASTR, 1, MOD_MASK_CAG);         // } -> *
// const key_override_t tilde_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_GRAVE, KC_TILD, 1, MOD_MASK_CAG);           // ` -> ~
// const key_override_t plus_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_DQUO, KC_PLUS, 1, MOD_MASK_CAG);             // " -> +
// const key_override_t at_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_QUOT, KC_AT, 1, MOD_MASK_CAG);                 // ' -> @
// const key_override_t colon_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_DOT, KC_DOT, 1, MOD_MASK_CAG);              // . -> :
// const key_override_t semicolon_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_COMM, KC_SCLN, 1, MOD_MASK_CAG);        // , -> ;
const key_override_t backslash_ko = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS, 0, MOD_MASK_CAG);        // slash -> backslash

const key_override_t **key_overrides = (const key_override_t *[]){
    // &amperstand_ko,
//     &circumflex_ko,
//     &hash_ko,
//     &equals_ko,
//     &pipe_ko,
//     &dollar_ko,
//     &percent_ko,
//     &asterisk_ko,
//     &tilde_ko,
//     &plus_ko,
//     &at_ko,
//     &colon_ko,
//     &semicolon_ko,
    &backslash_ko
};
