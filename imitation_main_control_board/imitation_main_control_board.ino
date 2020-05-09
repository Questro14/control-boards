byte firstByte = 0x11;
byte secondByte = 0x11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write(firstByte);
  Serial.write(secondByte);
  delay(1000);
}
