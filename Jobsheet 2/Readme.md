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


## A. ESP32 Capacitive Touch Sensor 

### 1. Capacitive Touch Sensor | Percobaan 1 Touch Sensor

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/1._Touch_Script_1/1._Touch_Script_1.ino">disini</a>

#### c. Hasil


### 2. Capacitive Touch Sensor | Percobaan 2 LED menyala ketika sensor Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/2._LED_menyala_ketika_sensor_disentuh_dan_mati_ketika_tidak_dis/2._LED_menyala_ketika_sensor_disentuh_dan_mati_ketika_tidak_dis.ino">disini</a>


#### c. Hasil

### 3. Capacitive Touch Sensor| Percobaan 3 LED Blink Ketika Senro Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/3._LED_Blink_Ketika_Sensor_di_sentuh/3._LED_Blink_Ketika_Sensor_di_sentuh.ino">disini</a>


#### c. Hasil

### 4. Capacitive Touch Sensor | Percobaan 4 LED menyala dan serial monitor menampilka angka yang akan bertambah jika Sensor Touch disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/4._LED_menyala_dan_Serial_Monitor_akan_menampilkan_angka_yang_b/4._LED_menyala_dan_Serial_Monitor_akan_menampilkan_angka_yang_b.ino">disini</a>


#### c. Hasil

### 5. Capacitive Touch Sensor | Percobaan 5 LED menyala running dari kiri ke kanan ketika Sensor disentuh

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/5._3_LED_menyala_Running_LED_dari_kiri_ke_kanan_ketika_sensor_d/5._3_LED_menyala_Running_LED_dari_kiri_ke_kanan_ketika_sensor_d.ino">disini</a>


#### c. Hasil
## B. DHT

### 1. DHT | Membaca hasil sensor di Serial Monitor

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/B.%20DHT/1._DHT_1/1._DHT_1.ino">disini</a>

#### c. Hasil

### 2. DHT | Mengatur Suhu ruangan dengan tambahan Buzzer, Buzzer akan berbunyi jika Suhu di atas 30 Derajat Celcius

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/B.%20DHT/2._DHT_dengan_Buzzer_yang_akan_menyala_jika_suhu_di_atas_30_der/2._DHT_dengan_Buzzer_yang_akan_menyala_jika_suhu_di_atas_30_der.ino">disini</a>

#### c. Hasil


## C. RFID

### 1. RFID | Tag RFID untuk mengetahui Hak Akses

#### a. Rangkaian 

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/C.%20RFID/1._RFID_1/1._RFID_1.ino">disini</a>

#### c. Hasil

### 2. RFID | Hak akses digunakan untuk menjalankan Servo dan LED 

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/C.%20RFID/2._RFID_dengan_Servo/2._RFID_dengan_Servo.ino">disini</a>

#### c. Hasil



## Analisis Sederhana
<p align="justify"> Bentar dulu heheh</p>

