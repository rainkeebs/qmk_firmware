#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x726B
#define PRODUCT_ID      0x6270
#define DEVICE_VER      0x0001
#define MANUFACTURER    rainkeebs
#define PRODUCT         Brownie Pan
#define DESCRIPTION     choc

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B3, B2, B1, B0 }
#define MATRIX_COL_PINS { F4, F1, F0, D2, D3, D5, F7, F6, F5, D4, D6, D7, B4, B5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGBLIGHT_LIMIT_VAL 100
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#define RGB_DI_PIN E6
#define DRIVER_LED_TOTAL 61
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
#define RGB_DISABLE_TIMEOUT 300000 // number of milliseconds to wait until rgb automatically turns off
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
#define RGB_MATRIX_STARTUP_SPD 100 // Sets the default animation speed, if none has been set
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS


#endif
