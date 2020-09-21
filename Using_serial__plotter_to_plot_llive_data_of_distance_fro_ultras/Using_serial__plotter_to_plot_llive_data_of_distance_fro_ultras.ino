int triggerpin=13;
int echopin=11;
int dt=200;
int pingTravelTime;
float pingTraveldist;
float distanceToTarget;

void setup()
{
  pinMode(triggerpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(triggerpin,LOW);
  delayMicroseconds(10);
  digitalWrite(triggerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin,LOW);
  pingTravelTime=pulseIn(echopin,HIGH);
  delay(25);
  pingTraveldist=(0.013464)*pingTravelTime;
  distanceToTarget=pingTraveldist/2;
  delay(300);
  Serial.print(0);
  Serial.print(",");
  Serial.println(distanceToTarget);
  Serial.print(",");
  Serial.println(10);
  
  
   

}
