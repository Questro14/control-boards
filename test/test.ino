#include "BytePack.h"
#include "Dip.h"
#include "ShiftReg.h"

#define dipPin1 3
#define dipPin1 4
#define dipPin1 5
#define dipPin1 6

byte firstByte;
byte secondByte;
byte addresBoard;

Dip dip (dipPin1, dipPin2, dipPin3, dipPin4);
BytePack pack(firstByte, secondByte);

void setup() {
  Serial.begin(9600);
}

void loop() {
  addresBoard = dip.getAddres(addresBoard);
  if(!pack.readPack() && !(pack.addresCheck(addresBoard))){
    
    
    }
}
