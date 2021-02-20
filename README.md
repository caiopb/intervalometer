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

The part you need to understand is commented

If you want to change the exposure time just change the number in line 12: Delay(4000); 4000 stands for 4s
It blinks twice every time it finishes.
You can uncomment lines 21 to 26 if using BULB mode, since in this mode the shutter open with one signal and close with the other. Only worth for exposures longer than 30s
