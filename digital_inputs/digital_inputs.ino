/* TURN LED ON AND OFF WITH BUTTON PRESS */
// define variables
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  // define inouts and outputs
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP); // default value is High  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  // turn LED on/off on btn press
  if (digitalRead(buttonApin) == LOW)
  {
    // turn LED on
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
}
