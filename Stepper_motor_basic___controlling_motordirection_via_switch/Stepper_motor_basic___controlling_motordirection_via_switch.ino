#include<Stepper.h>
int stepsperrevo=2048;
int motspeed=50;
int buttonpin=2;
int motordir=1;
int buttvalnew;
int buttvalold=1;
int dt=500;
Stepper mystepper(stepsperrevo,8,9,10,11);
void setup(){
  
  mystepper.setSpeed(motspeed);
  Serial.begin(9600);
  pinMode(buttonpin,INPUT);
}

void loop()
{
  buttvalnew=digitalRead(buttonpin);
  if(buttvalold==1 && buttvalnew==0){
    motordir=motordir*(-1);
    buttvalold=buttvalnew;
  }
  mystepper.step(motordir*1);
}
