#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include <DHT.h>

#define DHTPIN D4           // Pin data DHT11 terhubung ke D4 (GPIO2)
#define DHTTYPE DHT11       // Jenis sensor DHT11
DHT dht(DHTPIN, DHTTYPE); // Inisialisasi sensor DHT11

LiquidCrystal_PCF8574 lcd(0x27); // Ganti dengan alamat I2C LCD Anda

void setup() {
  lcd.begin(16, 2);      // Inisialisasi LCD 16x2
  lcd.setBacklight(1);   // Aktifkan lampu latar LCD
  lcd.setCursor(0, 0);   // Posisikan kursor di baris pertama
  lcd.print("Suhu & Kelembaban");
  
  dht.begin();           // Inisialisasi sensor DHT11
}

void loop() {
  // Membaca suhu dan kelembaban
  float suhu = dht.readTemperature();
  float kelembaban = dht.readHumidity();
  
  // Jika data gagal dibaca
  if (isnan(suhu) || isnan(kelembaban)) {
    lcd.clear();             // Bersihkan layar LCD
    lcd.setCursor(0, 0);     // Posisikan kursor di baris pertama
    lcd.print("Error reading data");
  } else {
    lcd.clear();             // Bersihkan layar LCD
    lcd.setCursor(0, 0);     // Posisikan kursor di baris pertama
    lcd.print("Suhu: ");
    lcd.print(suhu);         // Menampilkan suhu
    lcd.print(" C");
    
    lcd.setCursor(0, 0);     // Posisikan kursor di baris kedua
    lcd.print("Kelembaban: ");
    lcd.print(kelembaban);   // Menampilkan kelembaban
    lcd.print(" %");
  }
  delay(2000); // Update data setiap 2 detik
}
