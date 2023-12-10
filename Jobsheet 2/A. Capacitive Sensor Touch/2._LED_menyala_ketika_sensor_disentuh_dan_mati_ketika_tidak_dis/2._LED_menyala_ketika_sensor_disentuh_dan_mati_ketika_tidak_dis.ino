// ESP32 Touch Control LED
// Touch0 is T0 which is on GPIO 4.
const int touchPin = 4; // Pin sensor sentuh (Touch0) yang terhubung ke GPIO 4
const int ledPin = 16;  // Pin LED yang terhubung ke GPIO 13

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT); // Atur pin LED sebagai output
  delay(1000);
  Serial.println("ESP32 Touch Control LED");
}

void loop() {
  int touchValue = touchRead(touchPin); // Membaca nilai dari sensor sentuh

  if (touchValue < 30) { // Ubah angka ini sesuai dengan sensitivitas yang Anda inginkan
    digitalWrite(ledPin, HIGH); // Hidupkan LED jika sensor sentuh ditekan
  } else {
    digitalWrite(ledPin, LOW); // Matikan LED jika sensor sentuh tidak ditekan
  }

  delay(100); // Penundaan kecil untuk menghindari pembacaan yang berlebihan
}
