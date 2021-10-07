
void display_LoRa()
{

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


