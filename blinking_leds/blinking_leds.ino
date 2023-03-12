int switchState = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize inputs and outputs.
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) { 
    // the buton is not pressed
    digitalWrite(5, LOW); // green LED
    digitalWrite(4, HIGH); // red LED
    digitalWrite(3, HIGH); // red LED

    delay(500); // wait for a quarter second

    digitalWrite(4, LOW); // red LED
    digitalWrite(3, LOW); // red LED

    delay(500); // wait for a quarter second

  } else {
    // the buton is  pressed
    digitalWrite(5, HIGH); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(3, LOW); // red LED
  }
}