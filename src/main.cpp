#include <WiFi.h>

// Replace with your network credentials
const char *ssid = "ESP32-Access-Point";
const char *password = "123456";

// Set web server port number to 80
WiFiServer server(80);

void setup()
{
  Serial.begin(96000);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  server.begin();
}

void loop() {}
