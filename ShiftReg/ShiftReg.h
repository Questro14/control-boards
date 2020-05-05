#ifndef ShiftReg_h
#define ShiftReg_h

#include "Arduino.h"
#define max 8
class ShiftReg{
	public:
		ShiftReg(int dataPin, int latchPin, int clockPin, int number595);
		void clearReg();
		void setting(int, bool);
		
	private:
		int _dataPin; // пин 14 на микросхеме 595
		int _latchPin; // пин 12
		int _clockPin; // пин 11
		int _number595; // кол-во микросхем на плате
		bool _register[max*8];
		
		void writeReg();
};
#endif
