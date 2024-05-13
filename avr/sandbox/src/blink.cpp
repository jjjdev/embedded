#include <Arduino.h>
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  matrix.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix.loadFrame(LEDMATRIX_EMOJI_HAPPY);
  delay(500);
  matrix.loadFrame(LEDMATRIX_EMOJI_BASIC);
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}