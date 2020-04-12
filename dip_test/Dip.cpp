#include <Arduino.h>
#include "Dip.h"

Dip::Dip(int pin1, int pin2, int pin3, int pin4) {
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
  _pin4 = pin4;
}

byte Dip::getAddres(byte addres) { // реализация метода getAddres 

  if (!digitalRead(_pin1)) //если true 
    bitWrite(addres, 3, 1); //ставим 1 в третьем бите addres байта
  else                      // иначе 
    bitWrite(addres, 3, 0); //0 в третьем бите
  if (!digitalRead(_pin2))  
    bitWrite(addres, 2, 1);
  else
    bitWrite(addres, 2, 0);
  if (!digitalRead(_pin3))
    bitWrite(addres, 1, 1);
  else
    bitWrite(addres, 1, 0);
  if (!digitalRead(_pin4))
    bitWrite(addres, 0, 1);
  else
    bitWrite(addres, 0, 0);
  return addres; //возвращаем значение адреса


}
