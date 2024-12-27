Proyek ini menggunakan sensor DHT11 untuk membaca suhu dan kelembapan lingkungan, dan menampilkan data tersebut pada layar LCD 16x2 menggunakan protokol I2C. Program ini berjalan pada mikrokontroler seperti ESP8266 atau Arduino untuk menghubungkan sensor dan LCD, serta menampilkan informasi suhu dan kelembaban secara real-time.

Fitur Utama
Membaca suhu dari sensor DHT11.
Membaca kelembaban dari sensor DHT11.
Menampilkan suhu dan kelembaban pada LCD 16x2 dengan antarmuka I2C.
Menampilkan pesan kesalahan jika sensor gagal membaca data.
Komponen yang Digunakan
Sensor DHT11: Sensor suhu dan kelembaban.
Mikrokontroler (ESP8266/Arduino): Mikrokontroler yang digunakan untuk membaca data dari sensor dan menghubungkan ke LCD.
LCD 16x2 dengan I2C: Layar LCD yang menampilkan hasil pembacaan suhu dan kelembaban.
Library:
Wire.h: Untuk komunikasi I2C.
LiquidCrystal_PCF8574.h: Untuk kontrol LCD menggunakan modul I2C.
DHT.h: Untuk mengontrol sensor DHT11.
Cara Menjalankan
Prasyarat
Pastikan Anda memiliki perangkat Arduino atau ESP8266/ESP32 dan sudah terhubung dengan komputer.
Pastikan Anda memiliki sensor DHT11 dan LCD 16x2 dengan I2C.
Pastikan Arduino IDE sudah terpasang dan terkonfigurasi dengan benar.
Langkah-langkah Instalasi dan Pengaturan:
Pasang Sensor DHT11 dan LCD 16x2:

Hubungkan pin VCC dan GND dari sensor DHT11 ke 5V dan GND pada mikrokontroler.
Hubungkan pin DATA dari sensor DHT11 ke D4 (GPIO2) pada mikrokontroler.
Hubungkan LCD 16x2 dengan I2C ke SDA dan SCL pada mikrokontroler sesuai dengan pin yang digunakan (biasanya D1 untuk SDA dan D2 untuk SCL pada ESP8266).
Install Library yang Dibutuhkan:

Buka Arduino IDE.
Pergi ke Sketch > Include Library > Manage Libraries.
Cari dan install DHT sensor library oleh Adafruit.
Cari dan install LiquidCrystal_I2C library (PCF8574).
Program Mikrokontroler:

Buka file .ino pada Arduino IDE.
Pilih board dan port yang sesuai di Tools > Board dan Tools > Port.
Upload kode program ke mikrokontroler.
Menjalankan Program:

Setelah program di-upload, mikrokontroler akan mulai membaca data suhu dan kelembaban dari sensor DHT11 setiap 2 detik.
Data akan ditampilkan pada LCD 16x2.
