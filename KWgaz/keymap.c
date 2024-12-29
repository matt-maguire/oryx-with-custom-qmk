#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    CW_TOGG,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_CAPS,        
    OSM(MOD_LCTL),  KC_B,           MT(MOD_LGUI, KC_L),MT(MOD_LALT, KC_D),MT(MOD_LCTL, KC_C),KC_V,                                           KC_J,           MT(MOD_RCTL, KC_F),MT(MOD_LALT, KC_O),MT(MOD_RGUI, KC_U),KC_COMMA,       KC_GRAVE,       
    MT(MOD_LSFT, KC_BSPC),LT(4,KC_N),     LT(3,KC_R),     LT(1,KC_T),     LT(2,KC_S),     KC_G,                                           KC_Y,           LT(2,KC_H),     LT(1,KC_A),     LT(3,KC_E),     LT(4,KC_I),     MT(MOD_RSFT, KC_SCLN),
    OSM(MOD_LALT),  KC_Q,           MT(MOD_RALT, KC_X),KC_M,           KC_W,           KC_Z,                                           KC_K,           KC_P,           KC_QUOTE,       MT(MOD_RALT, KC_SLASH),KC_DOT,         OSM(MOD_RALT),  
                                                    MEH_T(KC_SPACE),OSM(MOD_RCTL),                                  OSM(MOD_RSFT),  OSM(MOD_RGUI)
  ),
  [1] = LAYOUT_voyager(
    QK_LLCK,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_GRAVE,       KC_ESCAPE,      MT(MOD_LGUI, KC_7),MT(MOD_LALT, KC_8),MT(MOD_LCTL, KC_9),KC_PLUS,                                        KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_DELETE,      KC_F12,         
    KC_TRANSPARENT, KC_TAB,         KC_4,           KC_5,           KC_6,           KC_MINUS,                                       KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_DOT,                                         KC_H,           KC_J,           KC_K,           KC_L,           KC_ENTER,       KC_INSERT,      
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_AMPR,        KC_ASTR,        KC_SCLN,        KC_COLN,                                        KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_DELETE,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TAB,         KC_DLR,         KC_PERC,        KC_CIRC,        KC_UNDS,                                        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_TILD,        KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CAPS,        KC_EXLM,        KC_AT,          KC_HASH,        CW_TOGG,                                        KC_BSLS,        KC_LBRC,        KC_RBRC,        KC_SLASH,       KC_ENTER,       KC_INSERT,      
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                                        KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_FIND,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_INSERT,                                      KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_PC_UNDO,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_SCRL,                                        KC_MS_BTN2,     KC_MS_BTN1,     KC_PC_COPY,     KC_PC_PASTE,    KC_PC_CUT,      KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_L):
            return TAPPING_TERM + 50;
        case MT(MOD_LALT, KC_D):
            return TAPPING_TERM + 50;
        case MT(MOD_LCTL, KC_C):
            return TAPPING_TERM + 50;
        case MT(MOD_RALT, KC_X):
            return TAPPING_TERM + 50;
        case MEH_T(KC_SPACE):
            return TAPPING_TERM + 50;
        case MT(MOD_RCTL, KC_F):
            return TAPPING_TERM + 50;
        case MT(MOD_LALT, KC_O):
            return TAPPING_TERM + 50;
        case MT(MOD_RGUI, KC_U):
            return TAPPING_TERM + 50;
        case MT(MOD_RALT, KC_SLASH):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {37,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {77,218,204}, {172,102,255}, {172,102,255}, {172,102,255}, {11,178,255}, {77,218,204}, {77,218,204}, {172,102,255}, {172,102,255}, {172,102,255}, {11,178,255}, {77,218,204}, {11,178,255}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {0,0,0}, {0,0,0}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {11,178,255}, {139,219,107}, {139,219,107}, {139,220,255}, {139,219,107}, {248,229,252}, {223,218,204}, {139,219,107}, {139,220,255}, {139,220,255}, {139,220,255}, {248,229,252}, {77,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {78,228,252}, {77,218,204}, {0,0,0}, {0,0,0} },

    [2] = { {37,218,204}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {37,218,204}, {77,218,204}, {11,178,255}, {11,178,255}, {11,178,255}, {11,178,255}, {77,218,204}, {77,218,204}, {11,178,255}, {11,178,255}, {11,178,255}, {11,178,255}, {77,218,204}, {37,218,204}, {11,178,255}, {11,178,255}, {11,178,255}, {11,178,255}, {0,0,0}, {0,0,0}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {11,178,255}, {11,178,255}, {23,216,255}, {23,216,255}, {11,178,255}, {248,229,252}, {11,178,255}, {11,178,255}, {23,216,255}, {23,216,255}, {11,178,255}, {248,229,252}, {77,218,204}, {37,218,204}, {23,216,255}, {23,216,255}, {11,178,255}, {78,228,252}, {77,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {37,218,204}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {37,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {37,218,204}, {77,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {77,218,204}, {78,228,252}, {223,218,204}, {223,218,204}, {223,218,204}, {223,218,204}, {37,218,204}, {0,0,0}, {0,0,0}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {172,102,255}, {11,178,255}, {0,0,0}, {0,0,0}, {139,220,255}, {0,0,0}, {0,0,0}, {11,178,255}, {0,0,0}, {139,220,255}, {139,220,255}, {139,220,255}, {0,0,0}, {77,218,204}, {129,255,128}, {129,255,128}, {245,218,204}, {23,216,255}, {245,218,204}, {77,218,204}, {0,0,0}, {0,0,0} },

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
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
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

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}



