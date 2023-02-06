
#include <AccelStepper.h>

#define IN1 1
#define IN2 2
#define IN3 3
#define IN4 4

#define HALFSTEPS 4096




AccelStepper stepper;


void setup() {
  Serial.begin(9600);
  while(!Serial);

  Serial.print("HELLO!!!!");
  
  stepper.setMaxSpeed(1000);
  stepper.setSpeed(50);
  delay(1000);

}

void loop() {
  
  stepper.runSpeed();

}
