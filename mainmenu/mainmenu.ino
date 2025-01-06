#include <M5StickCPlus2.h>
#include "../info/constants.h"

void drawMenu() {
    M5.Lcd.fillScreen(BACKGROUNDCOLOR);
    for (int i = 0; i < menuSize; i++) {
        if (i == currentIndex) {
            M5.Lcd.setTextColor(WHITECOLOR);
            M5.Lcd.drawString(">", 5, 20 + i * 20);
        } else {
            M5.Lcd.setTextColor(TEXTCOLOR);
        }
        M5.Lcd.drawString(menuItems[i], 20, 20 + i * 20);
    }
}

void setup() {
    M5.begin();
    M5.Lcd.setRotation(3); 
    M5.Lcd.setTextSize(2);
    M5.Lcd.setTextColor(TEXTCOLOR);
    drawMenu();
}


void loop() {
    M5.update();
    if (M5.BtnB.wasPressed()) {
        currentIndex = (currentIndex + 1) % menuSize;
        drawMenu();
    }
    if (M5.BtnA.wasPressed()) {
        M5.Lcd.fillScreen(BACKGROUNDCOLOR); 
        M5.Lcd.setTextColor(WHITECOLOR);
        // Plug
        int textWidth = M5.Lcd.textWidth(String("Loading ") + menuItems[currentIndex]);
        int screenWidth = M5.Lcd.width();
        int xPosition = (screenWidth - textWidth) / 2; 
        M5.Lcd.drawString(String("Loading ") + menuItems[currentIndex], xPosition, M5.Lcd.height() / 2 - 10);
        delay(1000);

        drawMenu();
    }
}