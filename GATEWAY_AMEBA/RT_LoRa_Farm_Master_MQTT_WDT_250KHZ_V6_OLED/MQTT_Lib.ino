
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i=0;i<length;i++) {
    Serial.print((char)payload[i]);
   }
  Serial.println();
}

boolean reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Re Attempting MQTT connection...");
    // Attempt to connect
    wdt_enable(watchdogtimeout);
    wdt_reset();
    if (client.connect(clientId)) {
      Serial.println("Reconnected");
      client.publish(publishTopic1, publishstr1,false); //retained
      client.publish(publishTopic2, publishstr2,false);
      client.publish(publishTopic3, publishstr3,false);
      client.publish(publishTopic4, publishstr4,false);      
      client.publish(publishTopic5, publishstr5,false);   
      client.publish(publishTopic6, publishstr6,false);      
      client.publish(publishTopic7, publishstr7,false);      
      // ... and resubscribe
      //client.subscribe(subscribeTopic,1);
      delay(2000);
      return client.connected();
    
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
      }
  }
}
