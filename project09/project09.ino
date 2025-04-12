#include <Servo.h> //add library for servo
Servo ServoPin; //create servo pin
int motorPin = 13; //declare servo pin

void Circle_Drive_Right(int ServoPin) { //function circle right driving
  ServoPin.write(90); //set straight steering
  delay(1000); //wait 1000 milisecond
  ServoPin.write(115); //point right steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(13, HIGH); //turn on motor
}

void Circle_Drive_Left(int ServoPin) { //function circle left driving
  ServoPin.write(90); //set straight steering
  delay(1000); //wait 1000 milisecond
  ServoPin.write(65); //point left steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(13, HIGH); //turn on motor
}

void Circle_Drive_Straight(int ServoPin) { //function straight driving
  ServoPin.write(90); //set straight steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(13, HIGH); //turn on motor
}


void setup() {
  ServoPin.attach(7); //declare ServoPin as oin 7
  pinMode(motorPin, OUTPUT); //declare motorPin as output

}


void loop() {
  // Set the motor speed to maximum
  Circle_Drive_Right(ServoPin); //run function
  Circle_Drive_Left(ServoPin); //run function
  Circle_Drive_Straight(ServoPin); //run function

}

