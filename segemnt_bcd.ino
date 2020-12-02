int a=13;
int b=12;
int c=11;
int d=10;
char con;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.available();
  con = Serial.read();
  if(con =='0'){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
    }
    else if(con=='1'){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
    }
else if(con =='2'){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
}
else if(con =='3'){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
}

}
