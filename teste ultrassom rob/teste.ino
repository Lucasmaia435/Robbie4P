#include <Ultrasonic.h>
Ultrasonic ultra(3,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  int dist =  ultra.read();
  Serial.print("Distancia: ");
  Serial.println(dist);
  delay(1000);
}
