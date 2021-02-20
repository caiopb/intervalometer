# intervalometer
Simple IR intervalometer for Sony NEX cameras

Material:
-Arduino Nano (or other)
-IR LED
-330 Ohm resistor (or none)
-small wire
-protoboard

This is my first project with arduino and it is the most simple as it can get.
The board in action and result is available at https://www.youtube.com/watch?v=_tgvnt2M45s in portuguese

I just changed a few lines from this project, which was the only to work with me:
https://github.com/msfeldstein/ArduinoIntervalometer/blob/master/Intervalometer.ino

This is the part you can change:
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

If you want to change the exposure time just change the number in line 21: Delay(4000); 4000 stands for 4s
It blinks twice every time it finishes.
You can uncomment lines 29 to 35 if using BULB mode, since in this mode the shutter open with one signal and close with the other. 
