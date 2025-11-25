#include <Arduino.h>
#include <Wifi.h>

  const char* ssid = "是不是很想用網路啊";
  const char* passwords = "12210531";

  void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, passwords);

    while(WiFi.status()!=WL_CONNECTED){
        delay(500);
        Serial.print("connecting...");
    }

    Serial.println("WiFi Connected");
    Serial.print("My IP is ");
    Serial.println(WiFi.localIP());

    Serial.print("Submask = ");
    Serial.println(WiFi.localIP());

  }

  void loop() {
    
  }