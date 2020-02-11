#include <Wire.h>
#include <Adafruit_MCP4725.h>
 
#define MCP4725In A0
 
Adafruit_MCP4725 MCP4725;
 
void setup(void)
{
  Serial.begin(9600);
  MCP4725.begin(0x63); // The I2C Address (GND:0x62, VDD: 0x63)
}
 
void loop(void)
{
    uint32_t MCP4725_value;
    int adcInput = 0;
    float voltageIn = 0;
    float MCP4725_reading;
 
    for (MCP4725_value = 0; MCP4725_value < 4096; MCP4725_value = MCP4725_value + 128)
    {
      MCP4725_reading = (5.0/4096.0) * MCP4725_value; //5.0 is your supply voltage
      MCP4725.setVoltage(MCP4725_value, false);
      delay(250);
      adcInput = analogRead(MCP4725In); //module output connect to A0
      voltageIn = (adcInput * 5.0 )/ 1024.0;

      int sensorValue = analogRead(A1);
      float out_analog = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):

      Serial.print("\tExpected Voltage: ");
      Serial.print(MCP4725_reading,3);
 
      Serial.print("\tArduino Voltage: ");
//      Serial.println(voltageIn,3);
      Serial.println(voltageIn,3);
    }
}
