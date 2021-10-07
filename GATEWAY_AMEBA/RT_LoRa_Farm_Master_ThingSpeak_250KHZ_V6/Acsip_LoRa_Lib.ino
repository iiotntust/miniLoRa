void LoRa_init()
{
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
   // Bandwidth
   LoRa.setSignalBandwidth(250E3); 
   delay(100);
}

String  Acsip_LoRa_Receive(unsigned int Dutytime)
{   
   unsigned long timeout = Dutytime + millis();
   String response = "";  // 接收LoRa回應值的變數 
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packet
    Serial.print("Received packet '");

    // read packet
    while (LoRa.available()) {
       char c = LoRa.read(); // 接收LoRa傳入的字元
       Serial.print(c);
       response += c;
    }
    //Serial.print(response);
    // print RSSI of packet
    LoRaRSSI= LoRa.packetRssi();
    Serial.print(" RSSI: ");
    Serial.println(LoRaRSSI);
  }
    if (response == "") return("");
    else  return(response);  // 顯示LoRa的回應

}

void Acsip_LoRa_Display_Data()
{
  if (ReceiveString =="") return;
  else {
   // Serial.println(ReceiveString);
   display_LoRa();
  }
}


