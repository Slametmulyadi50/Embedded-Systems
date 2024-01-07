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
![Rangkaian Capacitive Sensor ](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/807c7d5f-8b03-4892-834c-7ed4c802f743)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/1._Touch_Script_1/1._Touch_Script_1.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/a2e5b4ba-25b3-41b9-9859-1bbef19d409c

### 2. Capacitive Touch Sensor | Percobaan 2 LED menyala ketika sensor Touch disentuh

#### a. Rangkaian 
![Rangkaian Capacitive Sensor ](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/807c7d5f-8b03-4892-834c-7ed4c802f743)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/2._LED_menyala_ketika_sensor_disentuh_dan_mati_ketika_tidak_dis/2._LED_menyala_ketika_sensor_disentuh_dan_mati_ketika_tidak_dis.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/68246a2f-7818-43ad-b2a7-d5dff04f81c7

### 3. Capacitive Touch Sensor| Percobaan 3 LED Blink Ketika Senro Touch disentuh

#### a. Rangkaian 
![Rangkaian Capacitive Sensor ](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/807c7d5f-8b03-4892-834c-7ed4c802f743)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/3._LED_Blink_Ketika_Sensor_di_sentuh/3._LED_Blink_Ketika_Sensor_di_sentuh.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/c5e994e9-4a0a-4288-a92a-146b61ff79c1

### 4. Capacitive Touch Sensor | Percobaan 4 LED menyala dan serial monitor menampilka angka yang akan bertambah jika Sensor Touch disentuh

#### a. Rangkaian 
![Rangkaian Capacitive Sensor ](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/807c7d5f-8b03-4892-834c-7ed4c802f743)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/4._LED_menyala_dan_Serial_Monitor_akan_menampilkan_angka_yang_b/4._LED_menyala_dan_Serial_Monitor_akan_menampilkan_angka_yang_b.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/6a7ec006-312a-4923-bc86-a98f75728e9c

### 5. Capacitive Touch Sensor | Percobaan 5 LED menyala running dari kiri ke kanan ketika Sensor disentuh

#### a. Rangkaian 
![Rangkaian capcitvie sensor 2](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/77db95eb-5b64-4ae9-a820-867ccbf9a5db)

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/A.%20Capacitive%20Sensor%20Touch/5._3_LED_menyala_Running_LED_dari_kiri_ke_kanan_ketika_sensor_d/5._3_LED_menyala_Running_LED_dari_kiri_ke_kanan_ketika_sensor_d.ino">disini</a>


#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/6e0ce63c-2395-4136-9674-5505420e013a

## B. DHT

### 1. DHT | Membaca hasil sensor di Serial Monitor

#### a. Rangkaian 
![Sensor DHT](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/0702545e-cff3-43b4-a37b-cba9e49a33e5)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/B.%20DHT/1._DHT_1/1._DHT_1.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/85ecce64-0b4e-4c27-836e-ec48289302e9

### 2. DHT | Mengatur Suhu ruangan dengan tambahan Buzzer, Buzzer akan berbunyi jika Suhu di atas 30 Derajat Celcius

#### a. Rangkaian 
![Rangkaian DHT 2](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/b9eb6324-ee27-4cac-a419-124e6482d449)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/B.%20DHT/2._DHT_dengan_Buzzer_yang_akan_menyala_jika_suhu_di_atas_30_der/2._DHT_dengan_Buzzer_yang_akan_menyala_jika_suhu_di_atas_30_der.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/07ebbaa5-55cb-436f-9147-41e05d628b67

## C. RFID

### 1. RFID | Tag RFID untuk mengetahui Hak Akses

#### a. Rangkaian 
![RFID](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/5f9ee751-2217-41f9-9728-7518df2e5208)

#### b. Source Kode

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/C.%20RFID/1._RFID_1/1._RFID_1.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/37e2bffd-dfe7-4dde-ad4c-2dfe09937be9

### 2. RFID | Hak akses digunakan untuk menjalankan Servo dan LED 

#### a. Rangkaian 
![Rangkaian RFID TUgas](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/c6b128f0-ffda-42ca-84a1-553f735269c1)


#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/bd605bb7396bc75a046b9aab1de7ef54dbb22be5/Jobsheet%202/C.%20RFID/2._RFID_dengan_Servo/2._RFID_dengan_Servo.ino">disini</a>

#### c. Hasil
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/001614ec-6ce2-4a62-a273-15ee57898e85

## Analisis Sederhana
<p align="justify"> Dari Praktikum Jobsheet 2 ini kita belajar mengenai protokol protokol komunikasi yang ada pada ESP32 dengan menggunakan beberapa sensor. Pada Jobsheet 2 ini terdapat 3 Sub Jobsheet yaitu yang pertama mengenai Capacitive Touch Sensor dimana pada ESP32 terdapat pin yang bisa digunakan untuk touch sensor. Pada Sub job yang pertama ini kita mencoba berbagai program sederhana seperti led mneyala, blink dan running led.
Pada Sub Job 2 kita belajar mengenai senso DHT 11 yaitu sebuah sensor yang biasa digunakan untuk mengukur suhu kita mencoba prgram pertama yang hanya untuk mengakases sensor DHT 11 saja. untuk percobaan kedua kita membuat logika dalam program yaitu ketika sensor dht ini mendeteksi suhu sekitar diatas 30 derajat maka Led dan buzzer akan menyala, biasanya sensor ini bisa diterapkan di pendeteksi suhu runagan.
Pada Sub Job 3 kita belajar mengenai sensor RFID (SPI communication) pada percobaan ini kita membuat program sederhana untuk memberikan akses RFID kemudian dikombinasikan dengan servo, ketika kita mendapatkan aksees di RFID readernya maka servo akan berputar, percobaan ini seperti teknologi parkir dan tol.  </p>

