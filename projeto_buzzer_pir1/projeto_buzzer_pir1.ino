// C++ code
//
void setup()
{
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(3));
  if (1 == digitalRead(3)) {
    tone(4, 29, 1000); // play tone 10 (A#0 = 29 Hz)
  } else {
    noTone(4);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}