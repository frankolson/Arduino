// Pixel Grid Design 1
// Will Olson
// 3 September 2013

// note: try to make it look less like a swatzika 

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
  frameOne(Color(0, 0, 255),Color(255, 0, 0), Color(255, 255, 255), 1000);
  frameTwo(Color(0, 0, 255),Color(255, 0, 0), Color(255, 255, 255), 1000);
  // frameThree(Color(255, 0, 0), 30);
  // frameFour(Color(255, 0, 0), 30);
}

uint32_t Color(byte r, byte g, byte b){
  uint32_t c;
  c = r;
  c <<= 8;
  c |= g;
  c <<= 8;
  c |= b;
  return c;
}

void frameOne(uint32_t c, uint32_t w, uint32_t h, uint8_t wait){
  
  // methodically designating each individual pixel (not fun, 2 much work)
  strip.setPixelColor(0, c);
  strip.show();

  strip.setPixelColor(1, w);
  strip.show();

  strip.setPixelColor(2, h);
  strip.show();

  strip.setPixelColor(3, h);
  strip.show();

  strip.setPixelColor(4, c);
  strip.show();

  strip.setPixelColor(5, c);
  strip.show();

  strip.setPixelColor(6, w);
  strip.show();

  strip.setPixelColor(7, w);
  strip.show();

  strip.setPixelColor(8, c);
  strip.show();

  strip.setPixelColor(9, w);
  strip.show();

  strip.setPixelColor(10, w);
  strip.show();

  strip.setPixelColor(11, c);
  strip.show();

  strip.setPixelColor(12, h);
  strip.show();

  strip.setPixelColor(13, c);
  strip.show();

  strip.setPixelColor(14, c);
  strip.show();

  strip.setPixelColor(15, c);
  strip.show();

  strip.setPixelColor(16, w);
  strip.show();

  strip.setPixelColor(17, h);
  strip.show();

  strip.setPixelColor(18, h);
  strip.show();

  strip.setPixelColor(19, c);
  strip.show();

  strip.setPixelColor(20, c);
  strip.show();

  strip.setPixelColor(21, c);
  strip.show();

  strip.setPixelColor(22, w);
  strip.show();

  strip.setPixelColor(23, h);
  strip.show();

  strip.setPixelColor(24, w);
  strip.show();

  strip.setPixelColor(25, w);
  strip.show();

  strip.setPixelColor(26, c);
  strip.show();

  strip.setPixelColor(27, w);
  strip.show();

  strip.setPixelColor(28, w);
  strip.show();

  strip.setPixelColor(29, c);
  strip.show();

  strip.setPixelColor(30, c);
  strip.show();

  strip.setPixelColor(31, w);
  strip.show();

  strip.setPixelColor(32, h);
  strip.show();

  strip.setPixelColor(33, h);
  strip.show();

  strip.setPixelColor(34, c);
  strip.show();

  strip.setPixelColor(35, c);
  strip.show();
  delay(wait);
}

void frameTwo(uint32_t c, uint32_t w, uint32_t h, uint8_t wait){
  int colorOne[16] = {3,4,9,11,12,14,15,16,18,20,21,22,27,29,33,34};
  int colorTwo[8] = {0,5,8,13,19,26,30,35};
  int colorThree[12] ={1,2,6,7,10,17,23,24,25,28,31,32};
  int i;
  
  // set first color
  for (i = 0; i < 16; i++){
    strip.setPixelColor(colorOne[i], c);
  }
  
  // set second color
  for (i = 0; i < 8; i++){
    strip.setPixelColor(colorOne[i], w);
  }
  
  // set third color
  for (i = 0; i < 12; i++){
    strip.setPixelColor(colorOne[i], h);
  }
  
  strip.show();
  delay(wait);
}
