  void read_AC()
 {
     retval= read_holding_registers( AC_no,0,1,data,10);  
     v00=  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
 
   }
