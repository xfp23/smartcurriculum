#include <TFT_eSPI.h>
#include "heiti_35.h"
#include "heiti_16.h"
#include "font_12.h"
#include "img1.h"
#include "img2.h"

#define unsigned int uint

#define WIDTH 160
#define  HIGHG 128
//定义中断引脚
const int interrupt_monday=2;
const int interrupt_tuesday=4;
const int interrupt_wensday=16;
const int interrupt_thursday=13;
const int interrupt_friday=12;

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

//状态机处理
extern volatile uint state_mach=0;
//状态机执行函数：
extern void output_monday();
extern void output_tuesday();
extern void output_wensday();
extern void output_thursday();
extern void output_friday();

void setup()
{ 
for(int i=0;i<5;i++){
  pinMode(pin_arrary[i],INPUT);
    attachInterrupt(pin_arrary[i],function_class[i],FALLING);
  }

 tft.begin();
tft.setRotation(1);
 tft.fillScreen(TFT_BLACK);
 showstarting();
 delay(500);
 tft.fillScreen(TFT_BLACK);
}
void loop()
{
  switch(state_mach){
    case 1:
    output_monday();
    state_mach=0;
    break;
    case 2:
    output_tuesday();
    state_mach=0;
    break;
    case 3:
    output_wensday();
    state_mach=0;
    break;
    case 4:
    state_mach=0;
    case 5:
    state_mach=0;
    break;
    default:
    robot_face();
  }
  }
