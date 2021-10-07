  void read_AC()
 {
     retval= read_holding_registers( AC_no,0,1,data,10);  
     v00=  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
 /*    
     retval= read_holding_registers( AC_no,3,1,data,10);  
     v03 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );        

     retval= read_holding_registers( AC_no,4,1,data,10);  
     v04 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
*/
/*   
     retval= read_holding_registers( AC_no,0x20,1,data,10);  
     v20 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
 
     retval= read_holding_registers( AC_no,0x21,1,data,10);  
     v21 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  
     
     retval= read_holding_registers( AC_no,0x22,1,data,10); 
     v22 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) ); 
     
     retval= read_holding_registers( AC_no,0x23,1,data,10);  
     v23 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  

     retval= read_holding_registers( AC_no,0x24,1,data,10);  
     v24 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  
    //
     retval= read_holding_registers( AC_no,0x29,1,data,10);  
     v29 =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );   
 
     retval= read_holding_registers( AC_no,0x2a,1,data,10);  
     v2a =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) );  
     
     retval= read_holding_registers( AC_no,0x2b,1,data,10); 
     v2b =  (unsigned int) (256 *( data[0]>>8) + (data[0] & 0x00ff) ); 
   */
   }
