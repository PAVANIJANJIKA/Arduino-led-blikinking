#define LEDgreen 4 //Connect Digital Pin 4 on Arduino to Green LED (+ 330 ohm resistor) and then to "NO" terminal on relay module
#define LEDyellow 12 //Connect Digital Pin 13 on Arduino to Yellow LED (+ 330 ohm resistor) and then to "NC" terminal on relay module

void setup() {
  //Setup all the Arduino Pins

  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);

  //Provide power to both LEDs
  digitalWrite(LEDgreen, HIGH);
  digitalWrite(LEDyellow, HIGH);

}

void loop() {
  digitalWrite(4, HIGH);  //RED LED on, Yellow LED off
  delay(1000);
  digitalWrite(4, LOW);   //Yellow LED on, Green LED off
  delay(1000);
  digitalWrite(13, HIGH);  //Relay 3 switches to NO
  delay(1000);
  digitalWrite(13, LOW);   //Relay 3 switches to NC
  delay(1000);
}
