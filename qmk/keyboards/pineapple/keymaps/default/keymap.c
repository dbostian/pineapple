#include "kb.h"

enum {
    TD_RESET
};

enum custom_keycodes {
    PK_1 = SAFE_RANGE,
    PK_2,
    PK_3,
    PK_4,
    PK_5,
    PK_6,
    PK_7,
    PK_8,
    PK_9,
    PK_10,
    PK_11,
    PK_12,
    PK_13,
    PK_14,
    PK_15,
    PK_16,
    PK_17,
    PK_18,
    PK_19,
    PK_20,
    PK_21,
    PK_22,
    PK_23,
    PK_24
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		PK_1,  PK_2,  PK_3,  PK_4,  PK_5,  PK_6,  TD(TD_RESET), 
		PK_7,  PK_8,  PK_9,  PK_10, PK_11, PK_12, 
		PK_13, PK_14, PK_15, PK_16, PK_17, PK_18,  
		PK_19, PK_20, PK_21, PK_22, PK_23, PK_24),
};

void tap_dance_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("Kaboom! ");
    }
    if (state->count >= 2) {
        reset_keyboard();
        reset_tap_dance(state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(tap_dance_reset)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case PK_1:
                SEND_STRING("Boom! ");
                break;
            case PK_2:
                SEND_STRING("Bang! ");
                break;
            case PK_3:
                SEND_STRING("Kablooey! ");
                break;
            case PK_4:
                SEND_STRING("Pffft! ");
                break;
            case PK_5:
                SEND_STRING("Uh, oh! ");
                break;
            case PK_6:
                SEND_STRING("Kablammo! ");
                break;
            case PK_7:
                SEND_STRING("Pop! ");
                break;
            case PK_8:
                SEND_STRING("Badaboom! ");
                break;
            case PK_9:
                SEND_STRING("Pow! ");
                break;
            case PK_10:
                SEND_STRING("Blam! ");
                break;
            case PK_11:
                SEND_STRING("Wham! ");
                break;
            case PK_12:
                SEND_STRING("Poof! ");
                break;
            case PK_13:
                SEND_STRING("Beep! ");
                break;
            case PK_14:
                SEND_STRING("Boop! ");
                break;
            case PK_15:
                SEND_STRING("Crack! ");
                break;
            case PK_16:
                SEND_STRING("Click! ");
                break;
            case PK_17:
                SEND_STRING("Biff! ");
                break;
            case PK_18:
                SEND_STRING("Zonk! ");
                break;
            case PK_19:
                SEND_STRING("Whoops! ");
                break;
            case PK_20:
                SEND_STRING("Hissssss! ");
                break;
            case PK_21:
                SEND_STRING("Ooof! ");
                break;
            case PK_22:
                SEND_STRING("Clank! ");
                break;
            case PK_23:
                SEND_STRING("Ka-thunk! ");
                break;
            case PK_24:
                SEND_STRING("Ahhh! ");
                break;
        }
    }
    return true;
}

