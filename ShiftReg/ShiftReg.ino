#include "ShiftReg.h"


#define dataPin 4
#define latchPin 5
#define clockPin 6
#define numb595 1

ShiftReg Shift(dataPin, latchPin, clockPin, numb595);

void setup() {
 
}

void loop() {
  for(int i=0; i<=7; ++i){
    Shift.setting(i, 1);
    delay(100);
    Shift.clearReg();
    }
    
}
