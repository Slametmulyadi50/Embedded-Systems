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

## A. GPIO (General Purpose Input-Output)

### GPIO | Percobaan 1 LED Blink

#### a. Rangkaian 

#### b. Source Kode 
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/949f05fa067465d8b75d7fa57da31ae802427fe0/Jobsheet%201/A.%20GPIO/GPIO_LED_Blink.ino">disini</a>

#### c. Hasil


### GPIO | Percobaan 2 Dengan Push Button

#### a. Rangkaian 

#### b. Source Kode 
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_dengan_Push_Button.ino">disini</a>


#### c. Hasil

### GPIO | Percobaan 2 Dengan Penambahan 1 Push Button dan 1 LED

#### a. Rangkaian 

#### b. Source Kode 
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_1_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil

### GPIO | Percobaan 3 Dengan Penambahan 1 Push Button dan 3 LED

#### a. Rangkaian 

#### b. Source Kode 
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_3_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil

## B. PWM

### PWM | Mengatur Kecerahan LED

#### a. Rangkaian 

#### b. Source Kode
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="">disini</a>

#### c. Hasil

### PWM | Mengatur Kecerahan 3 LED

#### a. Rangkaian 

#### b. Source Kode
Berikut adalah Kode Program yang digunakan 


Kode Program dapat dilihat dan dicoba <a href="">disini</a>

#### c. Hasil


## C. ADC Dan DAC
## D. Simulasi Pemrosesan Data Menggunakan Regresi Linier


  
> [!NOTE]  
> *Buka folder-folder subjob untuk melihat laporan percobaan*
