 void displayData(){

      Serial.print(AC_no);
      Serial.print(",");                                        
      Serial.print( fpv); 
      Serial.print("V,");
      Serial.print( fpa );
      Serial.print("A,");
      Serial.print( fpw);
      Serial.print("W,");
      Serial.print( ff);
      Serial.print("Hz,");
      Serial.print( fpf);
      Serial.print("(PF),"); 
      Serial.print (fpwh) ;
      Serial.print("kWh"); 
      Serial.println("   ***");
    
 }

