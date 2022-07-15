
#include  "typedefine.h"
#include  "public.h"


#define LED  13               // LEDはデジタルピン13に接続


void setup()
{
  Serial.begin(115200);   //Max Speed

  pinMode(LED, OUTPUT);   // 出力に設定

}

#define     TimeSize        10      // ms

void loop()
{
  static  _U4   time;
  static  _U4   tnext;
  static  U_U1  flag;
  static  _U1   T500;

  time = millis();
  if (time >= tnext)      // 10ms
  {
    tnext = time + TimeSize;


    //500ms
    if (++T500 >= (500 / TimeSize) )
    {
      T500 = 0;
      flag.BIT.Bit0 ^= 1;
      //     Serial.println(time);
    }

    digitalWrite(LED, flag.BIT.Bit0);   // LED 500ms flash

  }
}
