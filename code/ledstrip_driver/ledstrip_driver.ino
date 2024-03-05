
#define DEBUG_LED_PIN 15
#define LED_1_W_PIN 17
#define LED_1_C_PIN 16

void setup() {
  pinMode(LED_1_W_PIN, OUTPUT);
  digitalWrite(LED_1_W_PIN, LOW);
  pinMode(LED_1_C_PIN, OUTPUT);
  digitalWrite(LED_1_C_PIN, LOW);

  pinMode(DEBUG_LED_PIN, OUTPUT);
  digitalWrite(DEBUG_LED_PIN, LOW);
}

void loop() {
  digitalWrite(DEBUG_LED_PIN, HIGH);
  digitalWrite(LED_1_W_PIN, LOW);
  digitalWrite(LED_1_C_PIN, LOW);
  delay(500);
  digitalWrite(DEBUG_LED_PIN, LOW);
  digitalWrite(LED_1_W_PIN, HIGH);
  digitalWrite(LED_1_C_PIN, HIGH);
  delay(500);
}