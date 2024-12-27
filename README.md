#Monitoring Suhu dan Kelembaban dengan DHT11 dan LCD
Deskripsi Proyek

Proyek ini adalah implementasi sederhana untuk memonitor suhu dan kelembaban menggunakan sensor DHT11 yang ditampilkan pada LCD 16x2 dengan modul I2C. Program ini membaca data suhu dan kelembaban dari sensor, kemudian menampilkannya pada layar LCD secara real-time.

Peralatan yang Dibutuhkan

Microcontroller: ESP8266 (NodeMCU) atau yang kompatibel

Sensor DHT11: Untuk membaca suhu dan kelembaban

LCD 16x2 dengan modul I2C: Untuk menampilkan data

Kabel jumper dan breadboard

Software Arduino IDE

Fitur Utama

Membaca Data Suhu dan Kelembaban

Suhu dalam derajat Celsius (C).

Kelembaban dalam persentase (%).

Menampilkan Data pada LCD

Baris pertama: Informasi suhu.

Baris kedua: Informasi kelembaban.

Validasi Pembacaan Data

Jika pembacaan data dari sensor gagal, pesan error akan ditampilkan pada LCD.

Cara Kerja

Inisialisasi

Sensor DHT11 dan LCD 16x2 diinisialisasi di fungsi setup().

LCD akan menampilkan pesan "Suhu & Kelembaban" saat program dimulai.

Looping Pembacaan Data

Sensor DHT11 membaca suhu dan kelembaban.

Jika pembacaan berhasil, data ditampilkan di LCD.

Jika pembacaan gagal, pesan error ditampilkan di LCD.

Delay

Pembacaan data diperbarui setiap 2 detik.

Cara Menggunakan

Koneksi Hardware:

Hubungkan sensor DHT11 ke pin D4 (GPIO2) pada microcontroller.

Sambungkan LCD dengan modul I2C ke jalur I2C microcontroller (SDA dan SCL).

Pastikan koneksi daya dan ground terhubung dengan benar.

Upload Program:

Instal library berikut di Arduino IDE:

DHT Sensor Library

LiquidCrystal_PCF8574

Upload kode program ke microcontroller.

Monitor Data:

Nyalakan microcontroller.

Periksa data suhu dan kelembaban yang ditampilkan pada LCD.

Rumus yang Digunakan

Suhu (C): Dibaca langsung dari sensor DHT11.

Kelembaban (%): Dibaca langsung dari sensor DHT11.

Troubleshooting

LCD Tidak Menyala:

Periksa koneksi daya dan ground.

Pastikan alamat I2C sesuai dengan perangkat (default: 0x27).

Data Tidak Ditampilkan:

Periksa koneksi sensor DHT11.

Pastikan pin data sensor terhubung ke pin yang benar pada microcontroller.

Pesan "Error reading data":

Pastikan sensor DHT11 berfungsi dengan baik.

Cek suhu dan kelembaban lingkungan, pastikan berada dalam rentang yang didukung sensor.

Saran Pengembangan

Tambahkan pembacaan suhu dalam Fahrenheit.

Simpan data suhu dan kelembaban ke kartu SD atau kirim ke server melalui Wi-Fi.

Tambahkan alarm jika suhu atau kelembaban melebihi batas tertentu.
