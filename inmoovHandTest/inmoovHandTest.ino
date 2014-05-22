/*
InMoov Hand and Arm Test
Frank Olson
22 May 2014
Last Edit: 22 May 2014

Original code taken from InMoov website and assumed code was developed 
by Gael Langevin. Modified for use with the HK-15298 servos.
*/

// Import Library
#include <Servo.h>

// Define Body Parts
Servo servothumb;
Servo servoindex;
Servo servomajeure;
Servo servoringfinger;
Servo servopinky;
Servo servowrist;
Servo servobiceps;
Servo servorotate;
Servo servoshoulder;
Servo servoomoplat;
Servo servoneck;
Servo servorothead;

// Define Min and Max Pulse Signals
int fingerMin = 600;
int fingerMax = 2400;

// Setup Function
void setup() { 
  servothumb.attach(2,fingerMin, fingerMax);  
  servoindex.attach(3,fingerMin, fingerMax);  
  servomajeure.attach(4,fingerMin, fingerMax);
  servoringfinger.attach(5, fingerMin, fingerMax);
  servopinky.attach(6,fingerMin, fingerMax);
  servowrist.attach(7);
  servobiceps.attach(8);
  servorotate.attach(9);
  servoshoulder.attach(10);
  servoomoplat.attach(11);
  servoneck.attach(12);
  servorothead.attach(13);
  
} 

void loop() {            // Loop through motion tests
  alltovirtual();        // open hand
  delay(4000);           
  //alltorest();         // Uncomment to use this
  //delay(4000);         
  alltomax();            // close hand
  delay(2000);

  alltovirtual();        // open hand
  delay(2000);                   
  hangloose();           // hang loose configuration
  delay(2000);
  
  alltovirtual();        // open hand
  delay(2000);                   
  hearts();              // ILU configuration
  delay(2000);
 
  alltovirtual();        // open hand
  delay(2000);                   
  point();            // pointing configuration
  delay(2000);  
}

// Motion to set the servo into "virtual" 0 position: alltovirtual
void alltovirtual() {         
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
  /*servowrist.write(0);
  servobiceps.write(0);  
  servorotate.write(20);    //Never less then (20 degree)
  servoshoulder.write(30);  //Never less then (30 degree)
  servoomoplat.write(10);   //Never less then (10 degree)
  servoneck.write(0);
  servorothead.write(0);*/
}

// Motion to set the servo into "rest" position: alltorest
void alltorest() {         
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);
  /*servowrist.write(0);
  servobiceps.write(0);     
  servorotate.write(90);    //Never less then (20 degree)
  servoshoulder.write(30);  //Never less then (30 degree)
  servoomoplat.write(10);   //Never less then (10 degree)
  servoneck.write(90);
  servorothead.write(90);*/
}

// Motion to set the servo into "max" position: alltomax
void alltomax() {
  servothumb.write(180);
  servoindex.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);
  /*servowrist.write(180);
  servobiceps.write(85);      //Never more then (85 or 90degree)
  servorotate.write(110);     //Never more then (110 degree)
  servoshoulder.write(130);   //Never more then (130 degree)
  servoomoplat.write(70);     //Never more then (70 degree)
  servoneck.write(180);
  servorothead.write(180);*/
}

// Hangloose hand sign
void hangloose() {
  servothumb.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
}

// sign of affection
void hearts() {
  servomajeure.write(180);
  servoringfinger.write(180);
}

// Pointing configuration
void point() {
  servothumb.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);
}

