#include<Stepper.h>
int stepsperrevo=2048;
int motspeed=50;
int dt=500;
Stepper mystepper(stepsperrevo,8,9,10,11);
void setup(){
  
  mystepper.setSpeed(motspeed);
  Serial.begin(9600);
}

void loop()
{
  mystepper.step(stepsperrevo);
  delay(dt);
  mystepper.step(-stepsperrevo);
  delay(dt);
}
