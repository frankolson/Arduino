/* 
   Reference:  This list was adapted from the table located here:
 		http://www.phy.mtu.edu/~suits/notefreqs.html

   Functions acquired from Erik Kringen's Arduino_Sound_Effects
   project that can be found here:
  		http://www.mycontraption.com/sound-effects-with-and-arduino/
*/
#ifndef musical_notes_h
#define musical_notes_h

#include "Arduino.h"

class musical_notes{
	public:
		musical_notes(int speakerPin);
		void beep(int speakerPin, float noteFrequency, long noteDuration);
		void scale();
		void r2D2();
		void closeEncounters();
		void ariel();
		void laugh2();
		void squeak();
		void waka();
		void catcall();
		void ohhh();
		void uhoh();
		void laugh();
	private:
		int _speakerPin;
		float _noteFrequency;
		long _noteDuration;
};

#endif


