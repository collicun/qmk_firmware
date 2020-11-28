// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-
//==================================
// Start of cribbing from miryoku. (preferred layout)
//==================================
#pragma once

// default but used in macros
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift and Retro Shift (Auto Shift for Tap Hold).
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#define RETRO_SHIFT 500

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64


//==================================
// Start of cribbing from brickbots. (using literally the same keyboard he wrote this for)
//==================================
#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 10000
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
#endif

//#define TAP_CODE_DELAY 100
//#define PERMISSIVE_HOLD
// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

// Using the bottom encoder positions and my encoders
// my board reports the wrong direction
#undef ENCODERS_PAD_A
#undef ENCODERS_PAD_B
#undef ENCODERS_PAD_A_RIGHT
#undef ENCODERS_PAD_B_RIGHT

//This is for the wonky encoders on the brass board
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { B5 }
#define ENCODERS_PAD_A_RIGHT { B5 }
#define ENCODERS_PAD_B_RIGHT { C6 }
#define ENCODER_RESOLUTION 2

// These are the standard encoders
//#define ENCODERS_PAD_A { B5 }
//#define ENCODERS_PAD_B { C6 }
//#define ENCODERS_PAD_A_RIGHT { C6 }
//#define ENCODERS_PAD_B_RIGHT { B5 }
//#define ENCODER_RESOLUTION 2