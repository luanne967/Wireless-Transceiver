//set up RF receiver for Arduino MEGA 2560
//calculate average RF delay
#include <RH_ASK.h>
#include <SPI.h> // Not actualy used but needed to compile

RH_ASK driver;

void setup() {

  Serial.begin(57600);  // Debugging only
  if (!driver.init())
  {
    Serial.println("init failed");

  }


}

void loop() {
  uint8_t buf[4];  //creating buffer for message
  uint8_t buflen = sizeof(buf);
  float delay_time[100];
  if (driver.recv(buf, &buflen)) // Non-blocking
  {
    long unsigned start = millis();  //calculate time for RF receiving
    int i; // Message with a good checksum received, dump it.
    long unsigned sum;
    
    Serial.print("Message: ");
    Serial.println((char*)buf);  //display message in terminal
    long unsigned finish = millis() - start;
    Serial.print("Delay: "); //print delay in terminal
    Serial.println(finish);
    for (int j = 0; j < 100; j++){  //collect 100 delays and find the average

      delay_time[j] = finish;
      sum += delay_time[j];
    }

    if (sizeof(delay_time) == 100){

      long unsigned average = sum/100;
      Serial.print("Average RF delay is");
      Serial.println(average);
      
    }
        
    
    
    
    
  }


}
