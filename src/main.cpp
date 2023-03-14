#include <Arduino.h>

// Deklarasi pin untuk setiap LED
int redLed = D0; // LED merah pada pin D2
int blueLed = D4; // LED biru pada pin D1
int greenLedRed = D5; // LED RGB hijau (merah) pada pin D5
int greenLedGreen = D6; // LED RGB hijau (hijau) pada pin D6
int greenLedBlue = D7; // LED RGB hijau (biru) pada pin D7

void setup() {
  pinMode(redLed, OUTPUT); // Set pin LED merah sebagai OUTPUT
  pinMode(blueLed, OUTPUT); // Set pin LED biru sebagai OUTPUT
  pinMode(greenLedRed, OUTPUT); // Set pin LED RGB hijau (merah) sebagai OUTPUT
  pinMode(greenLedGreen, OUTPUT); // Set pin LED RGB hijau (hijau) sebagai OUTPUT
  pinMode(greenLedBlue, OUTPUT); // Set pin LED RGB hijau (biru) sebagai OUTPUT
}

void loop() {
  // Menyalakan LED hijau dengan warna hijau (RGB)
  analogWrite(greenLedRed, 0);
  analogWrite(greenLedGreen, 255);
  analogWrite(greenLedBlue, 0);
  
  // Menunggu selama 500 milidetik
  delay(5000);

  // Mematikan LED hijau
  analogWrite(greenLedRed, 0);
  analogWrite(greenLedGreen, 0);
  analogWrite(greenLedBlue, 0);
  
  // Menyalakan LED merah
  digitalWrite(redLed, HIGH);
  
  // Menunggu selama 500 milidetik
  delay(500);

  // Mematikan LED merah
  digitalWrite(redLed, LOW);
  
  // Menyalakan LED biru
  digitalWrite(blueLed, HIGH);
  
  // Menunggu selama 500 milidetik
  delay(500);

  // Mematikan LED biru
  digitalWrite(blueLed, LOW);
}
