#include <TFT_eSPI.h> 

void showstarting() {
  int screenWidth = tft.width();
  int screenHeight = tft.height();
  int progressBarWidth = screenWidth - 20;
  int progressBarHeight = 20;
  int progressBarX = 10;
  int progressBarY = (screenHeight - progressBarHeight) / 2;
  int progress = 0;
  uint32_t lastUpdateTime = millis();  // 记录上一次更新时间
  int updateInterval = 25;  // 更新间隔，单位：毫秒
  
  tft.setTextSize(1);
  tft.setCursor((screenWidth - tft.textWidth("starting....")) / 2, progressBarY - 30);
  tft.setTextColor(TFT_YELLOW);
  tft.print("starting...");

  while (progress < 100) {
    // 检查是否到达更新间隔
    if (millis() - lastUpdateTime >= updateInterval) {
      lastUpdateTime = millis();  // 更新上一次更新时间
      progress += 2;  // 调整进度条增加速度
      if (progress > 100) {
        progress = 100;  // 确保不超过 100
      }
      tft.fillRect(progressBarX, progressBarY, progressBarWidth, progressBarHeight, TFT_BLACK);
      int progressWidth = map(progress, 0, 100, 0, progressBarWidth);
      tft.fillRect(progressBarX, progressBarY, progressWidth, progressBarHeight, TFT_BLUE);
    }
    // 这里可以添加其他非阻塞任务
  }
}
