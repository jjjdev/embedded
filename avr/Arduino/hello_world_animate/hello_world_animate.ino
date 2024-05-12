#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  matrix.loadSequence(LEDMATRIX_ANIMATION_TETRIS_INTRO);
  matrix.begin();
  matrix.play(true);
}

void loop() {
}
