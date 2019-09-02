/*
  Code by: www.munphurid.com
  M.Hashir

  This is a code that shows temperature of a room
  Hardware:
  - Arduino
  - LM35 (Temperature sensor)


  Connections:
  (When flat side of LM35 faces you with legs downward, leftmost is pin 1)

  Connect pin1 of LM35 to pin 5V of Arduino
  Connect pin2 of LM35 to pin A0 of Arduino
  Connect pin3 of LM35 to pin GND of Arduino
*/


int LM35 = A0;      //LDR is connected to pin A0 of Arduino
int input;          //Will be used later on
float temperature;    //Will be used later on


void setup() {

  pinMode(LM35, INPUT_PULLUP);   //Donot edit this line

  Serial.begin(9600);          //Donot edit this line
}


void loop() {

  input = analogRead(LM35);      //Taking input from LM35 Temperature sensor

  temperature = (input / 1024.0) * 500.0  ;        //Conversion of units
  temperature = temperature / 10.0;
  Serial.print("The temperature in Centrigrade is = ");      //Print this text on screen
  Serial.println(temperature);    //Show the temperature on screen

  delay(1000);                    //Wait for sometime before taking the next input

  //now go to the start of void loop()
}
