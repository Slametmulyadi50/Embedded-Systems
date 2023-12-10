// ESP32 Touch Control LED
// Touch0 is T0 which is on GPIO 4.
const int touchPin = 4; // Pin sensor sentuh (Touch0) yang terhubung ke GPIO 4
const int ledPin1 = 16;  // Pin LED yang terhubung ke GPIO 16
const int ledPin2 = 17;  // Pin LED yang terhubung ke GPIO 17
const int ledPin3 = 5;  // Pin LED yang terhubung ke GPIO 5



int touchCount = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin1, OUTPUT); // Atur pin LED sebagai output
  pinMode(ledPin2, OUTPUT); // Atur pin LED sebagai output
  pinMode(ledPin3, OUTPUT); // Atur pin LED sebagai output
  delay(1000);
  Serial.println("ESP32 Touch Control LED");
}

void loop() {
  int touchValue = touchRead(touchPin); // Membaca nilai dari sensor sentuh

  if (touchValue < 30) { // Ubah angka ini sesuai dengan sensitivitas yang Anda inginkan
    digitalWrite(ledPin1, HIGH); // Hidupkan LED jika sensor sentuh ditekan
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(500);
    digitalWrite(ledPin1, LOW); // Hidupkan LED jika sensor sentuh ditekan
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    delay(500);
    digitalWrite(ledPin1, LOW); // Hidupkan LED jika sensor sentuh ditekan
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(500);
  } else {
    digitalWrite(ledPin1, LOW); // Matikan LED jika sensor sentuh tidak ditekan
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }

  delay(100); // Penundaan kecil untuk menghindari pembacaan yang berlebihan
}
