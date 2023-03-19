// Detect angle inclinatiion with ball switch
const int ledPin = 13; //the led attach to

void setup()
{ 
  pinMode(ledPin,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(2, HIGH);
} 

void loop() 
{  
  int digitalVal = digitalRead(2); // read value from pin 2

 // if value of the tilt ball is high
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); //turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH); //turn the led on 
  }
}