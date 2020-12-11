void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  int y = map(x,0,1023,0,255);
  analogWrite(3,y);
  Serial.println(y);
  delay(100);
}
