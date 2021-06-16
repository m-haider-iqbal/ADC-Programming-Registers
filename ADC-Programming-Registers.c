#include <Arduino.h>

void ADC_initialize();
uint16_t ADC_read(uint8_t haider);

void ADC_initialize()
{
  ADMUX = (1 << REFS0); //Multiplexer Selection Register_Reference Selection Bits
  ADCSRA |= (1 << ADEN) | (0 << ADSC) | (0 << ADATE); // ADC Enable_7 , ADC Start Conversion , ADC Auto Trigger Enable
  ADCSRB = 0x00; //ADC Control and Status Register B
}

uint16_t ADC_read(uint8_t haider)
{  
  ADCSRA |= (1 << ADSC); // Control and Status Register A _ ADC Start Conversion 6
  ADC = (ADCL | (ADCH << 8)); // ADC Data Register 
  return (ADC); // ADC Value Output 
}

void setup()
{
  Serial.begin(9600); // UART INIT
  ADC_initialize(); // Calling 
}

void loop()
{
  uint16_t pot_read = ADC_read(A0); // Redaing 
  Serial.println(pot_read); // Writing 
  delay(1000); // delay 1s
}

// M Haider Iqbal
