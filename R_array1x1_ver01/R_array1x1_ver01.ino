int sensorValue;
int timeinterver=100;   // ms
float Vout;
char userInput;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()> 0){
    userInput = Serial.read();
    if(userInput == 'g'){
      //sensorValue = analogRead(A0);
      //Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(analogRead(A0));
      Serial.print(" ");
      Serial.println(" ");
    }
  }
}
