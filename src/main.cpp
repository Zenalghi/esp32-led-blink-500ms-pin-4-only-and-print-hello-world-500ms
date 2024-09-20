#include <Arduino.h>

void setup() {
  // Initialize serial communication at 115200 baud rate
  Serial.begin(115200);
  
  // Set pin 4 as an output
  pinMode(4, OUTPUT);
}

void loop() {
  // Toggle the LED state
  digitalWrite(4, !digitalRead(4));
  
  // Print "Hello World" to the serial monitor
  Serial.println("Hello World");
  
  // Wait for 500 milliseconds
  delay(500);
}