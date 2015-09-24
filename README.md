Grove_Temperature_And_Humidity_Sensor
=====================================

This is an Arduino library for the DHT series of low cost temperature/humidity sensors. 

To download. click the DOWNLOADS button in the top right corner, rename the uncompressed folder DHT. Check that the DHT folder contains DHT.cpp and DHT.h. Place the DHT library folder your <arduinosketchfolder>/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.

**Note:**

This library is used for Seeed graphical programming Project only.

API 
--
	/* 
	 * Function Name: TemperatureHumidityRead 
	 * Input - PinName: pin to connect 
	 *         th - chanel choose 
	 *              'T' - read temperature 
	 *              'H' - read humidity 
	 * Return - temperature or humidity 
	 */  
	float TemperatureHumidityRead(int PinName, char th); 

**Note**: 该函数读取间隔至少大于2s 

Test Case 
--
Get temperature and humidity, print to Serial monitor. 

	// test for seeed graphical programming project 
	// loovee @ 2015-8-4 
	#include "DHT.h" 
	 
	DHT dht; 
	const int pinTh = 2; 
	 
	void setup() 
	{ 
	Serial.begin(115200); 
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


[![Analytics](https://ga-beacon.appspot.com/UA-46589105-3/Grove_Temperature_And_Humidity_Sensor)](https://github.com/igrigorik/ga-beacon)
