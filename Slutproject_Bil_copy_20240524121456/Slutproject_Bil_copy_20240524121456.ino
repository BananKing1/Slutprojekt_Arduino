#include <Servo.h> //add library for servo
Servo ServoPin; //create servo pin
int motorPin = 13; //declare servo pin

void Circle_Drive_Right(int Servo) { //function circle right driving
  ServoPin.attach(Servo); //declare ServoPin
  ServoPin.write(115); //point right steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(motorPin, HIGH); //turn on motor
}

void Circle_Drive_Left(int Servo) { //function circle left driving
  ServoPin.attach(Servo); //declare ServoPin
  ServoPin.write(65); //point left steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(motorPin, HIGH); //turn on motor
}

void Drive_Straight(int Servo) { //function straight driving
  ServoPin.attach(Servo); //declare ServoPin
  ServoPin.write(90); //set straight steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(motorPin, HIGH); //turn on motor
}

void Stand_Straight(int Servo) {
  ServoPin.attach(Servo); //declare ServoPin
  ServoPin.write(90); //set straight steering
  delay(1000); //wait 1000 milisecond

  digitalWrite(motorPin, LOW); //turn on motor
}

void setup() {
  pinMode(motorPin, OUTPUT); //declare motorPin as output

}


void loop() {
  // Select and run functions
  
  //Drive_Straight(7);
  //Circle_Drive_Left(7); 
  //Circle_Drive_Right(7); 
  Stand_Straight(7);

}

