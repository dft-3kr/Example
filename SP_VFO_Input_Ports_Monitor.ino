/*
  SP_VFO Input Ports Monitor
  Based on 'AnalogReadSerial'
  http://www.arduino.cc/en/Tutorial/AnalogReadSerial

  D Taylor 5-Jan-2020

  Reads analog and digital input pins, prints the results to the Serial Monitor.
  
  Used for setting up and testing the SP_VFO script by VK3HN.

  A quick and dirty script for testing only. No attempt has been made to optimise code.

*/

// the setup routine runs once:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop runs forever:
void loop() {
  
  int sensorValueA0 = analogRead(A0);
  // print out the value you read:
  Serial.print("A0 FrtButs "); Serial.print(sensorValueA0);// analog pin 0, front panel buttons

  int sensorValueA1 = analogRead(A1);
  // print out the value you read:
  Serial.print("| A1 KeyPdl "); Serial.print(sensorValueA1);// analog pin 1, keyer paddle contacts

  int sensorValueA2 = analogRead(A2);
  // print out the value you read:
  Serial.print("| A2 CW_Msg "); Serial.print(sensorValueA2);// analog pin 2, top CW message buttons

  int sensorValueA3 = analogRead(A3);
  // print out the value you read:
  Serial.print("| A3 CW_Spd "); Serial.print(sensorValueA3);// analog pin 3, CW keyer speed pot

  int sensorValueA6 = analogRead(A6);
  // print out the value you read:
  Serial.print("| A6 RF_Lev "); Serial.print(sensorValueA6);// analog pin 6, relative RF level Tx

  int sensorValueA7 = analogRead(A7);
  // print out the value you read:
  Serial.print("| A7 SWR_Rv "); Serial.print(sensorValueA7);// analog pin 7, SWR Reverse

  int sensorValueD2 = digitalRead(2);
  int sensorValueD3 = digitalRead(3);
  // print out the value you read:
  Serial.print("| D2-3 Enc ");
  Serial.print(sensorValueD2);// digital pin 2-3, AB Encoder input
  Serial.print(sensorValueD3);// digital pin 2-3, AB Encoder input

  int sensorValueD4 = digitalRead(4);// print out the value you read:
  Serial.print("| D4 PTT "); Serial.println(sensorValueD4);// digital pin 4, PTT input
  
  delay(50);        // delay in between reads for stability
}
