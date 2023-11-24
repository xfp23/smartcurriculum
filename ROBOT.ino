#include <TFT_eSPI.h>
extern const uint16_t PROGMEM image_1[];
extern const uint16_t PROGMEM image_2[];
extern const uint16_t PROGMEM image_3[];
extern const uint16_t PROGMEM image_4[];
extern const uint16_t PROGMEM image_5[];
const uint16_t PROGMEM *robot[]={image_1,image_2,image_3,image_4,image_5};
extern void robot_face(void)
{
for(int i=0;i<5;i++){
 tft.pushImage(0,0,160,128,robot[i]);
 delay(50);
  }  
  for(int i=4;i<=0;i--){
    tft.pushImage(0,0,160,128,robot[i]);
    delay(75);
    }

}
extern void output_allclass(){
  for(int i=0;i<4;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,monday[i]);//宽度，高度
    delay(2000);
    }
    tft.pushImage(0,0,WIDTH,HIGHG,tuesday);
    for(int i=0;i<2;i++){
  tft.pushImage(0,0,WIDTH,HIGHG,wensday[i]);
  delay(2000);
  }
  for(int i=0;i<3;i++){
    tft.pushImage(0,0,WIDTH,HIGHG,thursday[i]);
    delay(2000);
    }
    tft.pushImage(0,0,WIDTH,HIGHG,friday);
    delay(2000);
  } 
