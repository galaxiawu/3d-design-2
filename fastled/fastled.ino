#include <FastLED.h>
#define NUM_LEDS 3
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup() {
  delay(3000);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

}

void loop() {
 // Turn the first led red for 1 second
          for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = 0xEE8B8B;
            FastLED.show();
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(200);
        }

}
