# Arduino IDE SPFD5408TFTLCDLib #

## What is this repository for? ##

Update to old Adafruit_TFTLCD library for use on new IDE and to support some weird chinese displays.



## How do I get set up? ##

 * Get the ZIP.
 * Rename to SPFD5408TFTLCDLib.zip
 * Install library on Arduino

 * Also includes the Adafruit_GFX library for Arduino, so no need to install it for this library. https://github.com/adafruit/Adafruit-GFX-Library


## Examples ##

Included on example folder, available on Arduino IDE.

## Status ##

Current status:
 - AVR arduinos: Working (see photos 1 & 2 driven by Arduino nano)
 - Arduino Due R3: Working, but you have to connect LCD_Dn lines as below.
 - STM32: Still working on it, doesn't compile.
 - ESP8266: I have ones with only 1 analog input, I'll not test it. Maybe you could make it work in new boards, with more than 1 analog input.
 

## Extra ##

Displays use 8-bit parallel to communicate, 12 or 13 pins are required to interface (RST is optional).

LCD Data lines for Arduino Due:
 - D0 connects to digital pin 33
 - D1 connects to digital pin 34
 - D2 connects to digital pin 35
 - D3 connects to digital pin 36
 - D4 connects to digital pin 37
 - D5 connects to digital pin 38
 - D6 connects to digital pin 39
 - D7 connects to digital pin 40



Original Adafruit_TFTLCD Written by Limor Fried/Ladyada for Adafruit Industries.

Modified by Naguissa to adopt new Arduino library system and add some improvements.

Merged with João Clovis Lopes Filho  <https://github.com/JoaoLopesF> adaptation

A lot of info collected from: https://robom.ru/blog/displei/sensornyj-displej-tft-2-4-dyujma.html

MIT license, see README.txt for details.



## Who do I talk to? ##

 * [Naguissa](https://github.com/Naguissa)
 * http://www.foroelectro.net
