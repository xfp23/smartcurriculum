#include <TFT_eSPI.h>

extern const int pin_arrary[5];
extern const uint16_t *monday[4];
extern const uint16_t PROGMEM tuesday[];
extern const uint16_t PROGMEM *wensday[2];
extern const uint16_t PROGMEM *thursday[3];
extern const uint16_t PROGMEM friday[];
extern void output_allclass();

extern volatile uint state_mach;

//外部中断函数
extern void Display_monday(){
    state_mach=1;
 }
 
extern void Display_tuesday()
{
   state_mach=2;
}
extern void Display_wensday(){
  state_mach=3;
  }
extern void Display_thursday()
{
    state_mach=4;
}
extern void Display_friday()
  {
    state_mach=5;
  }
 extern void output_monday()
  {
    for(int i=0;i<4;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,monday[i]);//宽度，高度
    delay(2000);
    //tft.fillScreen(TFT_BLUE);
    }}
 extern void output_tuesday()
    {
      tft.pushImage(0,0,WIDTH,HIGHG,tuesday);
   delay(2000);
   //tft.fillScreen(TFT_BLUE);
     }
extern void output_wensday()
     {
      for(int i=0;i<2;i++){
  tft.pushImage(0,0,WIDTH,HIGHG,wensday[i]);
  delay(2000);
  //tft.fillScreen(TFT_BLUE);
     }}
extern void output_thursday()
     {
      for(int i=0;i<3;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,thursday[i]);
    delay(2000);
   // tft.fillScreen(TFT_BLUE);
     }}
extern void output_friday()
     {
      tft.pushImage(0,0,WIDTH,HIGHG,friday);
    delay(2000);
   // tft.fillScreen(TFT_BLUE);
      }
