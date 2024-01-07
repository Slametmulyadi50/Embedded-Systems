# JOBSHEET 2.1 - JARINGAN SENSOR NIRKABEL MENGGUNAKAN ESP-NOW

## Abstrak
<p align="justify">ESP-NOW adalah protokol yang memnungkinkan banyak perangkat untuk komunikasi satu sama lain tanpa meggunakan wifi. Protokol ini mirip dengan konektivitas 2.4GHz berdaya rendah. Komunikasi ini mengandalkan pendifinisian dari MAC ADDRESS ESP 32. Setelah konfigurasi alamat selesai dilakukan maka jaringan peer-to-peer akan terbentuk, memungkinkan adanya koneksi yang tetap tanpa perlu melakukan proses handshaking ulang. Jika salah satu perangkat ESP32 mati atau diatur ulang, koneksi secara otomatis akan pulih saat perangkat tersebut di-restart dan terhubung kembali ke perangkat pasangannya yang telah ditentukan alamatnya. </p>


**Tujuan pada jobsheet ini**, antara lain:
1. Mahasiswa dapat memahami konsep topologi jaringan sensor berbasis nirkabel ESP-NOW
2. Mahasiswa dapat melakukan konfigurasi berbagai topologi ESP-NOW
3. Mahasiswa dapat menganalisis dan menentukan topologi ESP-Now sesuai dengan studi kasus proyek 
   

## Alat dan Bahan
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm


## A. ESP-NOW | Memperoleh Mac Address

### Memperoleh Mac Address

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/325d810737b802a6f108a95d09dd8772504b7dde/Jobsheet%202.1/A.%20Mac%20Address/A._Mac/A._Mac.ino">disini</a>

#### c. Hasil




## B. ESP-NOW | One-Way Point-To-Point Commnunication

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_dengan_Push_Button.ino">disini</a>


#### c. Hasil

### 3. GPIO | Percobaan 3 Dengan Penambahan 1 Push Button dan 1 LED

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_1_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil

### 4. GPIO | Percobaan 4 Dengan Penambahan 1 Push Button dan 3 LED

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_3_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil

## B. PWM (Pulse Width Modulation)

### 1. PWM | Mengatur Kecerahan LED

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/B.%20PWM/PWM_1.ino">disini</a>

#### c. Hasil

### 2. PWM | Mengatur Kecerahan 3 LED

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/B.%20PWM/PWM_2.ino">disini</a>

#### c. Hasil


## C. ADC Dan DAC (Analog to Digital Converter) dan (Digital to Analog Converter)

### 1. ADC Dan DAC | Membaca nilai analog dari Potensiometer

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/C.%20ADC%20dan%20DAC/ADC_dan_DAC_Rangkaian_1.ino">disini</a>

#### c. Hasil

### 2. ADC Dan DAC | Mengatur Kecerahan LED menggunakan Potensiometer

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/C.%20ADC%20dan%20DAC/ADC_dan_DAC_Rangkaian_2_Potensiometer.ino">disini</a>

#### c. Hasil

## D. Simulasi Pemrosesan Data Menggunakan Regresi Linier

#### a. Rangkaian 

#### b. Source Kode 

**Kode Program dapat dilihat dan dicoba**

Source kode 1 untuk mengukur kelembapan ke 3 sample tanah <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_1.ino">disini</a>

Source kode 2 untuk mengukur vs <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_2.ino">disini</a>

Source kode 3 hasil akhir dari pengukuran dan perbandingan ke 3 sample tanah <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_3.ino">disini</a>


#### c. Hasil
- Tanah Kering
- Tanah Medium
- Tanah Basah
- Hasil tabel


## Analisis Sederhana
<p align="justify">Pada Praktikum kali ini kita mengenal dasar ESP32, tentunya sebuah microcontroller memiliki sebuah pin out yang digunakan, nah di ESP32 ini memiliki beberapa pinout mulai dari GPIO, ADC, DAC, PWM,UART dan lain sebagainya. Pada Praktikum ini kita mencoba beberapa pinout yang dibagi menjadi 4 sub job. 
   Yang pertama Sub-Job mengenai GPIO (General Purpose Input-Output) dimana kita hanya mengecek pinout GPIO dengan cara sederhana menggunakan LED dan juga push button untuk mengkreasikan LED tersebut. Sub-Job yang kedua Mengenai PWM (Pulse Width Modulation) dimana kita mencoba mengatur kecerahan LED menggunakan pin ini. Sub-Job yang ketiga yaitu ADC dan DAC, dimana kita mengkonversikan atau membaca nilai Analog dari Sebuah Potensiometer. Pada Sub-Job yang terakhir kita melakukan simulasi pemprosesan data menggunakan Regresi Linier, caranya kita menggunakan sensor soil moisture untuk mengukur 3 sample tanah yang kemudian kita mengambil datanya dan melakukan pemprosesan menggunakan ESP32.  </p>

