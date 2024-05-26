#ifndef DHT_HANDLER_H
#define DHT_HANDLER_H

#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

void dhtSetup();
float readHumidity();
float readTemperature();

#endif // DHT_HANDLER_H
