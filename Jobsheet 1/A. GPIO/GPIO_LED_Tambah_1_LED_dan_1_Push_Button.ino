// set pin numbers
const int buttonPin = 4; // the number of the pushbutton pin
const int ledPin = 5; // the number of the LED pin
const int buttonPin2 = 21;
const int ledPin2 = 22;
// variable for storing the pushbutton status 
int buttonState = 0;
int buttonState2 = 0;

void setup() {
 Serial.begin(115200); 
 // initialize the pushbutton pin as an input
 pinMode(buttonPin, INPUT);
 pinMode(buttonPin2, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin2, OUTPUT);
}

void loop() {
 // read the state of the pushbutton value
 buttonState = digitalRead(buttonPin);
 buttonState2 = digitalRead(buttonPin2);
 Serial.println(buttonState);
 // check if the pushbutton is pressed.
 // if it is, the buttonState is HIGH
 if (buttonState == HIGH) { 
  // turn LED on
 digitalWrite(ledPin, HIGH);
 } else {
  // turn LED off
 digitalWrite(ledPin, LOW);
 }
 
 if (buttonState2 == HIGH) { 
  // turn LED on
  for (int i = 0; i < 5; i++){
   digitalWrite(ledPin2, HIGH);
   delay(500);
   digitalWrite(ledPin2, LOW);
   delay(500);
   }
 } else {
  // turn LED off
 digitalWrite(ledPin2, LOW);
 }
}
