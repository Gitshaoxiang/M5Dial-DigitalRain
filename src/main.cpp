#include "M5Dial.h"
#include "M5GFX.h"
#include <DigitalRainAnimation.hpp>

DigitalRainAnimation<M5GFX> matrix_effect = DigitalRainAnimation<M5GFX>();

void setup() {
    M5Dial.begin();
    matrix_effect.init(&M5Dial.Display);
}

void loop() {
    matrix_effect.loop();
}
