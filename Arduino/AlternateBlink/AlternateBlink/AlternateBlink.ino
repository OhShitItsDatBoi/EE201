void setup() {
  // put your setup code here, to run once:
  //OUT: 2 LEDs, blink alternatively
  //IN: GPIO pin, thru resistor
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("Blue");
  delay(1313);
  if (digitalRead(13) == HIGH) {
    digitalWrite(12, HIGH);
    Serial.println("Red");
    digitalWrite(13, LOW);
  }
  delay(2233);
  digitalWrite(12, LOW);
  

}
