#include <Arduino.h>
#define LDR_PIN A0
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(LDR_PIN, INPUT);
}

void loop() {
// write your code here
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent = map(ldrRaw, 0, 1023, 100, 0);
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light Intensity: ");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(1000); // Delay for 1 second before the next reading
}