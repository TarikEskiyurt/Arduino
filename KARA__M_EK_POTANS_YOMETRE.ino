int ledler[] = {5,6,7,8,9,10};

void setup() {
  Serial.println("Potansiometer value reading : ");
  for(int i=0; i<7; i++){
  pinMode(ledler[i], OUTPUT);

}
}

void loop() 
{
  int deger = analogRead(A0);  //We say "set deger variable to A0 pin's value"
  deger = map(deger,0,1023,100,1000);
  for(int i=0; i<7; i++){
    digitalWrite(ledler[i], HIGH);
    delay(deger);
    digitalWrite(ledler[i], LOW);
  }
  for(int j=6; j>-1; j--){
    digitalWrite(ledler[j], HIGH);
    delay(deger);
    digitalWrite(ledler[j], LOW);
    
    
  }


}
