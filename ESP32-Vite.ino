#include "./src/App.h"

AsyncWebServer *server;

void setup() {
  if (VERBOSE_STATE) Serial.begin(115200); // temporary
  WiFi.begin(WL_ESSID, WL_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) delay(100);
  WebServer::init(server);
}

void loop() {
  // temporary
  if (VERBOSE_STATE) {
    Serial.println(WiFi.localIP());
    vTaskDelay(10000 / portTICK_PERIOD_MS);
  }
}
