
#define pinIRLED 9 // IR LED

void setup()   {                
  pinMode(pinIRLED, OUTPUT);      
  Serial.begin(9600);
}
 
void loop()                     
{
  takePicture();                      // call take picture function
  delay(4000);                        // delay in ms: 1s = 1000
  digitalWrite(LED_BUILTIN, HIGH);    // blink led builtin for visual feedback only
  delay(20);                          // 
  digitalWrite(LED_BUILTIN, LOW);     // 
  delay(80);                          // 
  digitalWrite(LED_BUILTIN, HIGH);    // 
  delay(20);                          // 
  digitalWrite(LED_BUILTIN, LOW);     // 
  // uncomment this part if using BULB mode to close shutter
    //  takePicture();                      //
    //  delay(1860);                        // uncomment this line if using BULB mode to close shutter
    // ================================== expose the camera to IR led between the 2-blink and 1-blink signal
    //  digitalWrite(LED_BUILTIN, HIGH);    // 
    //  delay(20);                          // 
    //  digitalWrite(LED_BUILTIN, LOW);     // 
}

//================================= DONT MESS THE CODE BELOW ==================================

void pulseON(int pulseTime) {
  unsigned long endPulse = micros() + pulseTime;        // create the microseconds to pulse for
  while( micros() < endPulse) {
    digitalWrite(pinIRLED, HIGH);                       // turn IR on
    delayMicroseconds(13);                              // half the clock cycle for 38Khz - e.g. the 'on' part of our wave
    digitalWrite(pinIRLED, LOW);                        // turn IR off
    delayMicroseconds(13);                              // delay for the other half of the cycle to generate wave/ oscillation
  }
}
void pulseOFF(unsigned long startDelay) {
  unsigned long endDelay = micros() + startDelay;       // create the microseconds to delay for
  while(micros() < endDelay);
}

void takePicture() {
  for (int i=0; i < 2; i++) {    // impulse send twice
    pulseON(2336);
    pulseOFF(646);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(646);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(646);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(11008);
    pulseON(2336);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(646);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(646);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(11008);
    pulseON(2336);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(646);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1168);
    pulseOFF(621);
    pulseON(1093);
    pulseOFF(696);
    pulseON(572);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(621);
    pulseON(572);
    pulseOFF(1218);
    pulseON(497);
    pulseOFF(1292);
    pulseON(422);
    pulseOFF(1367);
    pulseON(373);
    pulseOFF(11803);
    pulseON(298);
    pulseOFF(2659);
    pulseON(199);
    pulseOFF(1590);
    pulseON(174);
    pulseOFF(1019);
    pulseON(174);
    pulseOFF(1615);
    pulseON(174);
    pulseOFF(1615);
    pulseON(149);
    pulseOFF(1044);
    pulseON(149);
    pulseOFF(1640);
    pulseON(124);
    pulseOFF(1093);
    pulseON(149);
    pulseOFF(1044);
    pulseON(124);
    pulseOFF(1665);
    pulseON(124);
    pulseOFF(1068);
    pulseON(124);
    pulseOFF(1665);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1118);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(75);
    pulseOFF(1715);
    pulseON(75);
    pulseOFF(12101);
    pulseON(149);
    pulseOFF(2833);
    pulseON(75);
    pulseOFF(1715);
    pulseON(75);
    pulseOFF(1118);
    pulseON(75);
    pulseOFF(1715);
    pulseON(75);
    pulseOFF(1715);
    pulseON(75);
    pulseOFF(1118);
    pulseON(75);
    pulseOFF(1715);
    pulseON(75);
    pulseOFF(1118);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1118);
    pulseON(99);
    pulseOFF(1093);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(1690);
    pulseON(99);
    pulseOFF(646);
  }
}
