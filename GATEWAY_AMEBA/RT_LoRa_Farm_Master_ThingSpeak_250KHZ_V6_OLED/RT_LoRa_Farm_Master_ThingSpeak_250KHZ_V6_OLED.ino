#include <WiFi.h>
#include <PubSubClient.h>
#include <HttpClient.h>
#include "wiring_watchdog.h"   // include watchdog
#include <ArduinoJson.h>
#include <SPI.h>
#include <LoRa.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 5
Adafruit_SSD1306 display(OLED_RESET);
int watchdogtimeout = 8000;
float t = 0.00;
float h = 0.00;
int MositureValue = 0;
int LightValue = 0;
int RainValue = 0;
int LoRaID;
int LoRaRSSI;
#define pmsDataLen 32
uint8_t buf[pmsDataLen];
int idx = 0;
int pm10 = 0;
int pm25 = 0;
int pm100 = 0;
int pmcf10 = 0;
int pmcf25 = 0;
int pmcf100 = 0;

int redPin = 3;
int greenPin = 4;
int bluePin = 8;
#define COMMON_ANODE 

String SendString = "";    // string to hold input
String ReceiveString = "";    // string to hold input
long lastConnectionTime = 0; 
boolean lastConnected = false;
int failedCounter = 0;
int state = 0;
int retval;

int baud_rate = 9600;

#define DEBUG true
long previousMillis = 0;

unsigned long entTime,runTime,duringTime,startTime,rebootTime;
int putstatus ;
const long oneSecond = 1000; // a second is a thousand milliseconds
const long threeSecond = 1000*3;
const long fiveSecond = 1000*5;
const long tenSecond = 1000*10; 
const long f50Second = 1000*50;
const long f30Second = 1000*30;
const long oneMinute = oneSecond * 60;
String LoRa_Node_MAC ="";
String LoRa_Master ="9B667C0E0F000680";
String Source_LoRa_ID ="";
String Rcv_Data ="";

char ssid[] = "KCC-AP";     // your network SSID (name)
char pass[] = "22917532";  // your network password
int status  = WL_IDLE_STATUS;    // the Wifi radio's status
// Initialize the Wifi client library
WiFiClient client;
String retstr;
// server address:
char server[] = "api.thingspeak.com";

