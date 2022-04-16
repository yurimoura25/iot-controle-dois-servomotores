#include <Servo.h>
#define POTENCIOMETRO A0
#define SERVO01 10
#define SERVO02 11

Servo servo1;
Servo servo2;

void setup() {
  pinMode(POTENCIOMETRO, INPUT);
  servo1.attach(SERVO01);
  servo2.attach(SERVO02);
  Serial.begin(9600);
}

void loop() {
  
  int potenciometro = analogRead(POTENCIOMETRO);
  int valorConvertido = map(potenciometro, 0, 1023, 0, 180);
  servo1.write(valorConvertido);
  servo2.write(valorConvertido);
  
  delay(150);
}