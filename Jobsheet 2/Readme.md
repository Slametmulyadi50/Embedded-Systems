# JOBSHEET 2 - PROTOKOL KOMUNIKASI DAN SENSOR

## Abstrak
<p align="justify">ESP32 merupakan salah satu mikrokontroler yang menawarkan solusi jariringan Wifi dan merupakan pengembangan dari ESP8266. ESP32 terdapat protokol komunikasi data seperti UART _(Universal Asynchronous Reciever Transimter)_ adalah protokol komunikasi yang biasanya digunakan dalam pengiriman data serial antara device 
satu dengan yang lainnya. Selain UART ada juga SPI _(Serial Peripheral Interface)_ adalah protokol data serial sinkron yang digunakan oleh mikrokontroler untuk komunikasi dengan satu atau lebih perangkat peripheral, SPI salah satu mode komunikasi sinkron dengan kecapatn tinggi, SPI membutuhkan 3 jalur Yaitu MOSI,MISO dan SCK. Selain 2 protokol masih ada protokol lainnya I2C sebuah protokol untuk komunikasi serial antar IC biasa disebut juga dengan  Two Wire Interface (TWI). I2C biasa  digunakan untuk komunikasi antara mikrokontroler dan device lainnya seperi sensor. </p>


**Tujuan pada jobsheet ini**, antara lain:
1. Mahasiswa dapat Memahami cara kerja protokol komunikasi yang terdapat pada ESP32. seperti UART,I2C, One Wire, SPI
2. Mahasiswa dapat menggunakan protokol komunikasi data seperti UART,I2C, One Wire, SPI untuk mengakses sensor.
3. Mahasiswa dapat memanfaatkan transducer sensor dan actuatur untuk membuat sebuah perangkat IoT.
   

## Alat dan Bahan
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT 11
5) LED (5) dan Push Button (3)
6) Resistor 330,1K, 10K Ohm (@3)
7) Sensor RFID
8) Servo
9) 


## A. ESP32 Capacitive Touch Sensor 

### 1. Capacitive Touch Sensor | Percobaan 1 Touch Sensor

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/tree/28f5488b5e81e1b545b9b18eb57956a1833407f9/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/1._Touch_Script_1">disini</a>

#### c. Hasil


### 2. Capacitive Touch Sensor | Percobaan 2 LED menyala ketika sensor Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/tree/28f5488b5e81e1b545b9b18eb57956a1833407f9/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/2._LED_menyala_ketika_sensor_disentuh_dan_mati_ketika_tidak_dis">disini</a>


#### c. Hasil

### 3. Capacitive Touch Sensor| Percobaan 3 LED Blink Ketika Senro Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/tree/28f5488b5e81e1b545b9b18eb57956a1833407f9/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/3._LED_Blink_Ketika_Sensor_di_sentuh">disini</a>


#### c. Hasil

### 4. Capacitive Touch Sensor | Percobaan 4 LED menyala dan serial monitor menampilka angka yang akan bertambah jika Sensor Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/tree/28f5488b5e81e1b545b9b18eb57956a1833407f9/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/4._LED_menyala_dan_Serial_Monitor_akan_menampilkan_angka_yang_b">disini</a>


#### c. Hasil

### 5. Capacitive Touch Sensor | Percobaan 4 LED menyala running dari kiri ke kanan ketika Sensor disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/tree/28f5488b5e81e1b545b9b18eb57956a1833407f9/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/5._3_LED_menyala_Running_LED_dari_kiri_ke_kanan_ketika_sensor_d">disini</a>


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

