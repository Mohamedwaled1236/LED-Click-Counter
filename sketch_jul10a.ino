



int led =10;
int button = 11;
int reading;
int counter=0;


void setup(){
for (int i=8;i<=10;i++)  
pinMode(i,OUTPUT);
pinMode(11,1);


}


void loop (){
  if (digitalRead(11)==1){
    counter++;
    if(counter==1)
    digitalWrite(8,HIGH);
    else if (counter==2)
      digitalWrite(9,HIGH);
      else if (counter==3)
      digitalWrite(10,HIGH);
      else{
      for (int i=10;i>=8;i--)
        digitalWrite(i,0);
      counter=0;
    }
    delay (250);
  }
  
}
