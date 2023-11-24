#include <TFT_eSPI.h>

extern const int pin_arrary[5];
extern const uint16_t *monday[4];
extern const uint16_t PROGMEM tuesday[];
extern const uint16_t PROGMEM *wensday[2];
extern const uint16_t PROGMEM *thursday[3];
extern const uint16_t PROGMEM friday[];
extern void output_allclass();

//外部中断函数
extern void Display_monday(){
for(int i=0;i<4;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,monday[i]);//宽度，高度
    delay(2000);
 }
 }
extern void Display_tuesday()
 {
   tft.pushImage(0,0,WIDTH,HIGHG,tuesday);
   delay(2000);
  }
extern void Display_wensday(){
  for(int i=0;i<2;i++){
  tft.pushImage(0,0,WIDTH,HIGHG,wensday[i]);
  delay(2000);
  }}
extern void Display_thursday()
  {
      for(int i=0;i<3;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,thursday[i]);
    delay(2000);
    }
  }
extern void Display_friday()
  {
    tft.pushImage(0,0,WIDTH,HIGHG,friday);
    delay(2000);
  }
