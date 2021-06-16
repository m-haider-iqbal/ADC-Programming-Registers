You have not initialized the ADC by calling the function ACD_init() from the Setup().

Auto-triggering Mode should be OFF.; ADSC (ADC Start Control) should be OFF initially.

Data type of sensorValue variable should be unsigned int (uint16_t) & Float.

Sampling time is too fast – 1 ms. Does environmental variable change so fast?

The Sketch should have the following organizational hierarchy (though not strictly needed).

 1. Global Space
 2. Setup Function Space
 3. Loop Function Space
 4. User Function Space
