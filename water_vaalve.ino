int red=13;
int yellow=12;
int green=11;
int relay=10;
int sens;
float con;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 sens=analogRead(A0);
 Serial.println(con);
 con = (sens/1023.0)*5.0;
 if(con==0.00){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(relay,HIGH);
  }
  else if(con <= 2.5){
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(yellow,HIGH);
    digitalWrite(relay,HIGH);
    }
  else if(con == 5.00){
    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
    digitalWrite(relay,LOW);
    }

      delay(500);
}
