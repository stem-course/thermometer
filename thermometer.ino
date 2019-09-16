/*
Code by:
M.Hashir

This is a code that display temperature and humidity measured by sensor

Hardware:
-Arduino
-DHT11 sensor (temperature and humidity sensor)

Connections:
When perforated side (side with holes) of DHT sensor is towards you, the left most leg is pin 1 and right most leg is pin 4
Connect pin 1 of DHT11 to 5V pin of Arduino
Connect pin 2 of DHT11 to pin 2 of Arduino
Connect pin 4 of DHT11 to GND pin of Arduino
*/

#include <DHT.h>      //Install this library using library manager

int DHTPIN = 2;     //DHT is connected to this pin
#define DHTTYPE DHT11   // We are using this model of DHT..... DHT11... Do not edit this

DHT dht(DHTPIN, DHTTYPE); //Do not edit this line


float hum;  //Do not edit
float temp; //Do not edit

void setup() 
{
  Serial.begin(9600);
  Serial.println("DHT11 sensor testing");   //Print this on Serial monitor when program starts
  dht.begin();                //Do not edit
}

void loop() 
{ 
    float converted = 0.00; //Do not edit
        
    hum = dht.readHumidity();         //Read Humidity value from sensor
    temp= dht.readTemperature();      //Read temperature value from sensor

    Serial.print("Celsius = ");     //Print this on Serial monitor
    Serial.print(temp);             //Print temperature on Serial monitor
    
    //Print degree symbol
    Serial.write(176);                      //Do not edit
    Serial.println("C");                    //Do not edit

    Serial.print("Humidity =");       //Print this on Serial monitor
    Serial.println(hum);              //Print value of humidity on Serial monitor

    delay(2000);          //Wait for 2 seconds
}
