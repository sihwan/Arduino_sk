
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
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

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(2, HIGH); // Col0
  delay(10);          // unit: ms
  int sensorValue = analogRead(A0);
  float out00 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A1);
  float out10 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A2);
  float out20 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(2, LOW); // Col0

  digitalWrite(3, HIGH); // Col1
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out01 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A1);
  float out11 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A2);
  float out21 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(3, LOW); // Col1
  
  digitalWrite(4, HIGH); // Col2
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out02 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A1);
  float out12 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A2);
  float out22 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(4, LOW); // Col2

  digitalWrite(5, HIGH); // Col3
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out03 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A1);
  float out13 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  sensorValue = analogRead(A2);
  float out23 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(5, LOW); // Col3

  Serial.print("---------------------"); Serial.println();
  Serial.print(out00); Serial.print(", "); Serial.print(out01); Serial.print(", "); Serial.print(out02); Serial.print(", "); Serial.print(out03); Serial.println();
  Serial.print(out10); Serial.print(", "); Serial.print(out11); Serial.print(", "); Serial.print(out12); Serial.print(", "); Serial.print(out13); Serial.println();
  Serial.print(out20); Serial.print(", "); Serial.print(out21); Serial.print(", "); Serial.print(out22); Serial.print(", "); Serial.print(out23); Serial.println();
  
  delay(500);                // unit: ms
}
