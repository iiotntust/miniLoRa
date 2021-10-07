String PutData(){
   if (client.connect(server, 80)) {
    Serial.println("Data Updateing...");
    client.print("GET /update");
    client.print("?key=FI390EXAK3XUIVPB"); // API key  LoRa Master  4HTA85AJ7M1K6ULJ
    client.print("&field1=");
    client.print(LoRaID);
    client.print("&field2=");
    client.print(t);
    client.print("&field3=");
    client.print(h);
    client.print("&field4=");
    client.print(MositureValue);
    client.print("&field5=");
    client.print(LightValue);
    client.print("&field6=");
    client.print(RainValue);
   
    client.println(" HTTP/1.1");
    client.println("Host: api.thingspeak.com");
    client.println("User-Agent: arduino-ethernet");
    client.println("Connection: close");
    client.println();
    Serial.println("Updated!");
    client.stop();
    return("OK");
  }
}

