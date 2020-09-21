int triggerpin=13;
int echopin=11;
int dt=200;
int pingTravelTime;
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
  Serial.print("Time_duration:   ");
  Serial.println(pingTravelTime);
   

}
