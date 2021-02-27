#include "browniepan.h"

led_config_t g_led_config = { {
    //Key Matrix to LED index
    { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13},
    { 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
    { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, NO_LED, 40},
    { 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, NO_LED, NO_LED, 41},
    { 53, 54, 55, NO_LED, NO_LED, 56, NO_LED, NO_LED, 57, NO_LED, 58, NO_LED, 59, 60}
}, {
    //LED Index to Physical Position
    {0,0}, {16,0}, {32,0}, {48,0}, {64,0}, {80,0}, {96,0}, {112,0}, {128,0}, {144,0}, {160,0}, {176,0}, {192,0}, {216,0},
    {220,16}, {200,16}, {184,16}, {168,16}, {152,16}, {136,16}, {120,16}, {104,16}, {88,16}, {72,16}, {56,16}, {40,16}, {24,16}, {4,16},
    {8,32}, {32,32}, {48,32}, {64,32}, {80,32}, {96,32}, {112,32}, {128,32}, {144,32}, {160,32}, {176,32}, {192,32}, {212,32},
    {208,48}, {184,48}, {168,48}, {152,48}, {136,48}, {120,48}, {104,48}, {88,48}, {72,48}, {56,48}, {40,48}, {20,48},
    {0,64}, {20,64}, {48,64}, {104,64}, {164,64}, {188,64}, {208,64}, {224,64}
}, {
    //LED Index to Flag
    1,4,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,1,
    1,1,1,1,1,1,1,1
} };

/*enum rgb_matrix_effects {
    RGB_MATRIX_NONE = 0,
    RGB_MATRIX_SOLID_COLOR = 1,     // Static single hue, no speed support
    RGB_MATRIX_ALPHAS_MODS,         // Static dual hue, speed is hue for secondary hue
    RGB_MATRIX_GRADIENT_UP_DOWN,    // Static gradient top to bottom, speed controls how much gradient changes
    RGB_MATRIX_GRADIENT_LEFT_RIGHT,    // Static gradient left to right, speed controls how much gradient changes
    RGB_MATRIX_BREATHING,           // Single hue brightness cycling animation
    RGB_MATRIX_BAND_SAT,        // Single hue band fading saturation scrolling left to right
    RGB_MATRIX_BAND_VAL,        // Single hue band fading brightness scrolling left to right
    RGB_MATRIX_BAND_PINWHEEL_SAT,   // Single hue 3 blade spinning pinwheel fades saturation
    RGB_MATRIX_BAND_PINWHEEL_VAL,   // Single hue 3 blade spinning pinwheel fades brightness
    RGB_MATRIX_BAND_SPIRAL_SAT,     // Single hue spinning spiral fades saturation
    RGB_MATRIX_BAND_SPIRAL_VAL,     // Single hue spinning spiral fades brightness
    RGB_MATRIX_CYCLE_ALL,           // Full keyboard solid hue cycling through full gradient
    RGB_MATRIX_CYCLE_LEFT_RIGHT,    // Full gradient scrolling left to right
    RGB_MATRIX_CYCLE_UP_DOWN,       // Full gradient scrolling top to bottom
    RGB_MATRIX_CYCLE_OUT_IN,        // Full gradient scrolling out to in
    RGB_MATRIX_CYCLE_OUT_IN_DUAL,   // Full dual gradients scrolling out to in
    RGB_MATRIX_RAINBOW_MOVING_CHEVRON,  // Full gradent Chevron shapped scrolling left to right
    RGB_MATRIX_CYCLE_PINWHEEL,      // Full gradient spinning pinwheel around center of keyboard
    RGB_MATRIX_CYCLE_SPIRAL,        // Full gradient spinning spiral around center of keyboard
    RGB_MATRIX_DUAL_BEACON,         // Full gradient spinning around center of keyboard
    RGB_MATRIX_RAINBOW_BEACON,      // Full tighter gradient spinning around center of keyboard
    RGB_MATRIX_RAINBOW_PINWHEELS,   // Full dual gradients spinning two halfs of keyboard
    RGB_MATRIX_RAINDROPS,           // Randomly changes a single key's hue
    RGB_MATRIX_JELLYBEAN_RAINDROPS, // Randomly changes a single key's hue and saturation
#if define(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    RGB_MATRIX_TYPING_HEATMAP,      // How hot is your WPM!
    RGB_MATRIX_DIGITAL_RAIN,        // That famous computer simulation
#endif
#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
    RGB_MATRIX_SOLID_REACTIVE_SIMPLE,   // Pulses keys hit to hue & value then fades value out
    RGB_MATRIX_SOLID_REACTIVE,      // Static single hue, pulses keys hit to shifted hue then fades to current hue
    RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
    RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
    RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
    RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    RGB_MATRIX_SPLASH,              // Full gradient & value pulse away from a single key hit then fades value out
    RGB_MATRIX_MULTISPLASH,         // Full gradient & value pulse away from multiple key hits then fades value out
    RGB_MATRIX_SOLID_SPLASH,        // Hue & value pulse away from a single key hit then fades value out
    RGB_MATRIX_SOLID_MULTISPLASH,   // Hue & value pulse away from multiple key hits then fades value out
#endif
    RGB_MATRIX_EFFECT_MAX
};

void rgb_matrix_indicators_kb(void) {
    rgb_matrix_set_color(index, red, green, blue);
}*/
