#include <TFT_eSPI.h>
#include "heiti_35.h"
#include "heiti_16.h"
#include "font_12.h"
#include "img1.h"
#include "img2.h"


#define WIDTH 160
#define  HIGHG 128
//定义中断引脚
const int interrupt_monday=13;
const int interrupt_tuesday=12;
const int interrupt_wensday=14;
const int interrupt_thursday=27;
const int interrupt_friday=26;

extern const int pin_arrary[5]={interrupt_monday,interrupt_tuesday,interrupt_wensday,interrupt_thursday,interrupt_friday};

extern void (*function_class[5])(void);
TFT_eSPI tft;

extern void robot_face(void);
extern void output_allclass();

//外部函数数组:

extern  void (*function_class[5])(void);
 
extern const uint16_t *monday[4];
extern const uint16_t PROGMEM tuesday[];
extern const uint16_t PROGMEM *wensday[2];
extern const uint16_t PROGMEM *thursday[3];
extern const uint16_t PROGMEM friday[];

void setup()
{ 
for(int i=0;i<5;i++){
  pinMode(pin_arrary[i],INPUT);
    attachInterrupt(pin_arrary[i],function_class[i],LOW);
  }

 tft.begin();
tft.setRotation(1);
 tft.fillScreen(TFT_BLACK);
 showstarting();
 for(int i=30;i>0;i--)
robot_face();
// tft.fillScreen(TFT_BLACK);
// output_allclass();
 tft.fillScreen(TFT_BLACK);
}
void loop()
{
    robot_face();
}
