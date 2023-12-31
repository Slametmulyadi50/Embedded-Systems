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

### 1. GPIO | Percobaan 1 LED Blink

#### a. Rangkaian 
![GPIO-Rangkaian 1](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/1fd416d0-de54-4b98-a34d-40dedd18d776)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/949f05fa067465d8b75d7fa57da31ae802427fe0/Jobsheet%201/A.%20GPIO/GPIO_LED_Blink.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/8d82e88c-ddf0-4a6e-84c8-7a187197a317


### 2. GPIO | Percobaan 2 Dengan Push Button

#### a. Rangkaian 
![GPIO-Rangkaian 1](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/1fd416d0-de54-4b98-a34d-40dedd18d776)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_dengan_Push_Button.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/bb6ac9fa-6cce-49a5-8635-95c78520df74

### 3. GPIO | Percobaan 3 Dengan Penambahan 1 Push Button dan 1 LED

#### a. Rangkaian 
![Rangkaian GPIO 2](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/15008466-3cbf-450b-b508-73c9adf73839)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_1_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/89c10807-bf1f-4a14-88b8-c8f6a2466469

### 4. GPIO | Percobaan 4 Dengan Penambahan 1 Push Button dan 3 LED

#### a. Rangkaian 
![Rangkaian GPIO 3](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/1b10006b-51a7-4d88-b6a9-901fb8614da4)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/83ca03f5bf528b2a96ecef010ff0196dcd0cc840/Jobsheet%201/A.%20GPIO/GPIO_LED_Tambah_3_LED_dan_1_Push_Button.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/d4b76385-1433-4acc-afb1-4d1c448e508f

## B. PWM (Pulse Width Modulation)

### 1. PWM | Mengatur Kecerahan LED

#### a. Rangkaian 
![Rangkaian PWM](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/948adef0-757e-4f05-beec-cfc1671305a5)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/B.%20PWM/PWM_1.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/a24019db-77a2-44f0-a1bc-18acb642ae87

### 2. PWM | Mengatur Kecerahan 3 LED

#### a. Rangkaian 
![Rangkaian PWM](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/948adef0-757e-4f05-beec-cfc1671305a5)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/B.%20PWM/PWM_2.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/99626fcf-6095-44f7-9e49-41d8b2851bbf

## C. ADC Dan DAC (Analog to Digital Converter) dan (Digital to Analog Converter)

### 1. ADC Dan DAC | Membaca nilai analog dari Potensiometer

#### a. Rangkaian 
![Rangkaian ADC 1](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/28172adb-2a1b-481d-9a9b-5af7e9569420)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/C.%20ADC%20dan%20DAC/ADC_dan_DAC_Rangkaian_1.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/e7e92a25-981a-4033-a8cd-864b37525e36

### 2. ADC Dan DAC | Mengatur Kecerahan LED menggunakan Potensiometer

#### a. Rangkaian 
![Rangkaian ADC 2](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/61df7258-5d4f-49d2-ba39-31c518f4ac46)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/C.%20ADC%20dan%20DAC/ADC_dan_DAC_Rangkaian_2_Potensiometer.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/a353c6f8-67fd-40a0-b163-7bdf152628d0

## D. Simulasi Pemrosesan Data Menggunakan Regresi Linier

#### a. Rangkaian 
![Rangkaian Regresi](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/2af32ed7-896c-41de-8b0f-cb05ebcdf6a9)

#### b. Source Kode 

**Kode Program dapat dilihat dan dicoba**

Source kode 1 untuk mengukur kelembapan ke 3 sample tanah <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_1.ino">disini</a>

Source kode 2 untuk mengukur vs <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_2.ino">disini</a>

Source kode 3 hasil akhir dari pengukuran dan perbandingan ke 3 sample tanah <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/f174db04a86a62c7e0ae7ee84838e93d72eae4e7/Jobsheet%201/D.%20Regresi%20Linier/Regresi_Linier_3.ino">disini</a>


#### c. Hasil

- Tabel Pengambilan Data

![Tabel regresi linier](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/fafde01b-233e-40f4-b351-a31c9c1c6483)
  
- Tabel Regresi Linier

![Regresi Linier](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/a190a038-88c5-462e-92ea-2c4547d4b53b)

## Analisis Sederhana
<p align="justify">Pada Praktikum kali ini kita mengenal dasar ESP32, tentunya sebuah microcontroller memiliki sebuah pin out yang digunakan, nah di ESP32 ini memiliki beberapa pinout mulai dari GPIO, ADC, DAC, PWM,UART dan lain sebagainya. Pada Praktikum ini kita mencoba beberapa pinout yang dibagi menjadi 4 sub job. 
   Yang pertama Sub-Job mengenai GPIO (General Purpose Input-Output) dimana kita hanya mengecek pinout GPIO dengan cara sederhana menggunakan LED dan juga push button untuk mengkreasikan LED tersebut. Sub-Job yang kedua Mengenai PWM (Pulse Width Modulation) dimana kita mencoba mengatur kecerahan LED menggunakan pin ini. Sub-Job yang ketiga yaitu ADC dan DAC, dimana kita mengkonversikan atau membaca nilai Analog dari Sebuah Potensiometer. Pada Sub-Job yang terakhir kita melakukan simulasi pemprosesan data menggunakan Regresi Linier, caranya kita menggunakan sensor soil moisture untuk mengukur 3 sample tanah yang kemudian kita mengambil datanya dan melakukan pemprosesan menggunakan ESP32.  </p>

