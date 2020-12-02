int a=12;
int b=11;
int c=10;
int d=9;
int e=8;
int f=7;
int g=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
    digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  delay(500);
// 2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(f,LOW);
  delay(1000);
    digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(g,LOW);
   digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  delay(500);
//    3
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(f,LOW);
  delay(1000);
//  ali sss asas

}
