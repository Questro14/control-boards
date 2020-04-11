class BytePack { 
  public:
    int lenght = 2;
    BytePack(byte byte_pack[2]) {
      _byte_pack[2] = byte_pack[2];

      if (Serial.available() > 0) {
        while (Serial.available()) {
          Serial.readBytes(&_byte_pack[2], lenght);
        }
      }
    }
  private:
    byte _byte_pack[2];


};

byte txByte[2];
BytePack txBytePack(txByte[2]);
void setup() {
Serial.begin(115200);

}

void loop() {


}
