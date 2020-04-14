#include "BytePack.h"
byte firstByte;
byte secondByte;

BytePack pack(firstByte, secondByte);

void setup() {
  Serial.begin(9600);

}

void loop() {
  if (!pack.readPack()) {
    pack.sendNextBoard();
  }
}
