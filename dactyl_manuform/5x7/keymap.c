#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DHM 0
#define _FN  1
#define _NUM 2
#define _SYM 3
#define _NAV 4

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

// Home Row Mods
#define SHFT_T LSFT_T(KC_T)
#define CTL_S LCTL_T(KC_S)
#define ALT_R LALT_T(KC_R)
#define GUI_A LGUI_T(KC_A)

#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I RALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DHM] = LAYOUT_5x7(
        // left hand
        _______,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_ESC,
        _______,    KC_Q,    KC_W,    KC_F,   KC_P,   KC_B,   _______,
        KC_EQL,   GUI_A,    ALT_R,    CTL_S,   SHFT_T,   KC_G,   KC_MINUS,
        _______,   KC_Z,    KC_X,    KC_C,   KC_D,   KC_V,
        _______,   _______, KC_LEFT,   KC_RIGHT,
                                    KC_PGDN, KC_PGUP,
                                    KC_END, LT(_NAV,KC_SPC),
                                    KC_DEL, KC_BSPC,
        // right hand
                          KC_ESC, KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     _______,
                          _______, KC_J,    KC_L,    KC_U,     KC_Y,     KC_SCLN,     KC_BSLS,
                          KC_UNDS, KC_M,    SFT_N,    CTL_E,     ALT_I,     GUI_O,  KC_QUOT,
                                   KC_K,    KC_H,    KC_COMM,  KC_DOT,   KC_SLSH,  _______,
                                            KC_DOWN,   KC_UP,  _______,  _______,
             LT(_FN,KC_HOME), KC_END,
             LT(_SYM,KC_ENTER), KC_PGDN,
             LT(_NUM,KC_TAB), RSFT_T(KC_CAPS)
    ),

    [_FN] = LAYOUT_5x7(
        // left hand
        QK_REBOOT,   _______,     _______,      _______,    _______,     _______,    QK_BOOT,
        _______,   KC_F12,   KC_F7,    KC_F8,    KC_F9,   KC_PSCR,  _______,
        _______,   KC_F11,   KC_F4,    KC_F5,  KC_F6,   KC_SCRL,  _______,
        _______,   KC_F10,   KC_F1,   KC_F2,   KC_F3,   KC_PAUSE,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,     _______,     _______,     _______,    _______,    _______,    _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   KC_RSFT,   KC_RCTL,   KC_RALT,   KC_RGUI,   _______,
                                     _______,   _______,   _______,   _______,   _______,   _______,
                                                           _______,   _______,   _______,   _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),

    [_NUM] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   KC_7,   KC_8,   KC_9,   _______,  _______,
        _______,   _______,   KC_4,   KC_5,   KC_6,   _______,  _______,
        _______,   _______,   KC_1,   KC_2,   KC_3,   _______,
        _______,   _______,   KC_0,   KC_DOT,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,     _______,     _______,     _______,   _______,
                          _______,   _______,   KC_RSFT,   KC_RCTL,   KC_RALT,   KC_RGUI,   _______,
                                     _______,   _______,     _______,     _______,     _______,   _______,
                                                           _______,     _______,   _______,   _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SYM] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  QK_BOOT,
        _______,   KC_LCBR,   KC_AMPR,   KC_ASTR,   KC_TILDE,   KC_RCBR,  _______,
        _______,   KC_LPRN,   KC_DLR,   KC_PERC,   KC_CIRC,   KC_RPRN,  KC_GRV,
        _______,   KC_LBRC,   KC_EXLM,   KC_AT,   KC_HASH,   KC_RBRC,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,     _______,     _______,     _______,   _______,
                          _______,   _______,   KC_RSFT,   KC_RCTL,   KC_RALT,   KC_RGUI,   _______,
                                     _______,   _______,     _______,     _______,     _______,   _______,
                                                           _______,     _______,   _______,   _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_NAV] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                          _______,   _______,   _______,     _______,     _______,     _______,   _______,
                          _______,   KC_CAPS,   KC_LEFT,     KC_DOWN,     KC_UP,     KC_RIGHT,   _______,
                                     KC_INS,   KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END,   _______,
                                                           _______,     _______,   _______,   _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
};
