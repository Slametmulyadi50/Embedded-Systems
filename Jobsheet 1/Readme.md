# JOBSHEET 1 - DASAR PEMROGRAMAN ESP32 UNTUK PEMROSESAN DATA INPUT/OUTPUT ANALOG DAN DIGITAL

## Abstrak
<p align="justify">ESP32 adalah mikrokontroler yang sangat fleksibel untuk proyek Internet of Things (IoT) dan kuat yang dikembangkan oleh Espressif Systems. ESP32 merupakan pengembangan dari mikrokontroler ESP8266 yang dimana ESP32 menyediakan konektivitas nirkabel yang lebih baik dari ESP8266. Perbedaan Utama antara kedua ESP tersebut pada Prosesor yaitu ESP32 sudah menggunakan prosesor Dual-Core Xtensa LX6, kemudian konektivitas yang ada pada ESP32 dikembangkan dimana tidak hanya mendukung Wifi namun sudahh terintegrasi dengan modul Bluetooth, memorinya pun lebih besar dari ESP8266, serta penambahan beberapa periperal yang lebh banyak seperti SPI dan UART serta keamanan yang mendukung protokol keamanan yang lebih kuat dari pada mikrokontroler sebelumnya, namun dengan banyaknya tambahan seperti itu konsumsi daya pada ESP32 dirancang dengan konsumsi yang lebih efisian dari sebelumnya.</p>


**Tujuan pada jobsheet ini**, antara lain:
1. Memahami dan Mengoperasika GPIO pada ESP32
2. Memahami dan Melakukan pengolahan data untuk Input/Output analog dan digital
3. Melakukan Optimalisasi Pembacaab sensor analog menggunkan metode regresi linier
   

## Alat dan Bahan
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) LED (5) dan Push Button (3)
6) Resistor 330,1K, 10K Ohm (@3)
7) Sensor Capacitive Soil Moisture
8) Multimeter
9) Three-Way Meter

### Konfigurasi Installasi Sebelum Praktikum
1. Buka Arduino IDE
2. Install ESP32 di dalam Arduino IDE
   - Masuk ke **Preferences**
   - Isikan board url pada kolom Additional dengan link Berikut
   - https://dl.espressif.com/dl/package_esp32_index.json dan simpan
   - Buka **Tools > Board > Board Manager**
   - cari ESP32, by Espresif System, kemudian install
   - Buka **Tools > Flash Mode > DIO/QIU** menyesuaikan
   
  
> [!NOTE]  
> *Buka folder-folder subjob untuk melihat laporan percobaan*
