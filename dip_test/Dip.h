#include <Arduino.h>
#ifndef Dip_h
#define Dip_h


class Dip{
	public:
		Dip(int pin1, int pin2, int pin3, int pin4);
		
		
	private:
		int _pin1, _pin2, _pin3, _pin4;
};
#endif
