#include <Arduino.h>
#include "Dip.h"

Dip::Dip(int pin1, int pin2, int pin3, int pin4){
	pinMode(pin1, INPUT);
	pinMode(pin2, INPUT);
	pinMode(pin3, INPUT);
	pinMode(pin4, INPUT);
	_pin1 = pin1;
	_pin2 = pin2;
	_pin3 = pin3;
	_pin4 = pin4;	
}