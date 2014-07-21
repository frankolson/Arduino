/*
  Arduino Robot Sounds
  Frank Olson
  V.1
  20 July 2014
  Arduino Mega Uno
  
  With this project I took Erik Kringen Arduino_Sound_Effects 
  project and transfered all the functions to a header file
*/

// Include libraries
#include "musical_notes.h"

// Create a new musical_notes class
musical_notes music(13);
      
void setup(){
}    
      
void loop(){    
      music.squeak();
      delay(500);
      music.catcall();
      delay(500);
      music.ohhh();
      delay(500);
      music.laugh();
      delay(500);
      music.closeEncounters();
      delay(500);
      music.laugh2();
      delay(500);
      music.waka();
      delay(500);  
      music.r2D2();
      delay(500);
      music.ariel();
      delay(3000);
      }
