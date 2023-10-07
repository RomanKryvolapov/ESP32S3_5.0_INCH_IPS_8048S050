#include <Arduino_GFX_Library.h>

#define DISPLAY_BACKLIGHT_PIN 2
Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
        40, 41, 39, 42, 45, 48, 47, 21, 14, 5, 6, 7, 15, 16, 4, 8, 3, 46, 9, 1, 0, 8, 4, 8, 0, 8, 4, 8, 1, 16000000
);
Arduino_RGB_Display *gfx = new Arduino_RGB_Display(800, 480, rgbpanel, 0, true);

void setup(void) {

    pinMode(DISPLAY_BACKLIGHT_PIN, OUTPUT);
    digitalWrite(DISPLAY_BACKLIGHT_PIN, HIGH);
    gfx->begin();

    gfx->fillScreen(BLACK);
    gfx->setCursor(10, 10);
    gfx->setTextSize(5);
    gfx->setTextColor(RED);
    gfx->println("Start");

}

void loop() {

}