// ESP8266 WhatsApp Message
// Callmebot ESP8266 Library : https://github.com/hafidhh/Callmebot-ESP8266
// Github : https://github.com/hafidhh
//          https://github.com/hafidhh/ESP8266-Whatsapp-Messages

#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "REPLACE_WITH_YOUR_SSID";
const char* password = "REPLACE_WITH_YOUR_PASSWORD";

// +international_country_code + phone number
// Portugal +351, example: +351912345678
String phoneNumber = "REPLACE_WITH_YOUR_PHONE_NUMBER";
String apiKey = "REPLACE_WITH_API_KEY";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // Send Message to WhatsAPP
  whatsappMessage(phoneNumber, apiKey, "message");
}

void loop() {
  
}