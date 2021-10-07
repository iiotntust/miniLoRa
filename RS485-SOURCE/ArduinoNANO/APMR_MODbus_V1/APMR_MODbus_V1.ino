#include <SoftwareSerial.h>
#include <stdlib.h>
String inString = "";    // string to hold input
#define TIME_REQUEST  7
unsigned long interframe_delay = 2;  /* Modbus t3.5 = 2 ms */
int AC_no = 1;
int v00,v03,v04,v20,v21,v22,v23,v24,v29,v2a,v2b;
int data[12];
int state = 0;
int retval;
#define RS485CtrlPin 2
SoftwareSerial SSerial3(8, 7); // RX, TX

void setup() {
  // put your setup code here, to run once:
    const int baudrate = 9600;
        if (baudrate <= 19200)
                interframe_delay = (unsigned long)(3.5 * 11 / baudrate);  /* Modbus t3.5 */
        SSerial3.begin(9600);   /* format 8N1, DOES NOT comply with Modbus spec. */
        Serial.begin(baudrate);
     pinMode(RS485CtrlPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Start...");
AC_no =1;
read_AC();
display_value();
//AC_no = 2;
//read_AC();
//display_value();
delay(1000);
}
