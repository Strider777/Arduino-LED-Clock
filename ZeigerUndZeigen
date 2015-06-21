// ZeigerUndZeigen
//----------------------------------
// nutzt die globalen Variablen 
//  CRGB leds[NUM_LEDS];
//  int UhrSekunde=0;
//  int UhrMinute=10;
//  int UhrStunde=20;
// und schreibt die Uhrzeit in das LED-Array


void ZeigerUndZeigen (int Offset, boolean spiegeln) {
  
		leds[UhrSekunde] = CRGB::Red;
		leds[UhrMinute]  = CRGB::Green;
		leds[UhrStunde]  = CRGB::Blue;

		FastLED.show();

		// now that we've shown the leds, reset the i'th led to black
		leds[UhrSekunde] = CRGB::Black;
		leds[UhrMinute] = CRGB::Black;
		leds[UhrStunde] = CRGB::Black;

  
  }
  
