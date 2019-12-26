
void dw(int x,int y) {
   digitalWrite(x,y); 
}

void setup() {
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
}

int cur = 0;

void loop() {
    int pin = cur + 2;

    for(int i = 2; i <= 5; i++) {
        dw(i, i == pin ? HIGH : LOW);
    }

    delay(600);
    cur = (cur + 1) % 4;
}
