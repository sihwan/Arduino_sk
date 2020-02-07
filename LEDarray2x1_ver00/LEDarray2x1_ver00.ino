
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(8, OUTPUT); // Run_PWR
  pinMode(9, OUTPUT); // Row0
  pinMode(10, OUTPUT); // Row1
  pinMode(11, OUTPUT); // Col0
  digitalWrite(8, HIGH); // Run_PWR
  digitalWrite(9, LOW); // Row0
  digitalWrite(10, LOW); // Row1
  digitalWrite(11, LOW); // Col0
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(11, HIGH); // Col0
  digitalWrite(9, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(9, LOW); // Row0
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(10, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(10, LOW); // Row1
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(8, LOW); // Run_PWR
  Serial.print("10");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(8, HIGH); // Run_PWR

  digitalWrite(11, LOW); // Col0
  digitalWrite(9, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(9, LOW); // Row0
  delay(1);          // unit: ms
  digitalWrite(11, HIGH); // Col0
  digitalWrite(10, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(10, LOW); // Row1
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(8, LOW); // Run_PWR
  Serial.print("01");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(8, HIGH); // Run_PWR

  digitalWrite(11, HIGH); // Col0
  digitalWrite(9, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(9, LOW); // Row0
  delay(1);          // unit: ms
  digitalWrite(11, HIGH); // Col0
  digitalWrite(10, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(10, LOW); // Row1
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(8, LOW); // Run_PWR
  Serial.print("11");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(8, HIGH); // Run_PWR

  digitalWrite(11, LOW); // Col0
  digitalWrite(9, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(9, LOW); // Row0
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(10, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(10, LOW); // Row1
  delay(1);          // unit: ms
  digitalWrite(11, LOW); // Col0
  digitalWrite(8, LOW); // Run_PWR
  Serial.print("00");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(8, HIGH); // Run_PWR
}
