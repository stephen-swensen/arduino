
//const int DELAY
const int PINS_SIZE = 4;
int pins[PINS_SIZE] = { 2, 3, 4, 5 };

void setup() {
    for(int i = 0; i < PINS_SIZE; i++) {
        pinMode(pins[i], OUTPUT);
    }
}

int cur = 0;

void loop() {
    for(int i = 0; i < PINS_SIZE; i++) {
        digitalWrite(pins[i], i == cur ? HIGH : LOW);
    }

    delay(100);
    cur = (cur + 1) % 4;
}
