#include "./src/App.h"

AsyncWebServer *server;

void setup() {
  WiFi.begin(WL_ESSID, WL_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) delay(100);
  WebServer::init(server);
}

void loop() {
}
