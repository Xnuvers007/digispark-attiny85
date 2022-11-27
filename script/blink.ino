void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // nyala
  delay(1000);                       // tunggu 1 detik
  digitalWrite(LED_BUILTIN, LOW);    // mati
  delay(1000);                       // tunggu 1 detik
}
