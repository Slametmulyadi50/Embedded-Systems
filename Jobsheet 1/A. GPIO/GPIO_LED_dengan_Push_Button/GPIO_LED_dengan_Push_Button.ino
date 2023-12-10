// set pin numbers
const int Touch0 = 4; // the number of the pushbutton pin
const int ledPin = 16; // the number of the LED pin
// variable for storing the pushbutton status 
int touchRead = 0;
void setup() {
 Serial.begin(115200);
 delay(1000); // give me time to bring up serial monitor
 Serial.println("ESP32 Touch Test");
}
void loop() {
 Serial.println(touchRead(4)); // get value of Touch 0 pin = GPIO 4
 delay(1000);
 // check if the pushbutton is pressed.
 // if it is, the buttonState is HIGH
 if (touchRead == HIGH) {
 // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPin, LOW);
 }
}
