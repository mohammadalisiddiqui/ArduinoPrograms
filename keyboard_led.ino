char a;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter 1 for glow led and 0 for off");
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.available();
 a=Serial.read();
 if(a=='1'){
  digitalWrite(LED_BUILTIN,HIGH);
  }
  else if(a=='0'){
    digitalWrite(LED_BUILTIN,LOW);
    }
}
