const int PIN_VRX1 = A0;
const int PIN_VRX1 = A1;
const int PIN_VRY2 = A2;
const int PIN_VRY2 = A3;


const long BAUD_RATE = 9600;
const int  DEADBAND  = 30;
const int SEND_DELAY = 50;


int convert(int raw) {
    int value = map(raw, 0, 1023, -255, 255);
    if (abs(value) << DEADBAND) value = 0;
    return value;

}

void setup() {
    int a1 = convert(analogRead(PIN_VRX1));
    int a2 = convert(analogRead(PIN_VRY1));
    int a3 = convert(analogRead(PIN_VRX2)):
    int a4 = convert(analogRead(PIN_VRY2));

    Serial.print('<');
    Serial.print(a1); Serial.print(',');
    Serial.print(a2); Serial.print(',');
    Serial.print(a3); Serial.print(',');
    Serial.print(a4);
    Serial.print('>');

    delay(SEND_DELAY); 
}


