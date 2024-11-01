// Set-up fast PWM on the Arduino UNO at 1Hz on D9
void setup() { 
//  pinMode(9, OUTPUT);                               // Set D9 as output
//  TCCR1A = _BV(COM1A1) | _BV(WGM11);                // Enable the PWM output OC1A on digital pins 9
//  TCCR1B = _BV(WGM13) | _BV(WGM12) | _BV(CS12);     // Set fast PWM and prescaler of 256 on timer 1
//  ICR1 = 62499;                                     // Set the PWM frequency to 1Hz: 16MHz/(256 * 1Hz) - 1 = 62499
//  OCR1A = 6249;   // Set the duty-cycle to 10%: 62499 / 10 = 6249

pinMode(7, OUTPUT);
}

void loop() {

  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(500);

  //analogWrite(9, 6249); 
  
  }
