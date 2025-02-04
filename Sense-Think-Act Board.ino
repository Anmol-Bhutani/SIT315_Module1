const int motionSensor = 2;  
const int led = 13;         

void setup() {
    pinMode(motionSensor, INPUT); 
    pinMode(led, OUTPUT);         
    Serial.begin(9600);           
}

void loop() {
    int motionStatus = digitalRead(motionSensor); 
    if (motionStatus == HIGH) {
        digitalWrite(led, HIGH); 
        Serial.println("Motion detected: LED ON");
    } else {
        digitalWrite(led, LOW);
        Serial.println("No motion: LED OFF");
    }
    delay(500); 
}
