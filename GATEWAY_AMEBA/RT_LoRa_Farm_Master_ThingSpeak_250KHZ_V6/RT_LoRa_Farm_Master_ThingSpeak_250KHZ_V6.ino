#include <WiFi.h>
#include <PubSubClient.h>
#include <HttpClient.h>
#include <ArduinoJson.h>
#include "wiring_watchdog.h"   // include watchdog
#include <SPI.h>
#include <LoRa.h>
#include <Wire.h>
int watchdogtimeout = 8000;
float t = 0.00;
float h = 0.00;
int MositureValue = 0;
int LightValue = 0;
int RainValue = 0;
int LoRaID;
int LoRaRSSI;

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

String Rcv_Data ="";

char ssid[] = "KCC-AP";     // your network SSID (name)
char pass[] = "22917532";  // your network password
int status  = WL_IDLE_STATUS;    // the Wifi radio's status
// Initialize the Wifi client library
WiFiClient client;
String retstr;
// server address:
char server[] = "api.thingspeak.com";

