  void read_AC()
 {
    retval= read_holding_registers(AC_no,72,1,data,10);  
     v72 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   

     retval= read_holding_registers(AC_no,73,1,data,10);  
     v73 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );        
      
     retval= read_holding_registers(AC_no,74,1,data,10);  
     v74 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
 
     retval= read_holding_registers(AC_no,75,1,data,10);  
      v75 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  
    
      retval= read_holding_registers(AC_no,76,1,data,10);  
      v76 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  

      retval= read_holding_registers(AC_no,77,1,data,10);  
      v77 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  

      retval= read_holding_registers(AC_no,81,1,data,10);  
      v81 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  
  
   }
