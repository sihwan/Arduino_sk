
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Run_PWR
  pinMode(3, OUTPUT); // Row0
  pinMode(4, OUTPUT); // Row1
  pinMode(5, OUTPUT); // Row2
  pinMode(6, OUTPUT); // Col0
  pinMode(7, OUTPUT); // Col1
  pinMode(8, OUTPUT); // Col2
  
  digitalWrite(2, HIGH); // Run_PWR
  digitalWrite(3, LOW); // Row0
  digitalWrite(4, LOW); // Row1
  digitalWrite(5, LOW); // Row2
  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
}

// the loop routine runs over and over again forever:
void loop() {
  // 000 000 000
  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(3, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(3, LOW); // Row0
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(4, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(4, LOW); // Row1
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(5, HIGH); // Row2
  delay(1);          // unit: ms
  digitalWrite(5, LOW); // Row2
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(2, LOW); // Run_PWR
  Serial.print("100 010 001");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(2, HIGH); // Run_PWR

  // 111 001 001
  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, HIGH); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(3, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(3, LOW); // Row0
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(4, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(4, LOW); // Row1
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(5, HIGH); // Row2
  delay(1);          // unit: ms
  digitalWrite(5, LOW); // Row2
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(2, LOW); // Run_PWR
  Serial.print("111 111 111");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(2, HIGH); // Run_PWR

  // 100 100 111
  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(3, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(3, LOW); // Row0
  delay(1);          // unit: ms

  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(4, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(4, LOW); // Row1
  delay(1);          // unit: ms

  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, HIGH); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(5, HIGH); // Row2
  delay(1);          // unit: ms
  digitalWrite(5, LOW); // Row2
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(2, LOW); // Run_PWR
  Serial.print("111 111 111");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(2, HIGH); // Run_PWR  

  // 111 100 111
  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, HIGH); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(3, HIGH); // Row0
  delay(1);          // unit: ms
  digitalWrite(3, LOW); // Row0
  delay(1);          // unit: ms

  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(4, HIGH); // Row1
  delay(1);          // unit: ms
  digitalWrite(4, LOW); // Row1
  delay(1);          // unit: ms

  digitalWrite(6, HIGH); // Col0
  digitalWrite(7, HIGH); // Col1
  digitalWrite(8, HIGH); // Col2
  digitalWrite(5, HIGH); // Row2
  delay(1);          // unit: ms
  digitalWrite(5, LOW); // Row2
  delay(1);          // unit: ms

  digitalWrite(6, LOW); // Col0
  digitalWrite(7, LOW); // Col1
  digitalWrite(8, LOW); // Col2
  digitalWrite(2, LOW); // Run_PWR
  Serial.print("111 111 111");
  Serial.println();
  delay(1000);          // unit: ms
  digitalWrite(2, HIGH); // Run_PWR  
}
