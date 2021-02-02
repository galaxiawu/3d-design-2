
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6
 
// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 3
 
// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB);


void setup() {
  strip.begin();
  strip.setBrightness(100);
  strip.show(); // Initialize all pixels to 'off'

}

void color() {
  strip.setPixelColor(0, 255, 0, 0);
  strip.setPixelColor(1, 0, 255, 0);
    strip.show();
}
void loop() {
  color();
  

}
