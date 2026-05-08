int buzzer = 23;

void setup() {
  ledcAttachPin(buzzer, 0);
  ledcSetup(0, 2000, 8); // channel 0, 2kHz
}

void loop() {
  ledcWriteTone(0, 1000); // beep
  delay(500);
  ledcWriteTone(0, 0); // stop
  delay(500);
}
