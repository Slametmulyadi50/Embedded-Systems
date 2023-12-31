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
![Rangkaian B Basic](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/53165624-4aef-4f0b-b3ad-b762373a3ce6)


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
![B sbg Sender](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/9298e680-c3a5-4275-869f-a44aa5280c14)


##### Receiver
![B sbg Receiver](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/10567675-3329-4f91-9910-32d3173c859a)



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

https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/e382aac1-1712-4925-8bb1-c65a4d8cbe10



### 2. Tugas

#### a. Rangkaian 
![Rangkaian B Basic](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/53165624-4aef-4f0b-b3ad-b762373a3ce6)

#### b. Source Kode 

Kode Program Sender dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/2894bb3a8cf26e1bc59389f72164bd12238f7e7b/Jobsheet%202.1/B.%20One%20Way%20Point%20to%20Point/B.one-way_Point_to_Point/B.one-way_Point_to_Point.ino">disini</a>

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/2894bb3a8cf26e1bc59389f72164bd12238f7e7b/Jobsheet%202.1/B.%20One%20Way%20Point%20to%20Point/B.one-way_Point_to_Point_Receiver/B.one-way_Point_to_Point_Receiver.ino">disini</a>

#### c. Hasil
Pada percobaan ini, pengiriman Point-to-Point dilakukan dalam beberapa kondisi. Pertama, ada 3 kondisi jarak transmisi yaitu 1 meter, 2 meter, dan 3 meter. Kemudian, pada masing-masing jarak diberikan 3 kondisi ketinggian yaitu ground, 30cm, dan 1 meter diatas permukaan tanah. Hasil pemantauan jumlah data yang berhasil terkirim dan diterima adalah sebagai berikut

##### Hasil Kirim
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/696e3def-b068-4226-be73-75ab80150d73

##### Hasil Terima
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/19a537c6-5140-433f-95a0-a4c7b3fabd0a

##### Hasil Tabel

![hasil tabel](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/73e0fd6a-7f86-4837-a9ed-5a397745c313)





## 3. ESP-NOW | One-Way, One-to-Many Commnunication

### 1. Mengirim Data yang sama

#### a. Rangkaian 
![Rangkaian C](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/47b20a82-9294-4dcc-8e1a-ef70e1226654)

#### b. Source Kode 

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/b043eb377cf853715515986a9f45bdc6c929b14e/Jobsheet%202.1/C.%20One-way%2C%20One%20to%20Many%20Communication/C._a._4_ESP_RECEIVER/C._a._4_ESP_RECEIVER.ino">disini</a>

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/b043eb377cf853715515986a9f45bdc6c929b14e/Jobsheet%202.1/C.%20One-way%2C%20One%20to%20Many%20Communication/C._a._4_ESP_SENDER/C._a._4_ESP_SENDER.ino">disini</a>

#### c. Hasil
##### Hasil Sender

https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/e79067f0-667f-45db-b229-05e3b4d21298

##### Hasil Receiver

https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/fb92afaf-538a-45d3-8330-27b8c499cf83

### 2. Mengirim Data yang Berbeda

#### a. Rangkaian 
![Rangkaian C](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/47b20a82-9294-4dcc-8e1a-ef70e1226654)

#### b. Source Kode 

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/d6245f374e1326a43deb2954ed4cf9f5e97337c5/Jobsheet%202.1/C.%20One-way%2C%20One%20to%20Many%20Communication/C._b._4_ESP_SENDER/C._b._4_ESP_SENDER.ino">disini</a>

Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/d6245f374e1326a43deb2954ed4cf9f5e97337c5/Jobsheet%202.1/C.%20One-way%2C%20One%20to%20Many%20Communication/C._b._4_ESP_RECEIVER/C._b._4_ESP_RECEIVER.ino">disini</a>

#### c. Hasil
##### Hasil Sender

https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/a41942ef-9ccc-4eea-a231-dc17cbe42270

##### Hasil Receiver

https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/2883a9f5-914e-4047-a514-9e8c334a7590


### 4. ESP-NOW | One-Way, Many-to-One Communication

#### a. Rangkaian 
![rangkaian D](https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/9c1df0cc-8b47-4e39-9183-4737df3ab313)

#### b. Source Kode 

Kode Program Sender dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/4e5dec53cfa3b2cdfeffdbcec855621b3da50d33/Jobsheet%202.1/D.%20One-way%2C%20many%20to%20one%20communication/D_Sender/D_Sender.ino">disini</a>
Kode Program Receiver dapat dilihat dan dicoba <a href="https://github.com/Slametmulyadi50/Embedded-Systems/blob/4e5dec53cfa3b2cdfeffdbcec855621b3da50d33/Jobsheet%202.1/D.%20One-way%2C%20many%20to%20one%20communication/D._Receiver/D._Receiver.ino">disini</a>

#### c. Hasil
##### Sender
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/747d6399-b346-4ca2-b42c-6f52daf0320b
##### Receiver
https://github.com/Slametmulyadi50/Embedded-Systems/assets/151720537/e5abe716-eb05-4530-a9f6-7a1601a89859

## Analisis Sederhana
<p align="justify"> Pada Percobaan kali ini kita belajar mengenai ESP-NOW, yaitu sebuah komunikasi nirkabel tanpa menggunakan wifi. ini salah satu fitur yang ada pada esp yaitu komunikasi menggunakan perangkat esp dengan esp lainnya. inti dari praktikum ini adalah komunikasi antar esp menggunakan esp-now, dalam proses praktikumnya kita melakukan percobaan percobaan seperti mengirim pesan yang sama, pesan yang berbeda sampai dengan mengirim dari 1 esp ke beberapa esp begitupun sebaliknyan menerima pesan dari beberapa esp ke dalam 1 esp</p>

