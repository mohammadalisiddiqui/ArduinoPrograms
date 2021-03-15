float vol;
float tem;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int x=analogRead(A1);
 int y = analogRead(A0);
 vol=(x/1023.0)*5.0;
 tem=(y/1023.0)*5.0*100;
 Serial.print("Voltage is=");
 Serial.println(vol);
 Serial.println("Temperature is =");
 Serial.println(tem);
 
 delay(1000);
}
