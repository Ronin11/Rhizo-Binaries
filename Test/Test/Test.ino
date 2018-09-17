#include <Rhizo.h>

Rhizo net = Rhizo();
int ledPin = 4; // GPIO4

void setup(){
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  
//  net.checkForUpdate();
}

void loop(){
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(200); 
}
