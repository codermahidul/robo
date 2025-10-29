#include <Servo.h>

#define SERVO_PIN 3;
#define IR_PIN A0;

long execution_time = 0;
long current_time = 0;

Servo myMotor;

void setup() {
  // put your setup code here, to run once:
  myMotor.attach(SERVO_PIN);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int irValue = analogRead(IR_PIN);

  if (irValue < 100) {
    myMotor.write(180);
    execution_time = millis();
  } else {
    current_time = millis();
    if (current_time - execution_time >= 1500) {
      myMotor.write(0);
    }
  }
}
