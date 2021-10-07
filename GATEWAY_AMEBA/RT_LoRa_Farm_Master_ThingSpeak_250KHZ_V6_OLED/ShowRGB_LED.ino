void showmRGBLED(int pmat25)
{
 int k;
  k=pmat25;
  if (k == 0 )
    {
      //  PM2.5 分為10級，部分顏色太相近，儘顯示5種顏色
      setColor(0, 0, 0); //0 不亮
     }
  if (k < 12 )
    {
      //  PM2.5 分為10級，部分顏色太相近，儘顯示5種顏色
      setColor(200, 255, 0); //1 淺綠
     }
  else if (k >11 && k< 36 )
    {
       setColor(0, 255, 0); //2 3 綠
         }
  else if (k >35 && k< 54 )
    {
      setColor(255,215,0); // 4 5 土黃
     }
  else if (k >53 && k< 71 )
    {
      setColor(255, 0,0); // 7 8 9 紅
     }     
 else if (k>70)
    {
      setColor(255,0, 255); // purple 10 紫
     }     
}

void setColor(int red, int green, int blue)
{
#ifdef COMMON_ANODE
red = 255 - red;
green = 255 - green;
blue = 255 - blue;
#endif

digitalWrite(redPin, red);
digitalWrite(greenPin, green);
digitalWrite(bluePin, blue);
}


