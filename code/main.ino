// Traffic Light Routine Prototype
// Original code by Alison T. Richardson (portfolio prototype)
// Simple finite state machine controlling three LEDs and a button.

const int LED_RED    = 3;
const int LED_YELLOW = 4;
const int LED_GREEN  = 5;

const int BUTTON_PIN = 2;

// Debounce settings
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50; // ms
int lastButtonReading = HIGH;

// Traffic light states
enum State {
  STATE_RED,
  STATE_YELLOW,
  STATE_GREEN
};

State currentState = STATE_RED;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  applyState();
}

// Helper to set LEDs for the current state
void applyState() {
  switch (currentState) {
    case STATE_RED:
      digitalWrite(LED_RED, HIGH);
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_GREEN, LOW);
      break;
    case STATE_YELLOW:
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_YELLOW, HIGH);
      digitalWrite(LED_GREEN, LOW);
      break;
    case STATE_GREEN:
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_YELLOW, LOW);
      digitalWrite(LED_GREEN, HIGH);
      break;
  }
}

// Advance state in the order: RED -> YELLOW -> GREEN -> RED
void advanceState() {
  switch (currentState) {
    case STATE_RED:
      currentState = STATE_YELLOW;
      break;
    case STATE_YELLOW:
      currentState = STATE_GREEN;
      break;
    case STATE_GREEN:
      currentState = STATE_RED;
      break;
  }
  applyState();
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  // Simple debounce
  if (reading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // Button is considered stable
    if (reading == LOW && lastButtonReading == HIGH) {
      // Button was just pressed
      advanceState();
    }
  }

  lastButtonReading = reading;
}
