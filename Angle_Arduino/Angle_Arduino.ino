#include <Servo.h>
Servo Servo1;

int servoPin = 7;
int motorPin= 5;

void SpinFunction();

void setup() {
  // put your setup code here, to run once:

  Servo1.attach(servoPin);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  Servo1.write(90);
  delay(1000);

  Servo1.write(110);
  delay(1000);

  Servo1.write(90);
  delay(1000);
}


