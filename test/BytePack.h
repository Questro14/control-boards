#include <Arduino.h>
#ifndef BytePack_h
#define BytePack_h

class BytePack {
  public:
    BytePack(byte firstByte, byte secondByte);
    bool readPack(); // чтение данных
    void sendNextBoard(); // отправить на след. плату
    bool addresCheck(byte addresBoard); // проверка адреса платы
    int numberSwitch(byte secondByte); // номер ключа
    int numberChannel(byte secondByte); // номер канала

  private:
    byte _firstByte;
    byte _secondByte;
    bool _flagSend;
    byte _addresPack;
    byte _numbCh;
    byte _numbSw;
};

#endif
