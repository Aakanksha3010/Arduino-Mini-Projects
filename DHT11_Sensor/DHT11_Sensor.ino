#include <DHT.h>
#define Type DHT11
int sensepin=2;
int setTime=500;
int dt=900;
DHT HT(sensepin,Type);
float humidity;
float tempC;
float tempF;
void setup()
{
  Serial.begin(9600);
  HT.begin();
  

void loop()
{
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  
  Serial.print("Humidity:  ");
  Serial.print(humidity);
  Serial.print("  Temperature_C:    ");
  Serial.print(tempC);
  Serial.print("   Temperature_F:    ");
  Serial.println(tempF);
}
