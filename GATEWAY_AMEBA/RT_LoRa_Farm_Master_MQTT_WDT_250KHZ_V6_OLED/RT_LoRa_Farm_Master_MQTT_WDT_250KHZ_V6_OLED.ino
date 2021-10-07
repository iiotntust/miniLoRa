#include <WiFi.h>
#include <PubSubClient.h>
#include "wiring_watchdog.h"   // include watchdog
//#include <SoftwareSerial.h>
//#define RX_Pin 0
//#define TX_Pin 1
#define P1 5   // for Globalstar LM-210H 915Mhz
#define P2 6

//SoftwareSerial LoRa(RX_Pin, TX_Pin);  // 傳送腳,接收腳 
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

char mqttServer[]     = "iot.eclipse.org";
//char mqttServer[]     = "220.134.193.170";
char clientId[]       = "AmebaClient99";
char publishTopic1[]   = "LORA99/LoRaID";
char publishTopic2[]   = "LORA99/LoRaRSSI";
char publishTopic3[]   = "LORA99/Temp";
char publishTopic4[]   = "LORA99/Humi";
char publishTopic5[]   = "LORA99/Mositure";
char publishTopic6[]   = "LORA99/Light";
char publishTopic7[]   = "LORA99/Rain";


char publishPayload[] = "Hello World";
char subscribeTopic[] = "LORA99/LED";

char publishstr1[6] = "";
char publishstr2[6] = "";
char publishstr3[6] = "";
char publishstr4[6] = "";
char publishstr5[6] = "";
char publishstr6[6] = "";
char publishstr7[6] = "";

char message_buff[100];
int  mqttport = 1883;
long lastReconnectAttempt = 0;

WiFiClient wifiClient;
PubSubClient client(wifiClient);
