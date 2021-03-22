#include "mbed.h"
#include "TextLCD.h"

DigitalOut led(LED1);      //LED1 = PA_5
TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int x=30;
      lcd.printf("108033221\n");
      while(x>=0x00)
      {
            led = !led;             // toggle led
            lcd.locate(5,1);
            lcd.printf("%5i",x);    //counter display
            ThisThread::sleep_for(1s);
            x--;
      }
}