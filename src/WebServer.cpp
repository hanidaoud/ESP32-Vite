#include "./App.h"

void WebServer::init(AsyncWebServer* server)
{
    SPIFFS.begin();
    server->on("/", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/index.html", "text/html");
    });

    server->on("/vite.ico", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/vite.ico", "image/x-icon");
    });

    server->on("/static/css/index-w6hcz12F.css", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/static/css/index-w6hcz12F.css", "text/css");
    });
        
    server->on("/static/css/index-Tjxc2dTA.js", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/static/css/index-Tjxc2dTA.js", "text/js");
    });
        
    server->begin();
}
