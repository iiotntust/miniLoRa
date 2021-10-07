void init_OLED_Display()
{
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
  display.display();
  display.clearDisplay();
}


void displayOLED_LoRa()
{
   display.clearDisplay();
  display.setTextColor(WHITE);
  display.display();

  display.setTextSize(1);
   display.setCursor(0,0);
  display.print("LoRaID:");
  display.println(LoRaID);
  display.print("Temp:");
  display.println(t);
  display.print("Humi:");
  display.println(h); 
  display.print("Mositure:");
  display.println(MositureValue); 
  display.print("Light:");
  display.println(LightValue); 
  display.print("Rain:");
  display.println(RainValue);  
  display.print("F:");
  display.print("915Mhz "); 
  display.print("RSSI:");
  display.println(LoRaRSSI); 

  display.display();

  Serial.print("LoRaID:");
  Serial.println(LoRaID);

  Serial.print("Temp:");
  Serial.println(t);

  Serial.print("Humi:");
  Serial.println(h); 

  Serial.print("Mositure:");
  Serial.println(MositureValue); 
     
  Serial.print("Light:");
  Serial.println(LightValue); 
    
  Serial.print("Rain:");
  Serial.println(RainValue); 

  Serial.print("F:");
  Serial.print("915Mhz "); 
  
  Serial.print("RSSI:");
  Serial.println(LoRaRSSI); 
}


