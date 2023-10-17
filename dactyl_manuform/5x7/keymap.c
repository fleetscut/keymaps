#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// Layers
#define _DHM 0
#define _FN  1
#define _NUM 2
#define _SYM 3
#define _NAV 4
#define _SWAY1 5
#define _SWAY2 6
#define _SWAY3 7

// Home Row Mods
#define SHFT_T LSFT_T(KC_T)
#define CTL_S LCTL_T(KC_S)
#define ALT_R LALT_T(KC_R)
#define GUI_A LGUI_T(KC_A)

#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I RALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

// Layer bindings
#define MOSW1 MO(_SWAY1)
#define MOSW2 MO(_SWAY2)
#define MOSW3 MO(_SWAY3)
#define LTNAV LT(_NAV, KC_SPC)
#define LTFN LT(_FN, KC_DEL)
#define LTNUM LT(_NUM, KC_BSPC)
#define LTSYM LT(_SYM, KC_ENT)

// Sway binds
# define M0W0 LGUI(KC_0)
# define M0W1 LGUI(KC_1)
# define M0W2 LGUI(KC_2)
# define M0W3 LGUI(KC_3)
# define M0W4 LGUI(KC_4)
# define M0W5 LGUI(KC_5)
# define M0W6 LGUI(KC_6)
# define M0W7 LGUI(KC_7)
# define M0W8 LGUI(KC_8)
# define M0W9 LGUI(KC_9)

# define M1W0 LGUI(LCTL(KC_0))
# define M1W1 LGUI(LCTL(KC_1))
# define M1W2 LGUI(LCTL(KC_2))
# define M1W3 LGUI(LCTL(KC_3))
# define M1W4 LGUI(LCTL(KC_4))
# define M1W5 LGUI(LCTL(KC_5))
# define M1W6 LGUI(LCTL(KC_6))
# define M1W7 LGUI(LCTL(KC_7))
# define M1W8 LGUI(LCTL(KC_8))
# define M1W9 LGUI(LCTL(KC_9))

# define M2W0 LGUI(LALT(KC_0))
# define M2W1 LGUI(LALT(KC_1))
# define M2W2 LGUI(LALT(KC_2))
# define M2W3 LGUI(LALT(KC_3))
# define M2W4 LGUI(LALT(KC_4))
# define M2W5 LGUI(LALT(KC_5))
# define M2W6 LGUI(LALT(KC_6))
# define M2W7 LGUI(LALT(KC_7))
# define M2W8 LGUI(LALT(KC_8))
# define M2W9 LGUI(LALT(KC_9))

# define SCRATCH1 LGUI(LALT(LCTL(KC_1)))
# define SCRATCH2 LGUI(LALT(LCTL(KC_2)))
# define SCRATCH3 LGUI(LALT(LCTL(KC_3)))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DHM] = LAYOUT_5x7(
        // left hand
           M0W0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, SCRATCH1,
           M1W2,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B, SCRATCH2,
           M1W0,   GUI_A,   ALT_R,   CTL_S,  SHFT_T,    KC_G, SCRATCH3,
           M2W0,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,
        _______, _______, KC_LEFT,KC_RIGHT,
                                KC_LALT, KC_ESC,
                                KC_LCTL,  LTNAV, 
                                KC_LSFT, KC_TAB,
        // right hand
                         MOSW1,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
                         MOSW2,    KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, _______,
                         MOSW3,    KC_M,   SFT_N,   CTL_E,   ALT_I,   GUI_O, _______,
                                   KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, _______,
                                                  KC_DOWN,   KC_UP, _______, _______,
             LTFN,  KC_RALT,
             LTNUM, KC_RCTL,
             LTSYM, KC_RSFT
    ),
    [_FN] = LAYOUT_5x7(
        // left hand
      QK_REBOOT, _______, _______, _______,  _______, _______, QK_BOOT,
        _______,  KC_F12,   KC_F7,   KC_F8,    KC_F9, KC_PSCR, _______,
        _______,  KC_F11,   KC_F4,   KC_F5,    KC_F6, KC_SCRL, _______,
        _______,  KC_F10,   KC_F1,   KC_F2,    KC_F3, KC_PAUSE,
        _______, _______, _______, _______,
                                _______, _______,
                                _______, _______,
                                _______, _______,
        // right hand
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                  _______, _______, _______, _______, _______, _______,
                                                    _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_NUM] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, KC_PLUS,    KC_7,    KC_8,    KC_9,  KC_EQL, _______,
        _______, KC_SCLN,    KC_4,    KC_5,    KC_6, KC_COLON, _______,
        _______, KC_GRV,     KC_1,    KC_2,    KC_3, KC_BSLS,
        _______, _______, _______, _______,
                                _______, KC_DOT,
                                _______, KC_0,
                                _______, KC_MINS,
        // right hand
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                  _______, _______, _______, _______, _______, _______,
                                                    _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SYM] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, QK_BOOT,
        _______, KC_LCBR, KC_AMPR, KC_ASTR,KC_TILDE, KC_RCBR, _______,
        _______, KC_LPRN,  KC_DLR, KC_PERC, KC_CIRC, KC_RPRN, _______,
        _______, KC_LBRC, KC_EXLM,   KC_AT, KC_HASH, KC_RBRC,
        _______, _______, _______, _______,
                                _______, _______,
                                _______, KC_PIPE,
                                _______, KC_UNDS,
        // right hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
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
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
                                    KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SWAY1] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M0W7,    M0W8,    M0W9, _______, _______,
        _______, _______,    M0W4,    M0W5,    M0W6, _______, _______,
        _______, _______,    M0W1,    M0W2,    M0W3, _______, 
        _______, _______, _______, _______,
                                _______, _______,
                                _______,    M0W0,
                                _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SWAY2] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M1W7,    M1W8,    M1W9, _______, _______,
        _______, _______,    M1W4,    M1W5,    M1W6, _______, _______,
        _______, _______,    M1W1,    M1W2,    M1W3, _______,
        _______, _______, _______, _______,
                                    _______, _______,
                                    _______,    M1W0,
                                    _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SWAY3] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M2W7,    M2W8,    M2W9, _______, _______,
        _______, _______,    M2W4,    M2W5,    M2W6, _______, _______,
        _______, _______,    M2W1,    M2W2,    M2W3, _______, 
        _______, _______, _______, _______,
                                _______, _______,
                                _______, M2W0,
                                _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
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
