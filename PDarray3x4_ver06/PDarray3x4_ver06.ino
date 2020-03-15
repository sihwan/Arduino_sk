int sensorValue;
float Vout;
char userInput;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Col0
  pinMode(3, OUTPUT); // Col1
  pinMode(4, OUTPUT); // Col2
  pinMode(5, OUTPUT); // Col3
  digitalWrite(2, LOW); // Col0
  digitalWrite(3, LOW); // Col1
  digitalWrite(4, LOW); // Col2
  digitalWrite(5, LOW); // Col3
}

void loop() {
  if(Serial.available()> 0){
    userInput = Serial.read();
    if(userInput == 'g'){
      digitalWrite(2, HIGH); // Col0
      delay(50);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(2, LOW); // Col0
      
      digitalWrite(3, HIGH); // Col1
      delay(50);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(3, LOW); // Col1
    
      digitalWrite(4, HIGH); // Col2
      delay(50);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(4, LOW); // Col2
    
      digitalWrite(5, HIGH); // Col3
      delay(50);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(5, LOW); // Col3
      
      Serial.println(" ");
    }
  }
}
