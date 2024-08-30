#include QMK_KEYBOARD_H

#include "quantum/leader.h"

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3,KC_SPC):
           return 150;
        case LT(1,KC_MINS):
            return 150;
        case LT(2,KC_BSPC):
            return 150;
        default:
            return TAPPING_TERM;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT(
         QK_GESC,          KC_1,         KC_2,         KC_3,         KC_4,          KC_5,                                 KC_6,         KC_7,          KC_8,          KC_9,         KC_0,         KC_DEL,
         MEH_T(KC_TAB),    LT(3,KC_Q),   KC_W,         RCTL_T(KC_F), KC_P,          KC_G,                                 KC_J,         KC_L,          RCTL_T(KC_U),  KC_Y,         KC_SCLN,      KC_GRV,
         ALL_T(KC_CAPS),   LSFT_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), KC_T,          KC_D,                                 KC_H,         KC_N,          RGUI_T(KC_E),  LALT_T(KC_I), LSFT_T(KC_O), ALL_T(KC_QUOT),
         LSFT(KC_TAB),     KC_Z,         KC_X,         KC_C,         KC_V,          KC_B,   KC_ENT,       RSFT(KC_ENT),   KC_K,         KC_M,          KC_COMM,       KC_DOT,       KC_SLSH,      KC_ENT, 
                                                       KC_LGUI,      LT(1,KC_MINS), KC_EQL,                               LT(3,KC_SPC), LT(2,KC_BSPC), OSM(MOD_HYPR)
     ),
     [1] = LAYOUT(
         KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,         KC_F6,                                KC_F7,        KC_F8,         KC_F9,         KC_F10,       KC_F11,       KC_F12,
         KC_NO,        KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,        KC_PERC,                              KC_CIRC,      KC_AMPR,       KC_ASTR,       KC_PIPE,      KC_COLN,      KC_NO,
         KC_NO,        KC_LPRN,      KC_LCBR,      KC_LBRC,      KC_LT,         KC_NO,                                KC_QUOT,      KC_GT,         KC_RBRC,       KC_RCBR,      KC_RPRN,      KC_GRV,
         KC_NO,        KC_RPRN,      KC_RCBR,      KC_RBRC,      KC_RBRC,       KC_NO,   KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_NO,         KC_NO,         KC_BSLS,      KC_BSLS,      KC_TRNS,
                                                   KC_TRNS,      KC_TRNS,       KC_DEL,                               KC_MINS,      KC_EQL,        KC_TRNS
     ),
     [2] = LAYOUT(
         KC_NO,        KC_NO,        KC_NO,        KC_MSTP,      KC_MRWD,       KC_MFFD,                              KC_NO,        KC_NO,         KC_NO,         KC_NO,        KC_NO,        KC_NO,
         KC_TRNS,      KC_TRNS,      KC_AT,        KC_LCTL,      KC_VOLD,       KC_VOLU,                              KC_HOME,      LGUI(KC_LBRC), SGUI(KC_LBRC), SGUI(KC_RBRC),LGUI(KC_RBRC),KC_TRNS,
         HYPR(KC_NO),  KC_LSFT,      KC_LALT,      KC_LGUI,      KC_TRNS,       KC_TRNS,                              KC_END,       KC_LEFT,       KC_DOWN,       KC_UP,        KC_RGHT,      KC_TRNS,
         KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_TRNS, KC_TRNS,       KC_TRNS,      KC_HOME,      LGUI(KC_LEFT), KC_PGDN,       KC_PGUP,      LGUI(KC_RGHT),KC_END,
                                                   KC_TRNS,      MO(3),         KC_TRNS,                              KC_TRNS,      KC_TRNS,       KC_TRNS
     ),
     [3] = LAYOUT(
         QK_BOOT,      KC_NO,        KC_NO,        KC_NO,        KC_NO,         KC_NO,                                KC_NO,        KC_NO,         KC_NO,         DT_PRNT,      DT_DOWN,      DT_UP,
         KC_NO,        KC_NO,        KC_1,         KC_2,         KC_3,          KC_NO,                                KC_NO,        KC_NO,         KC_NO,         KC_NO,        KC_NO,        KC_NO,
         KC_NO,        KC_NO,        KC_P4,        KC_P5,        KC_P6,         KC_NO,                                KC_NO,        KC_NO,         KC_LBRC,       KC_RBRC,      KC_NO,        KC_NO,
         KC_NO,        KC_NO,        KC_P7,        KC_P8,        KC_P9,         KC_NO,   KC_NO,          KC_NO,       KC_NO,        KC_NO,         KC_NO,         KC_NO,        KC_NO,        KC_NO,
                                                   KC_PDOT,      KC_P0,         KC_NO,                                KC_NO,        KC_NO,         KC_TRNS
     ),
 };

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
