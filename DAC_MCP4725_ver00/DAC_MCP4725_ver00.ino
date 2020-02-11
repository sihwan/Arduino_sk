#include <Wire.h>
#include <Adafruit_MCP4725.h>
 
#define MCP4725In A0
 
Adafruit_MCP4725 MCP4725;
 
void setup(void)
{
  Serial.begin(9600);
  MCP4725.begin(0x63); // The I2C Address (GND:0x62, VDD: 0x63)
  pinMode(2, OUTPUT); // MCP 0
  pinMode(3, OUTPUT); // MCP 1
  pinMode(4, OUTPUT); // MCP 2
  pinMode(5, OUTPUT); // MCP 3
  digitalWrite(2, LOW); // MCP 0
  digitalWrite(3, LOW); // MCP 1
  digitalWrite(4, LOW); // MCP 2
  digitalWrite(5, LOW); // MCP 3
}
 
void loop(void)
{
    int adcInput;
    float Vin_0;
    float Vin_1;
    float Vin_2;
    float Vin_3;
 
    digitalWrite(2, HIGH); // MCP 0
    MCP4725.setVoltage(1024, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(2, LOW); // MCP 0
    digitalWrite(3, HIGH); // MCP 1
    MCP4725.setVoltage(2048, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(3, LOW); // MCP 1
    digitalWrite(4, HIGH); // MCP 2
    MCP4725.setVoltage(3072, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(4, LOW); // MCP 2
    digitalWrite(5, HIGH); // MCP 3
    MCP4725.setVoltage(4094, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(5, LOW); // MCP 3

    delay(1);

    adcInput = analogRead(A0);
    Vin_0 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A1);
    Vin_1 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A2);
    Vin_2 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A3);
    Vin_3 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):

    Serial.print(Vin_0);Serial.print(", ");Serial.print(Vin_1);Serial.print(", ");Serial.print(Vin_2);Serial.print(", ");Serial.print(Vin_3);Serial.println();

    digitalWrite(2, HIGH); // MCP 0
    MCP4725.setVoltage(4094, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(2, LOW); // MCP 0
    digitalWrite(3, HIGH); // MCP 1
    MCP4725.setVoltage(3072, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(3, LOW); // MCP 1
    digitalWrite(4, HIGH); // MCP 2
    MCP4725.setVoltage(2048, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(4, LOW); // MCP 2
    digitalWrite(5, HIGH); // MCP 3
    MCP4725.setVoltage(1024, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
    digitalWrite(5, LOW); // MCP 3

    delay(1);

    adcInput = analogRead(A0);
    Vin_0 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A1);
    Vin_1 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A2);
    Vin_2 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    adcInput = analogRead(A3);
    Vin_3 = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):

    Serial.print(Vin_0);Serial.print(", ");Serial.print(Vin_1);Serial.print(", ");Serial.print(Vin_2);Serial.print(", ");Serial.print(Vin_3);Serial.println();

    delay(500);
}
