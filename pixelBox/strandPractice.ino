// LED Pixel Strand Practice
// Will Olson
// 23 July 2013

#include "SPI.h"
#include "Adafruit_WS2801.h"

// defining the clock and dat pin
int dataPin = 3;
int clockPin = 5;

/* Since we are practicing with a strand, here is the variable 
   that defines how many pixels we are using */
Adafruit_WS2801 strip = Adafruit_WS2801(50, dataPin, clockPin);

void setup(){
  
  // initialize library
  strip.begin();
  
  // refresh LED display colors, start as off
  strip.show();
}

void loop(){
  colorWipe(Color(255, 0, 0), 30);
  colorWipe(Color(0, 0, 0), 30);
  colorWipe(Color(0, 255, 0), 30);
  colorWipe(Color(0, 0, 255), 30);

}

uint32_t Color(byte r, byte g, byte b)
{
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}

void colorWipe(uint32_t c, uint8_t wait) {
  int i;
  
  for (i=0; i < 18; i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
  
} 
  
