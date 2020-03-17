int sensorValue;
int timeinterver=100;   // ms
float Vout;
char userInput;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Col0
  pinMode(3, OUTPUT); // Col1
  pinMode(4, OUTPUT); // Col2
  pinMode(5, OUTPUT); // Col3
  pinMode(6, OUTPUT); // Row0
  pinMode(7, OUTPUT); // Row1
  pinMode(8, OUTPUT); // Row2
  digitalWrite(2, LOW); // Col0
  digitalWrite(3, LOW); // Col1
  digitalWrite(4, LOW); // Col2
  digitalWrite(5, LOW); // Col3
  digitalWrite(6, LOW); // Row0
  digitalWrite(7, LOW); // Row1
  digitalWrite(8, LOW); // Row2
}

void loop() {
  if(Serial.available()> 0){
    userInput = Serial.read();
    if(userInput == 'g'){
      digitalWrite(2, HIGH); // Col0
      digitalWrite(6, HIGH); // Row0
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" ");
      digitalWrite(6, LOW); // Row0
      digitalWrite(7, HIGH); // Row1
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(7, LOW); // Row1
      digitalWrite(8, HIGH); // Row2
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(8, LOW); // Row2
      digitalWrite(2, LOW); // Col0
      
      digitalWrite(3, HIGH); // Col1
      digitalWrite(6, HIGH); // Row0
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" ");
      digitalWrite(6, LOW); // Row0
      digitalWrite(7, HIGH); // Row1
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(7, LOW); // Row1
      digitalWrite(8, HIGH); // Row2
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(8, LOW); // Row2
      digitalWrite(3, LOW); // Col1
    
      digitalWrite(4, HIGH); // Col2
      digitalWrite(6, HIGH); // Row0
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" ");
      digitalWrite(6, LOW); // Row0
      digitalWrite(7, HIGH); // Row1
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(7, LOW); // Row1
      digitalWrite(8, HIGH); // Row2
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(8, LOW); // Row2
      digitalWrite(4, LOW); // Col2
    
      digitalWrite(5, HIGH); // Col3
      digitalWrite(6, HIGH); // Row0
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A0);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" ");
      digitalWrite(6, LOW); // Row0
      digitalWrite(7, HIGH); // Row1
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A1);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(7, LOW); // Row1
      digitalWrite(8, HIGH); // Row2
      delay(timeinterver);          // unit: ms
      sensorValue = analogRead(A2);
      Vout = sensorValue * (5.0 / 1023.0);
      Serial.print(Vout); Serial.print(" "); 
      digitalWrite(8, LOW); // Row2
      digitalWrite(5, LOW); // Col3
      
      Serial.println(" ");
    }
  }
}
