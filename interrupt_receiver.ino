//set up interrupt receiver for Arduino MEGA 2560

int input_pin = 0; //initialize pins A0 and A7
int output_pin = 7;

void setup() {
  
  pinMode(0, INPUT); //set pins 0 and 7 as input and output respectively 
  pinMode(7, OUTPUT);
 // Serial.begin(9600);

}

void loop() {

  
//  if (digitalRead(input_pin) == 1){  //if input is HIGH, save current time
//
//    //unsigned int current_time = millis();
//
//    
//    output_pin = HIGH;  //set output pin to HIGH and measure internal delay
//
////    unsigned int internal_delay = current_time - millis();  
////
////    Serial.print(internal_delay);  //print internal delay to console
////
////    delay(50);
////
////    output_pin = LOW; //set output pin to LOW
//  }

//  else if (digitalRead(input_pin) == 0) {
//
//    output_pin = LOW;
//    
//  }

  digitalWrite(output_pin, digitalRead(input_pin));

}
