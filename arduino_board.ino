int val=0;
void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
 
  pinMode(9,INPUT);

}

void loop() {
  val=digitalRead(9);
  Serial.println(val);
  if(val==1)
  {
    digitalWrite(10,HIGH);
  }
  if(val==0)
  {
    digitalWrite(10,LOW);
  }
  
  // put your main code here, to run repeatedly:

}
