
/*
  Code by: www.munphurid.com
  M.Hashir

  This is a code that shows temperature of a room
  Hardware:
  - Arduino
  - 3 male to female wires
  - Munphurid dht11 module (Can be bought from www.munphurid.com)

  When sensor is facing towards you with legs downward, the left most pin is pin 1.

  Connections:
  Connect pin1 of dht11 to pin 5V of Arduino
  Connect pin2 of dht11 to pin A0 of Arduino
  Connect pin4 of dht11 to pin GND of Arduino
*/
#include <dht11.h>

int dht_sensorpin = A0;           //Pin on which DHT sensor is connected
dht11 DHT;                        //LDR is connected to pin A0 of Arduino
int input;                        //Will be used later on
float temperature;                //Will be used later on


void setup() {

  pinMode(dht_sensorpin, INPUT_PULLUP);     //Donot edit this line

  Serial.begin(9600);                       //Donot edit this line
}


void loop() {

  input = analogRead(dht_sensorpin);                          //Taking input from LM35 Temperature sensor

  temperature = (input / 1024.0) * 500.0  ;                   //Conversion of units
  temperature = temperature / 20.0;
  Serial.print("The temperature in Centrigrade is = ");       //Print this text on screen
  Serial.println(temperature);                                //Show the temperature on screen

  delay(1000);                                                //Wait for sometime before taking the next input

  //now go to t
