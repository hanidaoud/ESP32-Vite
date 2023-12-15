#!/bin/python

import os

dir = "./src"

f = open(f"{dir}/WebServer.cpp", "w")
f.write('''#include "./App.h"

void WebServer::init(AsyncWebServer* server)
{
    SPIFFS.begin();
    server->on("/", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/index.html", "text/html");
    });

    server->on("/vite.ico", HTTP_GET, [](AsyncWebServerRequest * request) {
        request->send(SPIFFS, "/vite.ico", "image/x-icon");
    });
''')

try:
    for file in os.listdir("./data/assets"):
        f.write(f'''
    server->on("/static/css/{file}", HTTP_GET, [](AsyncWebServerRequest * request) {{
        request->send(SPIFFS, "/static/css/{file}", "text/{os.path.splitext(file)[1][1:]}");
    }});
        ''')
except FileNotFoundError:
    print("data folder was not found")


f.write('''
    server->begin();
}
''')
