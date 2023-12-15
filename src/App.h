#include "Arduino.h"
#include "SPIFFS.h"
#include "WiFi.h"
#include "ESPAsyncWebServer.h"

#ifndef __WEB_SERVER__
#define __WEB_SERVER__

namespace WebServer {
  void init(AsyncWebServer *);
}

#endif // !__WEB_SERVER__
