# JOBSHEET 4
# TRANSMISI DATA MENGGUNAKAN PROTOKOL HTTP DAN MQTT
# ABSTRAK	:
<p align="justify">Implementasi protokol HTTP dan MQTT dalam transmisi data pada Platform IoT Node-Red. Fokusnya adalah memberikan pemahaman tentang cara kerja kedua protokol tersebut untuk akuisisi data dan kendali perangkat IoT. Mahasiswa diajak untuk merancang konfigurasi perangkat IoT dengan memanfaatkan HTTP dan MQTT, memungkinkan monitoring dan kendali efisien. Pembahasan mencakup dasar teori IoT, peran platform IoT, dan pertimbangan penting sebelum membangun platform. Laporan ini memberikan panduan praktis bagi mahasiswa dalam memahami transmisi data menggunakan protokol HTTP dan MQTT di konteks Node-Red.

**TUJUAN PADA JOBSHEET INI**, antara lain	:

1.	Memahami cara kerja protocol HTTP dan MQTT untuk tranmisi data (akuisisi dan kendali) pada Platfom IoT Node-Red.
2.	Merancang dan melakukan protocol HTTP dan MQTT untuk mmonitoring dan kendali melalui Platfom IoT Node-Red.
# ALAT DAN BAHAN	:
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1.	ESP32 
2.	Server Node-Red
3.	Breadboard
4.	Kable jumper
5.	Sensor DHT
6.	LED
7.	Resistor 330
8.	Resistor 1K

## A.	Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

## B.	Transmisi Data Menggunakan Protokol HTTP

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program dapat dilihat dan dicoba <a href="https://github.com/maratumaritha/Laporan-Embedded/blob/master/JOBSHEET%204/4b_POST/4b_POST.ino">disini</a> dan <a href="https://github.com/maratumaritha/Laporan-Embedded/blob/master/JOBSHEET%204/4b_GET/4b_GET.ino">disini</a>


### b.	Hasil 


![4B GET, Dashboard Node red](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/547b627c-8605-4f4e-b8bb-61ebe0937192)


![4B GET, Debug](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/6ef92e8c-415c-4780-9fb8-9f22942d2614)


![4B GET, Serial Monitor](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/102a8cdc-0cf4-4b31-a4ac-94b42a9a659f)


![4B POST, Dashboard Node red](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/83065089-2ea2-4dd6-922e-604a4897ddaf)


![4B POST, Debug](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/18441d7f-57d5-4a83-8227-ac3b031c6024)


![4B POST, Serial](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/a690f360-a9ad-4db8-a30c-59840d679943)


## C.	Transmisi Data Menggunakan Protokol MQTT

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program dapat dilihat dan dicoba <a href="https://github.com/maratumaritha/Laporan-Embedded/blob/master/JOBSHEET%204/4C/4C.ino">disini</a>

### b.	Hasil 


![4c , Serial](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/fcfc0554-51e3-44f9-adf7-21b518196b38)


![4c dashboard](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/545ef300-da1b-43a0-bff4-e243abcb9759)


![4C Debug](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/19ecc21e-d852-4d7f-bc40-701d2e331fff)


## D.	Akuisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program dapat dilihat dan dicoba <a href="https://github.com/maratumaritha/Laporan-Embedded/blob/master/JOBSHEET%204/4D_adafruit/4D_adafruit.ino">disini</a> dan <a href="https://github.com/maratumaritha/Laporan-Embedded/blob/master/JOBSHEET%204/4D_dahsbord_led/4D_dahsbord_led.ino">disini</a>

### b.	Hasil 


https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/ed076206-a039-439b-bd34-90b3f696f7e2


https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/e5257fc6-21b3-4850-ab06-053e4891dd9b
