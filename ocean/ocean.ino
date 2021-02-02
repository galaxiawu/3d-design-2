#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 3

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB);


void setup() {
  strip.begin();      
  strip.show();            
  strip.setBrightness(100);

}

void loop() {
  colorWipe(strip.Color(10, 165, 242), 500);
  colorWipe(strip.Color( 0, 64, 255), 500);
 

}

void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color); 
    strip.show();
  }
}
