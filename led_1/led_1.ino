int DELAY_TIME = 3000;
int DIGITAL_PIN_GREEN = 10;
int DIGITAL_PIN_YELLOW = 7;
int DIGITAL_PIN_RED= 4;


void setup() {
  // tell arduino what pin we are using and how we are using it
  pinMode(DIGITAL_PIN_GREEN, OUTPUT); 
  pinMode(DIGITAL_PIN_YELLOW, OUTPUT);
  pinMode(DIGITAL_PIN_RED, OUTPUT);
}

void loop() {
  // GREEN LED
  digitalWrite(DIGITAL_PIN_GREEN, HIGH); // turn to  5v
  delay(DELAY_TIME);
  digitalWrite(DIGITAL_PIN_GREEN, LOW); // turn to 0v or off
  // YELLOW LED
  digitalWrite(DIGITAL_PIN_YELLOW, HIGH);
  delay(1000);
  digitalWrite(DIGITAL_PIN_YELLOW, LOW); 
  // RED LED
  digitalWrite(DIGITAL_PIN_RED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(DIGITAL_PIN_RED, LOW);
}
