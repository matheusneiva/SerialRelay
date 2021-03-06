/*
  Adapted latch pin by Matheus Neiva.
  (08/10/2015)
  -----------------------------------------------------
      RoboCore - Serial Relay example
                    (16/07/2015)

  Written by François (based on default Blink example).
  
  Example of how to use the Serial Relay library.
  The relay 1 of module 1 will turn on for one
  second, then off for one second, repeatedly.

*/

#include <SerialRelay.h>

const byte NumModules = 1;
SerialRelay relays(8,9,10,NumModules); // (data, clock, latch, number of modules)
// to use with modules RoboCore, do not use latch.

// the setup routine runs once when you press reset:
void setup() {
  // nothing to do here
}

// the loop routine runs over and over again forever:
void loop() {
  relays.SetRelay(1, SERIAL_RELAY_ON, 1);   // turn the relay ON
  delay(1000);                              // wait for a second
  relays.SetRelay(1, SERIAL_RELAY_OFF, 1);  // turn the relay OFF
  delay(1000);                              // wait for a second
}

