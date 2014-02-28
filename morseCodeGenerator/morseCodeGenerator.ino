/*
  Morse Code Generator
  Frank Olson
  V.1
  28 February 2014
  Arduino Mega 2560 R3
*/

#define TIMEPERIOD 250
#define STRLENGTH 144
int led = 13;
int bankIndex = 0;
char letterBank[STRLENGTH];

void setup(){
  Serial.begin(9600);      // Setting up serial connection
  pinMode(led, OUTPUT);    // setup pin 13 to be in output mode
}

void loop(){
  Serial.println("Enter the message you would like converted to morse.");
  Serial.println("Keep in mind you only have 144 characters: ");
  if( Serial.available()){
    char letter = Serial.read();
    if( letter == '\r'){ 
     letterBank[ bankIndex ] = 0; 
      // send to morse convertion
    }else{ letterBank[ bankIndex++ ] = letter; }
  }
  Serial.println();
}

void dot(){
  digitalWrite(led, HIGH);  // turn LED on
  delay(TIMEPERIOD);        // leave on for one time unit
  digitalWrite(led, LOW);   // turn off LED
  delay(TIMEPERIOD);        // leave off for one time unit
}

void dash(){
  digitalWrite(led, HIGH);  // turn LED on
  delay(TIMEPERIOD * 3);    // leave on for three time units
  digitalWrite(led, LOW);   // turn off LED
  delay(TIMEPERIOD);        // leave off for one time unit
}
