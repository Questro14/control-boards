#include "Dip.h"
#define pin1 3 // номера контактов для dip переключателя
#define pin2 4
#define pin3 5
#define pin4 6

byte addresBoard; // переменная для хранения адреса платы;

Dip dip(pin1, pin2, pin3, pin4); // объект dip класса Dip, передаем значения пинов dip переключателя

void setup() {
  Serial.begin(9600); // последовательный интерфейс для проверки 

}

void loop() {
  addresBoard = dip.getAddres(addresBoard); //метод к объекту возвращается адрес платы
  Serial.println(addresBoard, BIN); // вывод в послед. порт значения адреса в двоичной форме 
}
