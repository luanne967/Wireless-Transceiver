// 1HZ RF transmission on Arduino Uno
#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;



void setup() {

  
  Serial.begin(57600);    // Debugging only
  if (!driver.init())
  {
    Serial.println("init failed");
  }
}

void loop() {

  

  start = millis(); //calculate time for RF transmission
  const char *msg = "1";
  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();
  finish = millis() - start;
  println(finish);
  delay(1000);






}
