// Touch screen library with X Y and Z (pressure) readings as well
// as oversampling to avoid 'bouncing'
// (c) ladyada / adafruit
// Code under MIT License
#ifndef _SPFD5408_TOUCHSCREEN_H_
#define _SPFD5408_TOUCHSCREEN_H_

#include <stdint.h>

#ifdef _VARIANT_ARDUINO_STM32_
#include "board.cpp" // PIN_MAP
#include "io.h" // PIN_MAP
#endif


#include "pins_arduino.h"
#include "wiring_private.h"
#ifdef __AVR
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#endif

class TSPoint {
public:
	TSPoint(void);
	TSPoint(int16_t x, int16_t y, int16_t z);

	bool operator==(TSPoint);
	bool operator!=(TSPoint);

	int16_t x, y, z;
};

class TouchScreen {
public:
	TouchScreen(uint8_t xp, uint8_t yp, uint8_t xm, uint8_t ym);
	TouchScreen(uint8_t xp, uint8_t yp, uint8_t xm, uint8_t ym, uint16_t rx);

	bool isTouching(void);
	uint16_t pressure(void);
	int readTouchY();
	int readTouchX();
	TSPoint getPoint();
	int16_t pressureThreshhold;

private:
	uint8_t _yp, _ym, _xm, _xp;
	uint16_t _rxplate;
};

#endif
