void setup() {
  Serial.begin(9600); 
  Serial.println("Potansiometer value reading : ");
  

}

void loop() {
  int deger = analogRead(A0);  //We say "set deger variable to a0 pin's value"
  deger = deger/4;
  analogWrite(9, deger);
  Serial.println(deger);  //We say "print value to serial monitor"
  delay(500);   //We say "wait 500 ms"

}
