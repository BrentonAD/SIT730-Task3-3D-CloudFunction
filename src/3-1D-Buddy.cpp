/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/brent/OneDrive/Documents/_UNIVERSITY/_MASTEROFAI/2022Tri1/SIT730-EmbeddedSystemDevelopment/Tasks/3/SIT730-Task3-1P-WebHook/3-3D-Buddy/3-1D-Buddy/src/3-1D-Buddy.ino"
/*
 * Project 3-1D-Buddy
 * Description: Simple program to respond to Particle event
 * Author: Brenton Adey BrentonAD
 * Date: 2022-04-25
 */

void eventHandler(const char *event, const char *data);
void setup();
void loop();
#line 8 "c:/Users/brent/OneDrive/Documents/_UNIVERSITY/_MASTEROFAI/2022Tri1/SIT730-EmbeddedSystemDevelopment/Tasks/3/SIT730-Task3-1P-WebHook/3-3D-Buddy/3-1D-Buddy/src/3-1D-Buddy.ino"
SerialLogHandler logHandler;
int i = 0;

pin_t LED_PIN = D5;

void eventHandler(const char *event, const char *data){
  i++;
  Log.info("%d: event=%s data=%s", i, event, (data ? data : "NULL"));

  // Blink LED 3 times
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
}

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", eventHandler);
}

void loop() {

}