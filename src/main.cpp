#include <Arduino.h>
#include <WiFi.h>

const char* WIFI_SSID = "AndroidAP";
const char* WIFI_PASS = "ingattuhan";
const char* HOSTNAME = "BoardESP32IoTSore";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  WiFi.setHostname(HOSTNAME);
  
  Serial.print("Connecting to WiFi");
  while(WiFi.status() != WL_CONNECTED) 
  {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("");
  Serial.println("WiFi connected successfully.");
}

void loop() {
  // put your main code here, to run repeatedly:
}