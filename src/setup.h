#ifndef setup_h
#define setup_h

/**********************************************************/
// Uncomment if the serial debug output is required
/**********************************************************/
#define ENA_DEBUG
/**********************************************************/
// Uncomment if the module has a display connected
/**********************************************************/
#define HAS_TFT
/**********************************************************/
// Select one WiFi connection mode
// If changes to the standard are needed change in
// bgConnect.cpp
/**********************************************************/
#define CONNDIRECT // connect with pre-defined SSID and password
// #define CONNWIFIMANAGER // connect using the WiFiManager
// #define CONNSMARTCONFIG // connect using SmartConfig

// Standard libraries
#include <Arduino.h>
#include "WiFi.h"
#include "ESPmDNS.h"
#include "WiFiUdp.h"
#include "ArduinoOTA.h"
#include "esp_system.h"
#include "rom/rtc.h"

// Declarations and function definitions
#ifdef HAS_TFT // TFT connected?
	#include "TFT_eSPI.h"
#endif
#ifdef CONNWIFIMANAGER // WiFiManager used for intial WiFi connection?
	#include "DNSServer.h"
	#include "WebServer.h"
	#include "WiFiManager.h"
#endif

// App specific includes
#include "Wire.h"
#include "MQTTClient.h"
// #include "FS.h"
// #include "SPIFFS.h"
// #include "ESP8266FtpServer.h"
#include "ArduinoJson.h"
#include "HTTPClient.h"
#include "WiFiClientSecure.h"
#include "SimpleBLE.h"

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <BLE2902.h>
#include <BLE2A08.h>
#include <BLE2A1F.h>
#include <BLE2A3D.h>
#include <BLE2A6F.h>
#include <BLE2A46.h>

// My libraries
#include "myLib.h"
#include "ESP32Ticker.h"
#include "globals.h"

#endif
