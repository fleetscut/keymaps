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
#define _PUNC 5

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
        _______,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   _______,
        _______,    KC_Q,    KC_W,    KC_F,   KC_P,   KC_B,   _______,
        _______,   GUI_A,    ALT_R,    CTL_S,   SHFT_T,   KC_G,   _______,
        _______,   KC_Z,    KC_X,    KC_C,   KC_D,   KC_V,
        _______,   _______, _______,   _______,
                                    KC_PGDN, KC_ESC,
                                    KC_END, LT(_NAV,KC_SPC),
                                    KC_DEL, KC_TAB,
        // right hand
                          _______, KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     _______,
                          _______, KC_J,    KC_L,    KC_U,     KC_Y,     KC_SCLN,     _______,
                          _______, KC_M,    SFT_N,    CTL_E,     ALT_I,     GUI_O,  _______,
                                   KC_K,    LT(_PUNC,KC_H),    KC_COMM,  KC_DOT,   KC_SLSH,  _______,
                                            _______,   _______,  _______,  _______,
             LT(_FN,KC_DEL), KC_END,
             LT(_NUM,KC_BSPC), KC_BSPC,
             LT(_SYM,KC_ENTER), KC_ENTER
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
        _______,   KC_LBRC,   KC_7,   KC_8,   KC_9,   KC_RBRC,  _______,
        _______,   KC_PLUS,   KC_4,   KC_5,   KC_6,   KC_EQL,  _______,
        _______,   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_BSLS,
        _______,   _______,   _______,   _______,
                                    _______, KC_DOT,
                                    _______, KC_0,
                                    _______, KC_MINS,
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
        _______,   KC_LPRN,   KC_DLR,   KC_PERC,   KC_CIRC,   KC_RPRN,  _______,
        _______,   KC_LBRC,   KC_EXLM,   KC_AT,   KC_HASH,   KC_RBRC,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, KC_PIPE,
                                    _______, KC_UNDS,
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
    [_PUNC] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,  KC_COLON,   _______,   KC_MINS,   _______,  _______,
        _______,   _______,  KC_COLON,    KC_EQL,    KC_DQT,   _______,  _______,
        _______,    KC_GRV,   _______,   KC_PLUS,   KC_QUOT,   _______,
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

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        //case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
