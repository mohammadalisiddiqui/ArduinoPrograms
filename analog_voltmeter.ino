float y;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int x=analogRead(A1);
 y=(x/1023.0)*5.0;
 Serial.println(y);
 delay(1000);
}
