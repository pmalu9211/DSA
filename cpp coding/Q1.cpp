
/*
These libraries are in the aurdino ,lib therefore giving error here
*/


// Include the libraries
#include <DallasTemperature.h>
#include <OneWire.h> 

// This is where the temp sensor is plugged in. 
// Change this to the analog input where your temp
// sensor is plugged in (if different)
#define ONE_WIRE_BUS 2 
OneWire oneWire(ONE_WIRE_BUS); 

int photoPin = A1;

// Pass the oneWire ref to Dallas Temperature Sensor
DallasTemperature sensors(&oneWire);

void setup(){
    // Set the photocell sensor pin to INPUT mode
    pinMode(photoPin, INPUT);
    
    // Setup the temp sensor and serial comm
    sensors.begin(); 
    Serial.begin(9600);
}

void loop() {
    // Get photocell reading
    int photoValue = analogRead(photoPin);
    Serial.print("Photocell reading: ");
    Serial.print(photoValue);

    // Get temperature reading
    sensors.requestTemperatures(); 
    Serial.print(" - Temperature: "); 

    // We input 0 as index because we can have more than 
    // 1 IC attached to the same bus
    int tempVal = sensors.getTempCByIndex(0);
    Serial.println(tempVal);

    delay(1000);
}