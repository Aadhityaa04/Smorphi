void setup() {
  Serial.begin(115200);
  Serial.println("Init......");
}

void loop() {
  if (Serial.available() == 0){
    String command = Serial.readStringUntil('\n');
    Serial.println(command);
  }
}
