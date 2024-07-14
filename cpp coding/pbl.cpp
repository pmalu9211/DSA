// Include the libraries
#include <DallasTemperature.h>
#include <OneWire.h> 

// This is where the temp sensor is plugged in. 
// Change this to the analog input where your temp
// sensor is plugged in (if different)
//the temp sensor is connected to the analog pin 2 of the microcotroller
#define ONE_WIRE_BUS 2 

//The OneWire object is then created, passing in the ONE_WIRE_BUS constant 
//as an argument.
OneWire oneWire(ONE_WIRE_BUS); 

//The photoPin variable is set to A1, which means that the photocell sensor
// is connected to the analog input pin A1 on the microcontroller
int photoPin = A1;
int irPin = A2; // Analog input pin for IR sensor

// Pass the oneWire ref to Dallas Temperature Sensor
//The DallasTemperature object is created, passing in a reference to the 
//OneWire object as an argument. This allows the DallasTemperature object 
//to communicate with the temperature sensor using the OneWire protocol.
DallasTemperature sensors(&oneWire);

//In the setup() function, the pinMode() function is called to set the 
//photocell sensor pin to input mode
void setup(){
    // Set the photocell and IR sensor pins to INPUT mode
    pinMode(photoPin, INPUT);
    pinMode(irPin, INPUT);
    
    // Setup the temp sensor and serial comm
    // The begin() function is called on the sensors object to initialize
    // communication with the temperature sensor. The Serial.begin() function
    // is called to initialize serial communication at a baud rate of 9600.
    sensors.begin(); 
    Serial.begin(9600);
}

void loop() {
    // Get photocell reading
    int photoValue = analogRead(photoPin);
    Serial.print("Photocell reading: ");
    Serial.print(photoValue);

    // Get IR sensor reading
    int irValue = analogRead(irPin);
    Serial.print(" - IR reading: ");
    Serial.print(irValue);

    // Get temperature reading
    sensors.requestTemperatures(); 
    Serial.print(" - Temperature: "); 

    // We input 0 as index because we can have more than 
    // 1 IC attached to the same bus
    int tempVal = sensors.getTempCByIndex(0);
    Serial.println(tempVal);

    delay(1000);
}
