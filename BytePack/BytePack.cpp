#include <Arduino.h>
#include "BytePack.h"

BytePack::BytePack(byte firstByte, byte secondByte) {
  _firstByte = firstByte;
  _secondByte = secondByte;
}

bool BytePack::readPack() {

  if (Serial.available()) {
    while (Serial.available()) {
      Serial.readBytes(&_firstByte, 1);
      Serial.readBytes(&_secondByte, 1);
      return 0;
    }
  }
}
bool BytePack::addresCheck(byte addresBoard) {
}



void BytePack::sendNextBoard() {

  Serial.print(_firstByte, BIN);
  Serial.println(_secondByte, BIN);
  _firstByte = 0x00;
  _secondByte = 0x00;


}
