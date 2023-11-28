#include "DHT.h"
#define Type DHT11
int sensePin=2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
float tempK;
int setTime=500;
int dt=500;
 
void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
}
 
void loop() {
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  tempK = tempC + 273.0;

  Serial.print("temp C: ");
  Serial.print(tempC);
  Serial.println(" °C");

  Serial.print("temp F: ");
  Serial.print(tempF);
  Serial.println(" °F");

  Serial.print("temp K: ");
  Serial.print(tempK);
  Serial.println(" °K");

  delay(dt);
}
