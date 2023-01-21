void setup() {
  // put your setup code here, to run once:
  //OUT: 2 LEDs, blink alternatively
  //IN: GPIO pin, thru resistor
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1313);
  if (digitalRead(13) == HIGH) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  delay(2233);
  digitalWrite(12, LOW);
  

}
