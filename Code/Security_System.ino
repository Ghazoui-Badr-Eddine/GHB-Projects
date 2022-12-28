#define SENSOR 3   // pin 2 for  sensor
#define BUZZER 8   // pin 8 for buzzer to do start
#define BUTTON 12  // pin 12 for button to stop the buzzer

void setup() {  
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);        //define SENSOR input pin
  pinMode(BUZZER, OUTPUT);       //define BUZZER output pin
  pinMode(BUTTON, INPUT_PULLUP); //define BUTTON input_pullup pin
}

void loop() {
  int detected = digitalRead(SENSOR); // read Laser sensor
  if( detected == HIGH)
  {
    digitalWrite(BUZZER,LOW);         // set the buzzer OFF
    Serial.println("laser");

  }else{

    digitalWrite(BUZZER,HIGH);        // set the buzzer ON
    Serial.println("Intruder detected!");
    if(!digitalRead(BUTTON)){
      digitalWrite(BUZZER,LOW);       // set the buzzer OFF
      Serial.println("laser");
      }
  }
  delay(200);
}
