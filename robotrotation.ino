#include <ZumoMotors.h>
#include <Pushbutton.h>

#include <Wire.h>
#include <ZumoShield.h>
ZumoMotors silniki;
Pushbutton przycisk(ZUMO_BUTTON);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
 
silniki.setSpeeds(0,0); // zatrzymaj robota
przycisk.waitForButton(); // czekaj na wciśnięcie przycisku


silniki.setSpeeds(300,300);
delay(2000);

silniki.setSpeeds(-200,200);
delay(550);

silniki.setSpeeds(300,300);
delay(2000);

silniki.setSpeeds(-200,200);
delay(600);
}
