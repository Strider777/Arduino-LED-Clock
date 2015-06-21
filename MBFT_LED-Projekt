//*************************************************
//*   MBrucher - FThaler 
//*     Projekt LED-Uhr
//*      Stand 30.05.2015     
//*************************************************


// Includes und Defines
//------------------------
#include "FastLED.h"
#include "TimerOne.h"
#define  DATA_PIN 11
#define  NUM_LEDS 60


// Globale Variablen
//--------------------------
CRGB leds[NUM_LEDS];

int UhrSekunde=0;
int UhrMinute=10;
int UhrStunde=20;



// Timer1 Initialisieren
//-----------------------------
volatile int tc = 0; // Timer Counter
void update_time (){tc++;}  // Timer jede Sekunde erhöhen




// Initialisieren
//----------------------------
void setup() {
  // Fast LED Initialisieren
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  // Leuchtstärke einstellen
  LEDS.setBrightness(100);
  
  //Timer 1 initialisieren
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(update_time);
  
}

// Hauptprogramm
//--------------------------------------
void loop() {
         Uhrzeit();  
         ZeigerUndZeigen(0,false);

 
//		// Wait a little bit before we loop around and do it again


		delay(10);




}
