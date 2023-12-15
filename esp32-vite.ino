#include "./src/App.h"

AsyncWebServer *server;

void setup() {
  WiFi.begin("", "");
  while (WiFi.status() != WL_CONNECTED) delay(500);
  WebServer::init(server);
}

void loop() {
}
