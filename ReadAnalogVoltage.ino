/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

float last[8];
int sensorValue;
float voltage;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(A0);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[0] - voltage) > 0.3){
    Serial.println("c");
  }
  last[0] = voltage;
  
  sensorValue = analogRead(A1);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[1] - voltage) > 0.3){
    Serial.println("d");
  }
  last[1] = voltage;

  sensorValue = analogRead(A2);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[2] - voltage) > 0.3){
    Serial.println("e");
  }
  last[2] = voltage;

  sensorValue = analogRead(A3);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[3] - voltage) > 0.3){
    Serial.println("f");
  }
  last[3] = voltage;

  sensorValue = analogRead(A4);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[4] - voltage) > 0.3){
    Serial.println("g");
  }
  last[4] = voltage;

  sensorValue = analogRead(A5);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[5] - voltage) > 0.3){
    Serial.println("a");
  }
  last[5] = voltage;

  sensorValue = analogRead(A6);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[6] - voltage) > 0.3){
    Serial.println("b");
  }
  last[6] = voltage;

  sensorValue = analogRead(A7);
  voltage = sensorValue * (5.0 / 1023.0);
  if((last[7] - voltage) > 0.3){
    Serial.println("x");
  }
  last[7] = voltage;
  
  delay(80);
}
