int a =13;
int b =12;
int c = 11;
int d = 10;
bool con;
int x=1;
//int y=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
//  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.available();
 con= digitalRead(2);

  if(con==HIGH && x==1){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      con =LOW;
      x++; 
      delay(500);
    }
      else if(con==HIGH && x==2){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==3){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==4){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==5){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==6){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==7){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==8){
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==9){
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
//  Reverse func
      else if(con==HIGH && x==10){
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==11){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
          else if(con==HIGH && x==12){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==13){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
          else if(con==HIGH && x==14){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==15){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==16){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      con =LOW;
      x++;
      delay(500);
    }
      else if(con==HIGH && x==17){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      x=1;
    }

  

}

