#include "BytePack.h"

byte firstByte;
byte secondByte;
byte addres = 0x01;
BytePack pack(firstByte, secondByte);

void setup() {
  Serial.begin(9600);
}

void loop() {
  

 if(!pack.readPack() && !(pack.addresCheck(addres))){
    pack.sendNextBoard();
    
}
}
