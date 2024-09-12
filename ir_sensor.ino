const int irpin = 7;
const int relaypin = 8;


void setup() {

  Serial.begin(9600);
  pinMode(irpin,INPUT);
  pinMode(relaypin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int motiondetected = digitalRead(irpin);
  if(motiondetected==HIGH){ 
    digitalWrite(relaypin,HIGH );
  }
  else{
    digitalWrite(relaypin,LOW );
  }
    }
  // put your main code here, to run repeatedly:


