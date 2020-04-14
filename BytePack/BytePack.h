#include <Arduino.h>
#ifndef BytePack_h
#define BytePack_h

class BytePack {
  public:

    BytePack(byte firstByte, byte secondByte);
    bool readPack();
    void sendNextBoard();
    bool addresCheck(byte addresBoard);

  private:
    byte _firstByte;
    byte _secondByte;

};

#endif
