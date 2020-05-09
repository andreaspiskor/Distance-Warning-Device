/* 
 
  Distance Warning device using an HC-SR04 sensor

  This version can be used if you are using an active buzzer instead of a piezo
  
*/

const byte trigPin = 9;
const byte echoPin = 10;
const byte ledRedPin = 4;
const byte ledGreenPin = 5;
const byte speakerPin = 8;
const int toneFrequency = 2000;
int maxDistance = 150;   // EU countries mostly prescribe 1.5 meters other countries prescribe 6 feet (180 cm)
int distance;
long duration;
bool speakerOn = false;

void setup() {
  
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  digitalWrite(ledRedPin, HIGH);

  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 

  //Serial.begin(115200); 
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);  
  distance= duration*0.034/2;
  
  //Serial.println(distance);
  
  if (distance < maxDistance && distance > 20 ) {
    if (!speakerOn) {
      digitalWrite(speakerPin, HIGH);
      speakerOn = true;
    }
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
  } else {
    if (speakerOn) {
      digitalWrite(speakerPin, LOW);
      speakerOn = false;
    }
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledGreenPin, HIGH);  
  }

  delay(40);

}
