#include "ethernet_handler.h"
#include <SPI.h>

EthernetClient client;

void ethernetSetup(byte *mac, IPAddress ip) {
    if (Ethernet.begin(mac) == 0) {
        Serial.println("Failed to configure Ethernet using DHCP");
        Ethernet.begin(mac, ip);
    }
    delay(1000);
}

void sendData(const char *server, float humidity, float temperature) {
    if (client.connect(server, 80)) {
        Serial.println("connected");
        client.print("GET /myphp/dht11.php?temperature=");
        client.print(temperature);
        client.print("&humidity=");
        client.print(humidity);
        client.print(" HTTP/1.1");
        client.println();
        client.print("Host: ");
        client.println(server);
        client.println("Connection: close");
        client.println();
    } else {
        Serial.println("connection failed");
    }
}
