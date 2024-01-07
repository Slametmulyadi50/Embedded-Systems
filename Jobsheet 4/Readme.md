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

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4a/4a.ino">disini</a>


### b.	Hasil 
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/efb92c17-322f-466a-9f2d-fabb1d9e9a73

## B.	Transmisi Data Menggunakan Protokol HTTP

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program Get dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4b_GET/4b_GET.ino">disini</a>
Kode program Post dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4b_POST/4b_POST.ino">disini</a>

### b.	Hasil 

#### Hasil Metode Get

##### Debug
![4B GET, Debug](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/4b50eb1c-187b-46dc-8d11-97a90813fc81)

##### Serial Monitor
![4B GET, Serial Monitor](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/38ed0cba-d4e1-484b-8b74-a13c0f286891)

##### Dahsboard Node-Red
![4B GET, Dashboard Node red](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/f009af95-a1c6-434f-b214-505df2d6986b)


#### Hasil Metode Post

##### Debug
![4B POST, Debug](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/07f7f601-d657-453b-8018-0dff030046c8)

##### Serial Monitor
![4B POST, Serial](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/080fc426-b6af-4c85-b8b2-60585f4bf9aa)

##### Dahsboard Node-Red
![4B POST, Dashboard Node red](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/2f44a4ff-9a83-4305-a5ec-0fae5c385ae3)

## C.	Transmisi Data Menggunakan Protokol MQTT

### a.	Source Kode

Berikut adalah kode program yang digunakan

Kode program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4C/4C.ino">disini</a>

### b.	Hasil 
#### Debug
![4C Debug](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/d671a1f0-8b8b-4829-beac-5b43364a09d5)

#### Serial Monitor
![4c , Serial](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/66987509-3f40-462b-a261-4398bb70ba0a)

#### Dashoard Node-Red
![4c dashboard](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/d5c62eae-8cf2-4bfa-b5ec-af914738c66e)

## D.	Akuisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT

### a.	Source Kode

Berikut adalah kode program yang digunakan
Kode program Dashboard dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4D_dahsbord_led/4D_dahsbord_led.ino">disini</a>

Kode program Adafruit dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/0dc8d6636295fbd148061cbd581e317609186c1f/Jobsheet%204/4D_adafruit/4D_adafruit.ino">disini</a>

### b.	Hasil 
#### Hasil Menggunakan Dashboard
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/0648bb0a-a762-4e19-b962-132895ab2ff3

#### Hasil Menggunakan Adafruit
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/8a85eecf-a014-45c9-b0ec-afc7b7150b3c

# Analisa
<p align="justify"> Pada Praktikum 4 ini merupakan praktikum yang kompleks, pada praktikum ini terdapat 4 sub job, job yang pertama adalah setting SSID ESP32 menggunakan web server nantinya esp32 akan mendeteksi jaringan wifi yang tersedia disekelilingnya dan juga akan menampilkan alamat IP esp32, kemudian lewat web browser kita setting SSID dan password ESP32. pada job kedua dan ketiga adalah kita melakukan transmisi meggunakan 2 protokol komunikasi yaitu HTTP dan MQTT, dan pada percobaan yang terkkhir kita mengakusisi data menggunakan protokol MQTT dimaa kita mengendalikan sebuah led menggunkan dashboard node-red dan juga menggunakan platform adafruit.
