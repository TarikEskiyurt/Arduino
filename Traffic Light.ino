void setup() {            //At this part, we're describing pins.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  digitalWrite(8, HIGH); //At here, we give energy to pin.
  delay(3000);           //At here, it is waiting for 3000 ms.
  digitalWrite(8, LOW);  //At here, we cut energy from pin.
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);

}
