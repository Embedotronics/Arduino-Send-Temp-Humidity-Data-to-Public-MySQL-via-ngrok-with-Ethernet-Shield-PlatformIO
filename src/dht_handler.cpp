#include "dht_handler.h"

DHT dht(DHTPIN, DHTTYPE);

void dhtSetup() {
    dht.begin();
}

float readHumidity() {
    return dht.readHumidity();
}

float readTemperature() {
    return dht.readTemperature();
}
