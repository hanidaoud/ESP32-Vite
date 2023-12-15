#include "Arduino.h"
#include "SPIFFS.h"
#include "WiFi.h"
#include "ESPAsyncWebServer.h"

#ifndef WL_ESSID
#define WL_ESSID "D-LINK"
#endif // !WL_ESSID

#ifndef WL_PASSWORD 
#define WL_PASSWORD "password"
#endif // !WL_ESSID

#ifndef __WEB_SERVER__
#define __WEB_SERVER__

namespace WebServer {
  void init(AsyncWebServer *);
}

#endif // !__WEB_SERVER__
