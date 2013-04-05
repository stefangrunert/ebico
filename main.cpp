// Do not remove the include below
#include "main.h"

SignalProcessor sigPro;
BikeManager bikeManager;

void setup() {

	Serial.begin(115200);
	delay(200);
	Serial.println("Start ebico");
	delay(100);
	sigPro.startCollect();
}

void loop() {
	global::millisRunning = millis();
	sigPro.processSignals();
}
