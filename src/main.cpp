#include <Arduino.h>
#include "dht_handler.h"
#include "ethernet_handler.h"

byte mac[] = { 0xDE, 0xAC, 0xAE, 0xFE, 0x23, 0x7D };
IPAddress ip(192, 168, 0, 126);
const char server[] = "192.168.0.111"; // Replace with your server's IP address

void setup() {
    Serial.begin(9600);
    Serial.println("Initializing DHT sensor...");
    dhtSetup();
    Serial.println("Initializing Ethernet...");
    ethernetSetup(mac, ip);
    Serial.println("Setup complete");
}

void loop() {
    Serial.println("Reading DHT sensor data...");
    float humidity = readHumidity();
    float temperature = readTemperature();
    

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("C");
    Serial.print(", Humidity: ");
    Serial.print(humidity);
    Serial.println("%");
   

    Serial.println("Sending data to server...");
    sendData(server, humidity, temperature);
    Serial.println("Data sent, waiting for 30 seconds...");
    
    delay(30000); // interval
}
