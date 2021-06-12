void setup() {
  pinMode(8, OUTPUT);   //At this part, we're describing pin.

}

void loop() {
  digitalWrite(8, HIGH);    //At here, we give energy to pin.
  delay(100);               //At here, it is waiting for 100 ms.
  digitalWrite(8, LOW);     //At here, we cut energy from pin.
  delay(100);

}
