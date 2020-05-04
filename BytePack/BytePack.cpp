#include <Arduino.h>
#include "BytePack.h"
byte addresBoard = 0x01;
BytePack::BytePack(byte firstByte, byte secondByte) {
  _firstByte = firstByte;
  _secondByte = secondByte;
}

bool BytePack::readPack() {

  if (Serial.available()) {
    while (Serial.available()) {
      Serial.readBytes(&_firstByte, 1);
      Serial.readBytes(&_secondByte, 1);
      _flagSend = 1;
      return 0;
    }
  }
}
bool BytePack::addresCheck(byte addresBoard) {
  _addresPack = _firstByte >> 4;

  if (!(addresBoard ^ _addresPack) )
    return 0;
  else
    return 1;
}

void BytePack::sendNextBoard() {
  if (_flagSend) {
    Serial.print(_firstByte, BIN);
    Serial.println(_secondByte, BIN);
    _flagSend = 0;
  }
}

int BytePack::numberChannel(byte secondByte) {
  _numbCh = _secondByte >> 4;
  _numbCh &= ~((1 << 7) | (1 << 6) | (1 << 5) | (1 << 4) | (1 << 3)); //выключаем 7, 6, 5, 4, 3 биты
  return _numbCh;

}

int BytePack::numberSwitch(byte secondByte){
  _numbSw = _secondByte;
  _numbSw &= ~((1<<7)|(1<<6)|(1<<5)|(1<<4)); // выключаем 7, 6, 5, 4 биты
  return _numbSw;
  
  }
