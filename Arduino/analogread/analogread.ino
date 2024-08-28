#define ldr A0
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(ldr);
  Serial.println(sensorValue);
  delay(100); 
}
