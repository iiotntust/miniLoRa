void setup()
{
  Serial.begin(9600);
  wdt_enable(watchdogtimeout);
  wdt_reset();
  LoRa_init();
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);
    // wait 10 seconds for connection:
    wdt_disable();
    delay(10000);
   }
  wdt_reset();
}
 
