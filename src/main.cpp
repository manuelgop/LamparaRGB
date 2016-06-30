/**
 * Caja de luz RGB
 * Regalo para Edith
 * Creado por Manuel Gopar el 27-Junio-2016
 */
#include "Arduino.h"
//Pines de salida PWM
int red = 6;
int green = 5;
int blue = 3;
//Valor de cada PIN
int redValue =0;
int greenValue=0;
int blueValue=0;

//Pines de potenciometros
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;

void setup()
{
  // Entrada de potenciometros
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  //Salida para los leds RGB
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);



}

void loop()
{
//Leer el valor de Rojo
redValue = analogRead(pot1)/4;
//Escribirlo en el PWM
analogWrite(red, redValue);
//Leer valor de    Green
greenValue = analogRead(pot2)/4;
//Escribirlo en el PWM
analogWrite(green, greenValue);
//Leer valor de    Blue
blueValue = analogRead(pot3)/4;
//Escribirlo en el PWM
analogWrite(blue, blueValue);


}
