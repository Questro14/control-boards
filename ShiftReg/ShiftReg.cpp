#include "Arduino.h"
#include "ShiftReg.h"

ShiftReg::ShiftReg(int dataPin, int latchPin, int clockPin, int number595){
	_dataPin = dataPin;
	_latchPin = latchPin;
	_clockPin = clockPin;
	_number595 = number595*8;
	pinMode(_dataPin, OUTPUT);
	pinMode(_latchPin, OUTPUT);
	pinMode(_clockPin, OUTPUT);
	clearReg();
}

void ShiftReg::clearReg(){
	for (int i = _number595-1; i>=0; --i)
		_register[i] = 0;
}

void ShiftReg::setting(int index, bool data){
	_register[index] = data;
	writeReg();
	
}

void ShiftReg::writeReg(){
	digitalWrite(_latchPin, LOW);
	for(int i=_number595-1; i>=0; --i){
		digitalWrite(_clockPin, LOW);
		bool data = _register[i];
		digitalWrite(_dataPin, data);
		digitalWrite(_clockPin, HIGH);
	}
	digitalWrite(_latchPin, HIGH);
}
