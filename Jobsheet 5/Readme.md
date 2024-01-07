# JOBSHEET 5
# PEMROGRAMAN DASAR NODE-RED
# ABSTRAK	:
<p align="justify">Dalam pembahasan tentang pemrograman dasar dengan Node-RED, terungkap platform visual programming yang mempermudah pengembangan alur kerja Internet of Things (IoT). Fokusnya adalah pada pemahaman dasar pemrograman melalui Node-RED untuk menciptakan alur kerja yang efisien. Dalam eksplorasi ini, dipaparkan konsep-konsep pemrograman visual, implementasi logika dasar, serta penggunaan berbagai node atau blok pembangun dalam Node-RED. Dengan pendekatan yang praktis, pembaca dapat memahami langkah-langkah dasar untuk menciptakan alur kerja yang responsif dan efektif menggunakan Node-RED untuk mendukung proyek-proyek IoT.

**TUJUAN PADA JOBSHEET INI,** antara lain	:
1.	Memahami dasar pemrograman pada Node-Red.
2.	Membuat application server sederhana menggunakan Node-Red.
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

## A.	Basic Flow
### a.	Langkah Kerja
1.	Pastikan perangkat komputer terpasang Node-red
2.	Buatlah Basic Flow seperti pada gambar berikut

![gambar basic flow programming](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/b0957908-60c1-4673-932a-9e5735cf72b3)

3.	Double klik pada node input, kemudian konfigurasi seperti pada gambar di bawah

![gambar konfigurasi inject](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/72b02e15-de78-49ec-8e0d-e827962ccf37)

4.	Lakukan hal yang  sama seperti pada langkah 3 unutk node output / debug node seperti gambar berikut
   
![gambar konfigurasi debug](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/fc6945af-ef71-429e-930d-1eb54e3edc20)

5.	Klik tombol “Deploy” yang terletak pada pojok kanan atas UI untuk menjalankan program
   
### b.	Hasil

<img width="437" alt="A  Basic Flow" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/cbd73bac-46e2-4150-bb01-3a63ba75fc2d">

## B.	Menggunakan Function Node
### a.	Langkah Kerja
1.	Buatlah flow fungsi output Tunggal seperti gambar berikut ini
   
![flow fungsi output tunggal](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/9611851b-2500-41ca-ac21-41e38328e36d)

2.	Konfigurasi node input1. Isikan payload dengan “Hello World”, dan topik berupa “test1”
   
<img width="416" alt="B 1 Flow fungsi output tunggal (input1)" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/54ee83d2-6977-40d0-88a5-16c4ac17423a">


<img width="379" alt="B 1 Flow fungsi output tunggal (fungsi2)" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/bdbf7d4c-3b25-4123-9331-b9b88452460b">


<img width="485" alt="B 1 Flow fungsi output tunggal (fungsi1)" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/9ac072a7-0048-46b8-90f5-40fdde2971ec">


3.	Deploy program 
4.	Buatlah flow fungsi output berganda yang berfungsi memisahkan pesan seperti gambar dibawah ini
   
![gambar flow fungsi output berganda](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/48c7a20c-9637-4155-aeb5-091515158615)

5.	Konfigurasi node input2. Isikan payload dengan “Expeliarmus”, dan topik berupa “test2"
   
<img width="419" alt="B 1 input 2" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/2f6db9f9-1e14-4028-bf34-3a17dfc75984">

6.	Konfigurasi node fungsi seperti gambar dibawah ini
   
<img width="486" alt="B 2 konfigurasi" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/f95c2531-ac52-494f-a55e-91e3275bab48">


<img width="479" alt="B 3 konfigurasi fungsi" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/7f684cf6-607f-4357-ad22-a061f659749b">

7.	Deploy program 

### b.	Hasil
<img width="549" alt="B 1 Flow fungsi output tunggal" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/b463565d-d6ea-4805-a9c4-9b051be263f0">

<img width="527" alt="B 2 Menggunakan Function Node" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/ccd0c73a-cbe4-44c3-bc7d-8a5992863439">


## C.	Menggunakan Switch Node
### a.	Langkah Kerja
1.	Buatlah flow seperti pada gambar dibawah ini
   
![gambar flow switch node](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/1e341406-2bf7-4486-bbbf-82a2e0599334)

2.	Konfigurasi Input/Inject Node. Isikan Payload pada Inject Node 1 dengan angka 28. Kemudian pada Inject Node 2, isikan Payload dengan angka 27

<img width="416" alt="c 1 konfigurasi input" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/0d537ac2-cf2b-4313-be5b-d2a859308cd0">

3.	Konfigurasi Switch Node seperti gambar dibawah ini
   
![gambar koonfigurasi switch node](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/d997b84f-44c1-413e-a918-3f81b945928b)

4.	Deploy flow

### b.	Hasil
<img width="548" alt="C Menggunakan Switch Node" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/82fd6926-7155-4bc7-8829-23a488883db9">

## D.	Menggunakan JSON Parsing
### a.	Langkah Kerja
1.	Buatlah flow seperti gambar dibawah ini
   
![gambar flow json parser](https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/757c0797-d0c2-49ed-ad23-40797cb28a34)

2.	Konfigurasikan Inject Node, JSON Parser Node, dan Function Node seperti gambar dibawah ini

3.	Deploy flow

##<img width="411" alt="D 1 konfigurasi v1" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/c48f69a9-4068-4169-8311-2c8630e6a85a">

<img width="381" alt="D 2 konfigurasi json" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/b84f50c3-ca15-4958-91a7-ae49b1aa52fa">

<img width="481" alt="D 3 konfigurasi fungsi" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/4b825471-0764-4cb3-b2c4-6e689676a705">


# b.	Hasil
<img width="636" alt="D Menggunakan JSON Parsing" src="https://github.com/maratumaritha/Laporan-Embedded/assets/151802682/5dd9827c-f15e-4137-9bef-65c13af0e021">


# Analisa
<p align="justify"> pada praktikum ini kita mempelajari dasar-dasar node-red, Node-RED adalah suatu alat pengembangan visual yang digunakan untuk menghubungkan perangkat, layanan, dan aplikasi secara mudah dan intuitif. Dikembangkan oleh IBM, Node-RED memungkinkan pengguna untuk membuat alur kerja (flow) secara visual dengan menggunakan simpul (node) yang merepresentasikan fungsi atau tugas tertentu. disini kita memulai dengan flow sederhana.
