//set up interrupt receiver for Arduino MEGA 2560

int input_pin = 52; //initialize pins A0 and A7
int output_pin = 53;
int val=0;
void setup() {
  
  pinMode(input_pin, INPUT); //set pins 0 and 7 as input and output respectively 
  pinMode(output_pin, OUTPUT);

}

void loop() {
  val=digitalRead(input_pin);
  //delayMicroseconds(1000);
  delay(100);
  digitalWrite(output_pin, val);

}