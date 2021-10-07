void setup()
{

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  showmRGBLED(0);
  Serial.begin(9600);
  LoRa_init();
  init_OLED_Display();
  wdt_enable(watchdogtimeout);
  wdt_reset();
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);
    // wait 5 seconds for connection:
    wdt_disable();
    delay(5000);
     wdt_reset();
   }
   wdt_disable();
}
 
