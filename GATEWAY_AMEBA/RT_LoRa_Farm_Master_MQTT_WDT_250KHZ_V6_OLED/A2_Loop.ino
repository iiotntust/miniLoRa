// the loop function runs over and over again forever
void loop() {
     wdt_enable(watchdogtimeout);
     ReceiveString=Acsip_LoRa_Receive(2500);
     if (ReceiveString =="") return;
     //Serial.println(ReceiveString);
     Parser_JSON();
     displayOLED_LoRa();
     showmRGBLED(pm25);

  if (!client.connected()) {
    long now = millis();
    if (now - lastReconnectAttempt > 5000) {
      lastReconnectAttempt = now;
      Serial.print(" MQTT connection...");
       wdt_reset();
      if (reconnect()) {
        lastReconnectAttempt = 0;
      }
    }
  } else {
     wdt_enable(watchdogtimeout);
     wdt_reset();
     Serial.println("MQTT loop Get Data");
     sprintf(publishstr1,"%d",LoRaID);
     sprintf(publishstr2,"%d",LoRaRSSI); 
     sprintf(publishstr3,"%3.0f",t);
     sprintf(publishstr4,"%3.0f",h);
     sprintf(publishstr5,"%d",MositureValue); 
     sprintf(publishstr6,"%d",LightValue); 
     sprintf(publishstr7,"%d",RainValue); 
               
      client.publish(publishTopic1, publishstr1,false); //retained
      client.publish(publishTopic2, publishstr2,false);
      client.publish(publishTopic3, publishstr3,false);
      client.publish(publishTopic4, publishstr4,false);      
      client.publish(publishTopic5, publishstr5,false); 
      client.publish(publishTopic6, publishstr6,false);      
      client.publish(publishTopic7, publishstr7,false);      
      delay(1000);
    if (client.connected()) Serial.println("Publish OK");
     else  {
        Serial.println("Publish fail");
         }
     
    client.loop();
     wdt_enable(watchdogtimeout);
     wdt_reset();
    
 }
  wdt_disable(); 
  delay(50); 
  
// End of Loop 
 }
