
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Reset
  pinMode(3, OUTPUT); // Row0
  pinMode(4, OUTPUT); // Row1
  pinMode(5, OUTPUT); // Col0
  pinMode(6, OUTPUT); // Col1
  digitalWrite(2, HIGH); // Reset
  digitalWrite(3, LOW); // Row0
  digitalWrite(4, LOW); // Row1
  digitalWrite(5, LOW); // Col0
  digitalWrite(6, LOW); // Col1
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(3, HIGH); // Row0

  digitalWrite(5, HIGH); // Col0
  digitalWrite(2, LOW); // Reset
  delay(10);          // unit: ms
  int sensorValue = analogRead(A0);
  float out00 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(2, HIGH); // Reset
  digitalWrite(5, LOW); // Col0

  digitalWrite(6, HIGH); // Col1
  digitalWrite(2, LOW); // Reset
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out01 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(2, HIGH); // Reset
  digitalWrite(6, LOW); // Col1

  digitalWrite(3, LOW); // Row0
  digitalWrite(4, HIGH); // Row1

  digitalWrite(5, HIGH); // Col0
  digitalWrite(2, LOW); // Reset
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out10 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(2, HIGH); // Reset
  digitalWrite(5, LOW); // Col0

  digitalWrite(6, HIGH); // Col1
  digitalWrite(2, LOW); // Reset
  delay(10);          // unit: ms
  sensorValue = analogRead(A0);
  float out11 = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  digitalWrite(2, HIGH); // Reset
  digitalWrite(6, LOW); // Col1
  
  digitalWrite(4, LOW); // Row1

  Serial.print(out00);
  Serial.print(", ");
  Serial.print(out01);
  Serial.print(", ");
  Serial.print(out10);
  Serial.print(", ");
  Serial.print(out11);
  Serial.println();
  // Serial.println(out00); // print out the value you read:
  //delay(1000);                // unit: ms
}
