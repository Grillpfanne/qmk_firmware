#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_QST,
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_BSLS,        KC_TRANSPARENT,
    KC_LEFT_SHIFT,  DE_Y,           LT(4,KC_X),     KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    KC_RCMD     ,   MO(6),          KC_LEFT_ALT,    KC_LEFT_GUI,    TL_LOWR,        KC_SPACE,                                       KC_ENTER,       TL_UPPR,        TG(2),          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_ENTER,       KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       DE_LBRC,        DE_RBRC,        DE_PIPE,                                        DE_LESS,        KC_7,           KC_8,           KC_9,           KC_0,           DE_QST,
    KC_TRANSPARENT, KC_DELETE,      DE_DQOT,        DE_LPRN,        DE_RPRN,        KC_TRANSPARENT,                                 DE_TILD,        KC_4,           KC_5,           KC_6,           DE_PLUS,        DE_CIRC,
    KC_TRANSPARENT, KC_F1,          DE_EQL,         DE_LCBR,        DE_RCBR,        DE_BSLS,                                        DE_SLSH,        KC_1,           KC_2,           KC_3,           DE_MINS,        KC_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_COMMA,       KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_ESCAPE,      KC_PAGE_UP,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_F12,         KC_TRANSPARENT, KC_ESCAPE,
    KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        ST_MACRO_0,                                     KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, DE_AT,          KC_TRANSPARENT, DE_EURO,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_UE,          KC_TRANSPARENT, DE_OE,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DE_AE,          DE_SS,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SLD,        RGB_MODE_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAI,
    KC_TRANSPARENT, KC_PSCR,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {0,0,0}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {166,218,204}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {0,0,0}, {0,0,0}, {126,244,255}, {126,244,255}, {126,244,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {126,244,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {99,255,255}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {99,255,255}, {0,241,255}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {0,0,0}, {214,250,236}, {214,250,236}, {214,250,236}, {99,255,255}, {76,251,84}, {214,250,236}, {214,250,236}, {76,251,84}, {99,255,255}, {99,255,255}, {99,255,255}, {76,251,84}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {214,250,236}, {0,0,0} },

    [4] = { {0,0,0}, {76,251,84}, {0,0,0}, {76,251,84}, {0,0,0}, {0,0,0}, {0,0,0}, {76,251,84}, {76,251,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {76,251,84}, {0,0,0}, {76,251,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {99,236,136}, {99,236,136}, {99,236,136}, {0,0,0}, {0,0,0}, {0,0,0}, {99,236,136}, {99,236,136}, {99,236,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {99,236,136}, {99,236,136}, {99,236,136}, {0,0,0}, {0,0,0}, {0,0,0}, {99,236,136}, {99,236,136}, {99,236,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,222,205}, {0,222,205}, {0,222,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,222,205}, {172,222,205}, {172,222,205}, {172,222,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,222,205}, {172,222,205}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {172,222,205}, {172,222,205}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
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
      SEND_STRING(SS_LALT(SS_TAP(X_F4) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_1) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_2) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_3) ));
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



