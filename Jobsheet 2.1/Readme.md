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

#### a. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/325d810737b802a6f108a95d09dd8772504b7dde/Jobsheet%202.1/A.%20Mac%20Address/A._Mac/A._Mac.ino">disini</a>

#### b. Hasil
![Hasil A](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/d389d0a6-a2ad-4061-8b88-58b2fac6da31)



## B. ESP-NOW | One-Way Point-To-Point Commnunication

### 1. Basic

#### a. Rangkaian 

#### b. Source Kode 

Kode Program Sender dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/2894bb3a8cf26e1bc59389f72164bd12238f7e7b/Jobsheet%202.1/B.%20One%20Way%20Point%20to%20Point/B.one-way_Point_to_Point/B.one-way_Point_to_Point.ino">disini</a>

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/2894bb3a8cf26e1bc59389f72164bd12238f7e7b/Jobsheet%202.1/B.%20One%20Way%20Point%20to%20Point/B.one-way_Point_to_Point_Receiver/B.one-way_Point_to_Point_Receiver.ino">disini</a>

#### c. Hasil

Program dibagi menjadi 2, yaitu sender dan receiver<br>
Penjelasan program sender adalah sebagai berikut

1. Include Library dan Header
```c
#include <esp_now.h>
#include <WiFi.h>
```
>Program ini menggunakan dua library, yaitu `esp_now` untuk ESP-NOW dan `WiFi` untuk mengonfigurasi mode WiFi.
<br>

2. Inisialisasi Broadcast Address
```c
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
```
>Menginisialisasi alamat broadcast yang digunakan untuk mengirim data ke semua perangkat di jaringan.
<br>

  3. Deklarasi Struktur Pesan
```c
typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;
```
>Mendefinisikan struktur pesan yang akan dikirim. Struktur ini memiliki empat elemen, yaitu array karakter, integer, float, dan boolean.
<br>

  4. Deklarasi Variabel dan Fungsi Callback
```c
struct_message myData;
esp_now_peer_info_t peerInfo;

void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
    Serial.print("\r\nStatus Paket Terakhir :\t");
    Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Sukses Terkirim" : "Gagal Terkirim");
}
```
>Menyediakan variabel untuk menyimpan data yang akan dikirim dan struktur peer info untuk informasi penerima. Fungsi `OnDataSent` adalah callback yang dipanggil setelah data terkirim.
<br>

  5. Setup Function
```c
void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);

    if (esp_now_init() != ESP_OK) {
        Serial.println("Gagal menginisialisasi ESP-NOW");
        return;
    }

    esp_now_register_send_cb(OnDataSent);

    memcpy(peerInfo.peer_addr, broadcastAddress, 6);
    peerInfo.channel = 0;
    peerInfo.encrypt = false;

    if (esp_now_add_peer(&peerInfo) != ESP_OK){
        Serial.println("Gagal menambahkan peer");
        return;
    }
}
```
 > - Menginisialisasi Serial Monitor dan mode WiFi sebagai station.
 > - Menginisialisasi ESP-NOW dan mendaftarkan callback untuk meng-handle status pengiriman.
 > - Mendaftarkan alamat peer yang akan menerima data.
<br>

  6. Loop Function
```c
void loop() {
    strcpy(myData.a, "INI ADALAH CHAR");
    myData.b = random(1,20);
    myData.c = 1.2;
    myData.d = false;

    esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    if (result == ESP_OK) {
        Serial.println("Data berhasil terkirim");
    }
    else {
        Serial.println("Gagal mengirim data");
    }

    delay(2000);
}
```
 > - Mengisi data dalam struktur pesan.
 > - Mengirim data menggunakan `esp_now_send`.
 > - Menampilkan status pengiriman data melalui Serial Monitor.
 > - Menunggu selama 2 detik sebelum mengulang proses pengiriman.
Dengan demikian, program ini secara berulang mengirim data menggunakan protokol ESP-NOW ke perangkat penerima yang telah ditentukan.
<br>

Sedangkan penjelasan program receiver adalah sebagai berikut
  1. Include Library dan Header
```c
#include <esp_now.h>
#include <WiFi.h>
```
>Seperti pada program sender, library yang digunakan adalah `esp_now` untuk ESP-NOW dan `WiFi` untuk mengonfigurasi mode WiFi.
<br>
  
  2. Deklarasi Struktur Pesan
```c
typedef struct struct_message {
    char a[32];
    int b;
    float c;
    bool d;
} struct_message;
```
>Mendefinisikan struktur pesan yang harus sama dengan struktur pesan pada program sender untuk memastikan konsistensi data yang dikirim dan diterima.
<br>
  
  3. Deklarasi Variabel dan Fungsi Callback Penerima
```c
struct_message myData;

void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
    // Mengkopi data yang diterima ke dalam struktur myData
    memcpy(&myData, incomingData, sizeof(myData));

    // Menampilkan data yang diterima melalui Serial Monitor
    Serial.print("Bytes received: ");
    Serial.println(len);
    Serial.print("Char: ");
    Serial.println(myData.a);
    Serial.print("Int: ");
    Serial.println(myData.b);
    Serial.print("Float: ");
    Serial.println(myData.c);
    Serial.print("Bool: ");
    Serial.println(myData.d);
    Serial.println();
}
```
>`OnDataRecv`: Callback yang dieksekusi ketika ada data yang diterima. Menggunakan `memcpy` untuk menyalin data yang diterima ke dalam struktur `myData`. Kemudian, menampilkan informasi mengenai data yang diterima melalui Serial Monitor.
<br>
  
  4. Setup Function
```c
void setup() {
    // Initialize Serial Monitor
    Serial.begin(115200);
    
    // Set ESP32 sebagai station
    WiFi.mode(WIFI_STA);

    // Inisialisasi ESP-NOW dan mendaftarkan callback untuk proses penerimaan data
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        return;
    }
    esp_now_register_recv_cb(OnDataRecv);
}
```
 > - Menginisialisasi Serial Monitor dan mode WiFi sebagai station.
 > - Inisialisasi ESP-NOW dan mendaftarkan callback `OnDataRecv` untuk menangani proses penerimaan data.
<br>
  
  5. Loop Function
```c
void loop() {
    // Loop kosong, karena penerima hanya menangani data yang diterima secara asinkron.
}
```
>Loop utama tidak melakukan apa-apa karena penerima hanya menangani data yang diterima secara asinkron melalui callback.
Program ini, ketika dijalankan, akan terus mendengarkan dan menampilkan informasi mengenai data yang diterima melalui protokol ESP-NOW. Program sender yang sesuai akan mengirimkan data ke ESP32 yang berperan sebagai receiver, dan callback OnDataRecv akan dieksekusi untuk menangani data yang diterima.
<br>

Sehingga output yang dihasilkan adalah pada serial monitor sender akan menghasilkan output berupa “Data berhasil dikirim” sedangkan pada serial monitor receiver output yang dihasilkan berupa “INI ADALAH CHAR”

##### Sender



##### Receiver



Untuk mengirimkan data dummy dengan ukuran yang terbaca oleh receiver $\pm$ 250 byte, yang harus dilakukan adalah dengan mengubah nilai `char a[]` menjadi 236
```c
typedef struct struct_message {
 char a[236];
 int b;
 float c;
 bool d;
}
```
Hasilnya adalah sebagai berikut

##### Sender


##### Receiver




### 2. Tugas

#### a. Rangkaian 

#### b. Source Kode 

Kode Program dapat dilihat dan dicoba <a href="">disini</a>

#### c. Hasil
Pada percobaan ini, pengiriman Point-to-Point dilakukan dalam beberapa kondisi. Pertama, ada 3 kondisi jarak transmisi yaitu 1 meter, 2 meter, dan 3 meter. Kemudian, pada masing-masing jarak diberikan 3 kondisi ketinggian yaitu ground, 30cm, dan 1 meter diatas permukaan tanah. Hasil pemantauan jumlah data yang berhasil terkirim dan diterima adalah sebagai berikut

##### Hasil Kirim



##### Hasil Terima



##### Hasil Tabel



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

