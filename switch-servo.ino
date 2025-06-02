#include <Servo.h>

#define SERVO_PIN 3
#define ON_PIN 4
#define OFF_PIN 5

Servo servo1;
 
void setup() {
  servo1.attach(SERVO_PIN);
	moveHome();

  pinMode(ON_PIN, INPUT);
  pinMode(OFF_PIN, INPUT);
}
 
void loop() {
  if (digitalRead(ON_PIN) == HIGH) {
    moveOn();
  }

  if (digitalRead(OFF_PIN) == HIGH) {
    moveOff();
  }
}

void moveHome() {
  servo1.write(90);
  delay(15);
}

void moveOn() {
  servo1.write(60);
  delay(1000);
  moveHome();
}

void moveOff() {
  servo1.write(120);
  delay(1000);
  moveHome();
}
