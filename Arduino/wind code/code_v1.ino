// Dommert
// Wind Sensor
// Version 0.1.0 
// March 2014

const int analogInPin = A0; // Analog input pin that the potentiometer is attached
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0; // value read from the pot
int outputValue = 0; // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  
  int result_outputValue_1 = outputValue * 2.8;
  int result_outputValue_2 = outputValue * 3.0;
  int result_outputValue_3 = outputValue * 3.2;
  int result_outputValue_4 = outputValue * 3.4;
  int result_outputValue_5 = outputValue * 3.6;
  
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  
  // print the results to the serial monitor:
//  Serial.print("Sensor = ");
  Serial.print(sensorValue);
//  Serial.print("\t Output = ");
  Serial.print("\t");
Serial.println(outputValue);

  
  // wait 10 milliseconds before the next loop
  // for the analog-to-analog converter to settle
  // after the last reading:
  // delay(250);
  
}
