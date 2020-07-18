int sensorValue;
int timeinterver=100;   // ms
float Vout;
char userInput;

void setup() {
  Serial.begin(9600);
}

void loop() {
      Serial.println(analogRead(A0));
      delay(10);
}
