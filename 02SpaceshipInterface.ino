int switchState = 0;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  switchState = digitalRead(2);
  // comment blah
  if (switchState == LOW) {
  // the button is not pressed
   digitalWrite(3,HIGH); // green LED
   digitalWrite(4,LOW); // red LED
   digitalWrite(5,LOW); // red LED
}

  else { // the button is pressed
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(250); // wait for a 1/4
    // toggle the LEDs
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(250); // wait for a 1/4
        }
} // go back to the beggining of the loop
  

