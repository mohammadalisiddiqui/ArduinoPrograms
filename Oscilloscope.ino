const int pwm = 9;
const int AnalogIn = A0;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(pwm, OUTPUT);
  pinMode(AnalogIn, INPUT);
}

void loop() {
 for(i=0; i<=255; i++) {
  analogWrite(pwm, i);
  int value = analogRead(AnalogIn);
  Serial.println(value);
  delay(500);
 }

 for(i=255; i>=0; i--) {
  analogWrite(pwm, i);
  int value = analogRead(AnalogIn);
  Serial.println(value);
  delay(500);
 }

 
}


