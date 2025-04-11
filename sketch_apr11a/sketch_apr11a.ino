#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu = 26;
int lampu2 = 25;

// Konstanta untuk kecepatan sirine
const int SIREN_SPEED = 100; // Waktu delay dalam milidetik (semakin kecil semakin cepat)

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 LED Sirine");

    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
}

void loop() {
    // Pattern sirine - lampu bergantian
    
    // Lampu 1 nyala, lampu 2 mati
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    Serial.println("Lampu 1 ON, Lampu 2 OFF");
    delay(SIREN_SPEED);
    
    // Lampu 1 mati, lampu 2 nyala
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    Serial.println("Lampu 1 OFF, Lampu 2 ON");
    delay(SIREN_SPEED);
}