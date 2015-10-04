// test for seeed graphical programming project
// loovee @ 2015-8-4

#include "SeeedDHT.h"


DHT dht;

const int pinTh = 2;


void setup()
{
    Serial.begin(115200);
    Serial.println("test for Seeed Graphical programming project");
    Serial.println("temp&humi");
}

void loop()
{
    float temp, humi;
    
    temp = dht.TemperatureHumidityRead(2, 'T');
    humi = dht.TemperatureHumidityRead(2, 'H');
    
    Serial.print(temp, 2);
    Serial.print(" C\t");
    Serial.print(humi, 2);
    Serial.println(" %");
    
    delay(2000);

}