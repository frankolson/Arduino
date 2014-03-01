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
  
  Serial.println("Enter the message you would like converted to morse.");
  Serial.println("Keep in mind you only have 144 characters and no apostrophes: ");
}

void loop(){
  /* This serial connection needs to be fixed. It winds up stuck
     stuck in an infinite return loop when characters are not 
     being entered. It needs to prompt, wait, the return */
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

void morseCharConversion(char letter){
  // I need to find a better eay of doing this
  switch(letter){
    case 'a'|'A':
      Serial.println(".-");
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'b'|'B':
      Serial.println("-...");
      dash();
      dot();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'c'|'C':
      Serial.println("-.-.");
      dash();
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'd'|'D':
      Serial.println("-..");
      dash();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'e'|'E':
      Serial.println(".");
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'f'|'F':
      Serial.println("..-.");
      dot();
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'g'|'G':
      Serial.println("--.");
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'h'|'H':
      Serial.println("....");
      dot();
      dot();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'i'|'I':
      Serial.println("..");
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'j'|'J':
      Serial.println(".---");
      dot();
      dash();
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'k'|'K':
      Serial.println("-.-");
      dash();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'l'|'L':
      Serial.println(".-..");
      dot();
      dash();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'm'|'M':
      Serial.println("--");
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'n'|'N':
      Serial.println("-.");
      dash();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'o'|'O':
      Serial.println("---");
      dash();
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'p'|'P':
      Serial.println(".--.");
      dot();
      dash();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 'q'|'Q':
      Serial.println("--.-");
      dash();
      dash();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'r'|'R':
      Serial.println(".-.");
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 's'|'S':
      Serial.println("...");
      dot();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case 't'|'T':
      Serial.println("-");
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'u'|'U':
      Serial.println("..-");
      dot();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'v'|'V':
      Serial.println("...-");
      dot();
      dot();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'w'|'W':
      Serial.println(".--");
      dot();
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'x'|'X':
      Serial.println("-..-");
      dash();
      dot();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'y'|'Y':
      Serial.println("-.--");
      dash();
      dot();
      dash();
      dash();
      delay(TIMEPERIOD * 3);
      break;
    case 'z'|'Z':
      Serial.println("--..");
      dash();
      dash();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
      break;
    case ' ':
      Serial.println(" ");
      delay(TIMEPERIOD * 7);
    case '.':
      Serial.println(".-.-.-");
      dot();
      dash();
      dot();
      dash();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
    case ',':
      Serial.println("--..--");
      dash();
      dash();
      dot();
      dot();
      dash();
      dash();
      delay(TIMEPERIOD * 3);
    case ':':
      Serial.println("---...");
      dash();
      dash();
      dash();
      dot();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
    case '?':
      Serial.println("..--..");
      dot();
      dot();
      dash();
      dash();
      dot();
      dot();
      delay(TIMEPERIOD * 3);
    case '-':
      Serial.println("-....-");
      dash();
      dot();
      dot();
      dot();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
    case '/':
      Serial.println("-..-.");
      dash();
      dot();
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
    case '('|')':
      Serial.println("-.--.-");
      dash();
      dot();
      dash();
      dash();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
    case '"':
      Serial.println(".-..-.");
      dot();
      dash();
      dot();
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
    case '@':
      Serial.println(".--.-.");
      dot();
      dash();
      dash();
      dot();
      dash();
      dot();
      delay(TIMEPERIOD * 3);
    case '=':
      Serial.println("-...-");
      dash();
      dot();
      dot();
      dot();
      dash();
      delay(TIMEPERIOD * 3);
      case '0':
        Serial.println("-----");
        dash();
        dash();
        dash();
        dash();
        dash();
        delay(TIMEPERIOD * 3);
      case '1':
        Serial.println(".----");
        dot();
        dash();
        dash();
        dash();
        dash();
        delay(TIMEPERIOD * 3);
      case '2':
        Serial.println("..---");
        dot();
        dot();
        dash();
        dash();
        dash();
        delay(TIMEPERIOD * 3);
      case '3':
        Serial.println("...--");
        dot();
        dot();
        dot();
        dash();
        dash();
        delay(TIMEPERIOD * 3);
      case '4':
        Serial.println("....-");
        dot();
        dot();
        dot();
        dot();
        dash();
        delay(TIMEPERIOD * 3);
      case '5':
        Serial.println(".....");
        dot();
        dot();
        dot();
        dot();
        dot();
        delay(TIMEPERIOD * 3);
      case '6':
        Serial.println("-....");
        dash();
        dot();
        dot();
        dot();
        dot();
        delay(TIMEPERIOD * 3);
      case '7':
        Serial.println("--...");
        dash();
        dash();
        dot();
        dot();
        dot();
        delay(TIMEPERIOD * 3);
      case '8':
        Serial.println("---..");
        dash();
        dash();
        dash();
        dot();
        dot();
        delay(TIMEPERIOD * 3);
      case '9':
        Serial.println("----.");
        dash();
        dash();
        dash();
        dash();
        dot();
        delay(TIMEPERIOD * 3);
  }
}
  
