#include <Arduino.h>
#include <NCD16Relay.h>

NCD16Relay relayController;

void setup() {
  relayController.setAddress(0, 0, 0);
}

void loop() {
  for(int i = 1; i < 17; i++){
    relayController.turnOnRelay(i);
    delay(100);
    relayController.turnOffRelay(i);
  }
}
