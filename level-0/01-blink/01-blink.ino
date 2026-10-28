void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // il pin del LED diventa un'uscita
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // accendi il LED
  delay(200);                       // acceso per 0,2 secondi
  digitalWrite(LED_BUILTIN, LOW);   // spegni il LED
  delay(800);                       // spento per 0,8 secondi
}