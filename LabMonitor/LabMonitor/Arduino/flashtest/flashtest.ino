
void setup(){
Serial.begin(115200);
Serial.print("14CORE | TEST CODE FOR ESP32 BLINK");
pinMode(13, OUTPUT);
}
 
void loop(){
Serial.println("Blinking");
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
}
