/*
  Arduino CoffeeBot
  Frank Olson
  V.1
  21 July 2014
  Arduino Mega Uno
  
  Cute little robot
*/

// Include Libraries
#include <musical_notes.h>

// Pin Assignments
int redLED = 10;
int greenLED = 11;

// Creating a new musical_notes instance
musical_notes music(13);

// Setup routine
void setup(){
  // Initialize digital LED pins
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop(){
  ledBlink(redLED, greenLED, 62, 10);
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  music.squeak();
  delay(500);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  music.laugh();
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  while(true){}
}

void ledBlink(int led1, int led2, int millisec, int duration){
  while(duration > 0){
    digitalWrite(led1, HIGH);
    delay(millisec);
    digitalWrite(led1,LOW);
    delay(millisec);
    digitalWrite(led2, HIGH);
    delay(millisec);
    digitalWrite(led2,LOW);
    delay(millisec);
    duration -= 1;
  }
}
