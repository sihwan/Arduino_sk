#include <Wire.h>
#include <Adafruit_MCP4725.h>
 
#define MCP4725In A0
 
Adafruit_MCP4725 MCP4725;
 
void setup(void)
{
  Serial.begin(9600);
  MCP4725.begin(0x63); // The I2C Address (GND:0x62, VDD: 0x63)
  pinMode(2, OUTPUT); // MCP 0 - Vbias
  pinMode(3, OUTPUT); // MCP 1 - Vin
  pinMode(4, OUTPUT); // Vctrl
  digitalWrite(2, LOW); // MCP 0 - Vbias
  digitalWrite(3, LOW); // MCP 1 - Vin
  digitalWrite(4, LOW); // Vctrl
}
 
void loop(void)
{
    int adcInput;
    int Vbias;
    int Vin;
    int Vbias_offset=1280;
    int Vin_offset=1024;
    float Vout;

    for (Vbias = Vbias_offset-256; Vbias < Vbias_offset+256; Vbias = Vbias + 32)
    {
      digitalWrite(2, HIGH); // MCP 0 - Vbias
      MCP4725.setVoltage(Vbias, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
      digitalWrite(2, LOW); // MCP 0
      digitalWrite(3, HIGH); // MCP 1 - Vin
      MCP4725.setVoltage(1024, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
      digitalWrite(3, LOW); // MCP 1
      
      digitalWrite(4, HIGH); // Vctrl
      delay(1);
      digitalWrite(4, LOW); // Vctrl
      
      for (Vin = Vin_offset-512; Vin < Vin_offset+512; Vin = Vin + 32)
      {
        digitalWrite(3, HIGH); // MCP 1 - Vin
        MCP4725.setVoltage(Vin, false); // MCP4725_reading = (5.0/4096.0) * MCP4725_value;
        digitalWrite(3, LOW); // MCP 1
        delay(1);
        adcInput = analogRead(A0);
        Vout = adcInput * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
        Serial.print(Vout);Serial.print(", ");
      }
      Serial.println();
    }
    Serial.println("-----------------------------------------------");
    delay(5000);
}
