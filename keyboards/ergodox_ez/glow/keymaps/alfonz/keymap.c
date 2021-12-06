#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_86_255_128,
  HSV_172_255_255,
  HSV_0_255_255,
  HSV_27_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
};

enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LT(7,KC_ESCAPE),KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           LT(9,KC_W),     LT(8,KC_E),     KC_R,           LT(10,KC_T),    MO(10),                                         MO(10),         LT(10,KC_Y),    KC_U,           LT(8,KC_I),     LT(9,KC_O),     KC_P,           KC_BSLASH,
    KC_BSPACE,      LT(4,KC_A),     LT(3,KC_S),     LT(6,KC_D),     MT(MOD_LSFT, KC_F),KC_G,                                                                           KC_H,           MT(MOD_RSFT, KC_J),LT(6,KC_K),     LT(5,KC_L),     KC_SCOLON,      LT(10,KC_QUOTE),
    KC_LSHIFT,      MT(MOD_LCTL, KC_Z),MT(MOD_LGUI, KC_X),MT(MOD_LALT, KC_C),MT(MOD_LSFT, KC_V),KC_B,           MO(8),                                          KC_TRANSPARENT, KC_N,           MT(MOD_RSFT, KC_M),MT(MOD_RALT, KC_COMMA),MT(MOD_RGUI, KC_DOT),MT(MOD_RCTL, KC_SLASH),KC_RSHIFT,
    KC_LCTRL,       KC_LGUI,        KC_LALT,        MO(8),          KC_SPACE,                                                                                                       KC_TAB,         MO(8),          KC_RALT,        KC_RGUI,        KC_RCTRL,
                                                                                                    KC_CAPSLOCK,    KC_INSERT,      KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, LALT(KC_PSCREEN),
                                                                                    KC_SPACE,       KC_SPACE,       KC_WWW_BACK,    KC_WWW_FORWARD, KC_ENTER,       KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LT(12,KC_S),    LT(13,KC_D),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LT(13,KC_K),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_SLASH),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_PSCREEN),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT,
    KC_TRANSPARENT, LT(4,KC_A),     LT(3,KC_R),     LT(5,KC_S),     MT(MOD_LSFT, KC_T),KC_G,                                                                           KC_M,           MT(MOD_RSFT, KC_N),LT(6,KC_E),     LT(5,KC_I),     KC_O,           KC_TRANSPARENT,
    KC_TRANSPARENT, MT(MOD_LCTL, KC_Z),MT(MOD_LGUI, KC_X),MT(MOD_LALT, KC_C),MT(MOD_LSFT, KC_D),LT(8,KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(7,KC_K),     MT(MOD_RSFT, KC_H),MT(MOD_RALT, KC_COMMA),MT(MOD_RGUI, KC_DOT),MT(MOD_RCTL, KC_SLASH),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LSHIFT,      KC_NO,                                                                          KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_0,        KC_NO,
    KC_NO,          KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_MS_UP,       KC_MS_WH_UP,    KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LSHIFT,      KC_NO,                                                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,
    KC_NO,          KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_TAB,         KC_UP,          KC_PGUP,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                                                         KC_NO,          KC_RSHIFT,      KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_BSPACE,      KC_DELETE,      KC_ESCAPE,      KC_PGDOWN,      KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_RSHIFT,      KC_RALT,        KC_NO,          KC_RCTRL,       KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPACE,                                                                                                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_BSPACE,      KC_BSPACE,      KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TAB,         KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_DELETE,      KC_1,           KC_DELETE,      KC_ESCAPE,      KC_LSHIFT,      KC_NO,                                                                          KC_NO,          MT(MOD_RSFT, UK_LPRN),KC_RPRN,        KC_MINUS,       KC_EQUAL,       KC_ENTER,
    KC_NO,          KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          MT(MOD_RSFT, KC_LBRACKET),MT(MOD_RALT, KC_RBRACKET),KC_RGUI,        KC_RCTRL,       KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPACE,                                                                                                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_BSPACE,      KC_BSPACE,      KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_SYSTEM_SLEEP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,
    KC_NO,          HSV_86_255_128, HSV_172_255_255,HSV_0_255_255,  HSV_27_255_255, KC_NO,          RGB_VAI,                                        KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_VAD,                                        KC_AUDIO_VOL_DOWN,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    TO(0),          TO(1),          KC_NO,          TO(2),          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_NO,
    KC_NO,          LCTL(KC_F14),   LCTL(KC_F15),   LCTL(KC_F16),   TD(DANCE_0),    LCTL(KC_F18),                                                                   KC_NO,          MT(MOD_RSFT, KC_F4),KC_F5,          KC_F6,          KC_NO,          KC_NO,
    KC_NO,          MT(MOD_LCTL, KC_F14),MT(MOD_LGUI, KC_F15),MT(MOD_LALT, KC_F16),MT(MOD_LSFT, KC_F17),KC_F18,         KC_NO,                                          KC_NO,          KC_NO,          MT(MOD_RSFT, KC_F1),MT(MOD_RALT, KC_F2),MT(MOD_RGUI, KC_F3),KC_RCTRL,       KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_F10,         KC_F11,         KC_F12,         KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          DYN_REC_START1, DYN_REC_START2,
                                                                                                                    KC_NO,          DYN_REC_STOP,
                                                                                    KC_NO,          KC_NO,          KC_NO,          DYN_REC_STOP,   DYN_MACRO_PLAY1,DYN_MACRO_PLAY2
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_F20,         KC_F21,         KC_F22,         KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_F17,         KC_F18,         KC_F19,         KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_F14,         KC_F15,         KC_F16,         KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_F23,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_0,     ST_MACRO_1,     KC_NO,          KC_NO,          ST_MACRO_2,     ST_MACRO_3,     KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_4,     ST_MACRO_5,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_6,     ST_MACRO_7,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [11] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
                                                                                                    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_NO,          KC_NO,          KC_ENTER,       KC_ENTER
  ),
  [12] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT,      KC_TRANSPARENT,                                                                 KC_NO,          KC_4,           KC_5,           KC_6,           KC_0,           KC_NO,
    KC_TRANSPARENT, KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_1,           KC_2,           KC_3,           MOD_LSFT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TAB,         KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_GRAVE,       KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, LSFT(KC_1),     KC_DELETE,      KC_ESCAPE,      KC_LSHIFT,      KC_NO,                                                                          KC_NO,          KC_LPRN,        KC_RPRN,        KC_MINUS,       KC_EQUAL,       KC_ENTER,
    KC_TRANSPARENT, KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          MT(MOD_RALT, KC_LBRACKET),MT(MOD_RGUI, KC_RBRACKET),KC_RGUI,        KC_RCTRL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,                                                                                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_BSPACE,      KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255}, {172,234,255} },

    [1] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

    [2] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {73,246,243}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204}, {25,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
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
    case 5:
      set_layer_color(5);
      break;
    case 11:
      set_layer_color(11);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_DELETE))));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_B)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_P)));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F17));
        tap_code16(LCTL(KC_F17));
        tap_code16(LCTL(KC_F17));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F17));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F17)); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F17)); register_code16(LCTL(KC_F17)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F17)); register_code16(LCTL(KC_F17));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F17)); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F17)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F17)); break;
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

