const int switchPin = 2;   
const int motor1Pin = 3;   
const int motor2Pin = 4;   
const int motor3Pin = 12;    
const int motor4Pin = 13;    
const int enablePin1 = 9;
const int enablePin2 = 11;
const int potPin = 0;
int speed1 = 0;

void setup() {
  // Set up serial input
  Serial.begin(9600);
  
  // set inputs:
  pinMode(switchPin, INPUT); 

  // set all the other pins you're using as outputs:
  pinMode(motor1Pin, OUTPUT); 
  pinMode(motor2Pin, OUTPUT); 
  pinMode(enablePin1, OUTPUT);
  pinMode(motor3Pin, OUTPUT); 
  pinMode(motor4Pin, OUTPUT); 
  pinMode(enablePin2, OUTPUT);


  // set enablePin high so that motor can turn on:
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}

void loop() {
  // if the switch is high, motor will turn on one direction:
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(motor1Pin, LOW);   
    digitalWrite(motor2Pin, HIGH);  
    digitalWrite(motor3Pin, LOW);   
    digitalWrite(motor4Pin, HIGH);

    speed1 = analogRead(potPin);
    speed1 = 793 + (speed1/6);
    analogWrite (enablePin1, speed1);
    analogWrite (enablePin2, speed1);
    Serial.println(speed1);
    delay (50);  
  } 
  
  // if the switch is low, motor will turn in the other direction:
  else {
    digitalWrite(motor1Pin, HIGH);  // set leg 1 of the H-bridge high
    digitalWrite(motor2Pin, LOW);   // set leg 2 of the H-bridge low
    digitalWrite(motor3Pin, HIGH);  // set leg 1 of the H-bridge high
    digitalWrite(motor4Pin, LOW);   // set leg 2 of the H-bridge low

    speed1 = analogRead(potPin);
    speed1 = 793 + (speed1/6);
    analogWrite (enablePin2, speed1);
    analogWrite (enablePin1, speed1);
    Serial.println(speed1);
    delay (50);
  }
}

