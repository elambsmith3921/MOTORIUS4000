
#include <TinyStepper.h>

#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define BUTTON_IN 8

#define HALFSTEPS 4096




TinyStepper stepper(HALFSTEPS, IN1, IN2, IN3, IN4);


void setup() {
  Serial.begin(9600);
  while(!Serial);

  Serial.println("HELLO!!!!");
  
  stepper.Enable();
  delay(1000);

  pinMode(BUTTON_IN, INPUT);

}

void loop() {
  
  if (digitalRead(BUTTON_IN)) {
    stepper.Move(1);
    Serial.println("Moving");
  }

}
