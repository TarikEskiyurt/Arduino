void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);

}

void loop() {
 if (digitalRead(9)==1)
 digitalWrite(8, HIGH);
 else
 digitalWrite(8, LOW);

}
