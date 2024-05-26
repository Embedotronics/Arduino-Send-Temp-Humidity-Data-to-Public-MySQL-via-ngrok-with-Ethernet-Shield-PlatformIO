#ifndef ETHERNET_HANDLER_H
#define ETHERNET_HANDLER_H

#include <Ethernet.h>

void ethernetSetup(byte *mac, IPAddress ip);
void sendData(const char *server, float humidity, float temperature);

#endif // ETHERNET_HANDLER_H
