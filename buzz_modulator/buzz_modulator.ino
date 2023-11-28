int passiveBuzz = 9;

void setup() {
pinMode(passiveBuzz, OUTPUT);
}

void loop() {
analogWrite(passiveBuzz, 50); // turn on buzzer
delay(1);
analogWrite(passiveBuzz, 0); // turn off buzzer
delay(1);
}
