#include <TFT_eSPI.h>
extern void Display_monday();
extern void Display_tuesday();
extern void Display_wensday();
extern void Display_thursday();
extern void Display_friday();

 void (*pointer_monday)(void)=Display_monday;
 void (*pointer_tuesday)(void)=Display_tuesday;
 void (*pointer_wensday)(void)=Display_wensday;
 void (*pointer_thursday)(void)=Display_thursday;
 void (*pointer_friday)(void)=Display_friday;

 extern void (*function_class[5])(void)={pointer_monday,pointer_tuesday,pointer_wensday,pointer_thursday,pointer_friday};
