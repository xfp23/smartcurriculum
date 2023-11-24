'''c
#include <TFT_eSPI.h> 

void showstarting() {
  int screenWidth = tft.width();
  int screenHeight = tft.height();
  int progressBarWidth = screenWidth - 20;
  int progressBarHeight = 20;
  int progressBarX = 10;
  int progressBarY = (screenHeight - progressBarHeight) / 2;
  int progress = 0;
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE);
  tft.setCursor((screenWidth - tft.textWidth("starting....")) / 2, progressBarY - 30);
  tft.print("starting.....");

  while (progress < 100) {
    progress += 1;
    tft.fillRect(progressBarX, progressBarY, progressBarWidth, progressBarHeight, TFT_BLACK);
    int progressWidth = map(progress, 0, 100, 0, progressBarWidth);
    tft.fillRect(progressBarX, progressBarY, progressWidth, progressBarHeight, TFT_WHITE);
    delay(25); // 调整延迟以控制加载动画的速度
  }
}
