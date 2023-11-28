int readPin = A5;
float calcValue = 0;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  calcValue = (5./1023) * (analogRead(readPin));

  Serial.println(calcValue);
  delay(500); 
}
