#include<Servo.h>  //We're adding servo library.
int a =90;

Servo sevro;  //We assign a name for servo.

void setup() {
  Serial.begin(9600);
  sevro.attach(9);

  sevro.write(90);  //We're set the angle of the servo to 90.

}

void loop() {
  int ldr1 = analogRead(A0);  //We assign a name for Analog 0.
  Serial.println(ldr1);       //We're priting ldr1's value to serial port.
  int ldr2 = analogRead(A1);  //We assign a name for Analog 1.
  Serial.println(ldr2);      //We're priting ldr2's value to serial port.
  delay(100);


  if(ldr1 > 600 && ldr2 < 920){  //If ldr1's value is more than 600, we're set the angle of the servo to 20. You should set these values according to light power.
    while(a>21){
      a=a-1;
      sevro.write(a);
      delay(50); 
      }
  } 
  if(ldr1 < 600 && ldr2 > 920){  //If ldr2's value is more than 920, we're set the angle of the servo to 150. You should set these values according to light power.
    while(a<151){
      a=a+1;
      sevro.write(a);
      delay(50); 
      }
  }
}
