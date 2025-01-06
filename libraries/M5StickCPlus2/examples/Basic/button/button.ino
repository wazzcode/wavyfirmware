/**
 * @file button.ino
 * @author SeanKwok (shaoxiang@m5stack.com)
 * @brief M5StickCPlus2 Button Test
 * @version 0.1
 * @date 2023-12-09
 *
 *
 * @Hardwares: M5StickCPlus2
 * @Platform Version: Arduino M5Stack Board Manager v2.0.9
 * @Dependent Library:
 * M5GFX: https://github.com/m5stack/M5GFX
 * M5Unified: https://github.com/m5stack/M5Unified
 * M5StickCPlus2: https://github.com/m5stack/M5StickCPlus2
 */

#include "M5StickCPlus2.h"

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);
    StickCP2.Display.setRotation(1);
    StickCP2.Display.setTextColor(GREEN);
    StickCP2.Display.setTextDatum(middle_center);
    StickCP2.Display.setTextFont(&fonts::Orbitron_Light_24);
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.drawString("Button Test", StickCP2.Display.width() / 2,
                                StickCP2.Display.height() / 2);
}

void loop() {
    StickCP2.update();
    if (StickCP2.BtnA.wasPressed()) {
        StickCP2.Speaker.tone(8000, 20);
        StickCP2.Display.clear();
        StickCP2.Display.drawString("A Btn Pressed",
                                    StickCP2.Display.width() / 2,
                                    StickCP2.Display.height() / 2);
    }
    if (StickCP2.BtnA.wasReleased()) {
        StickCP2.Speaker.tone(8000, 20);
        StickCP2.Display.clear();
        StickCP2.Display.drawString("A Btn Released",
                                    StickCP2.Display.width() / 2,
                                    StickCP2.Display.height() / 2);
    }
    if (StickCP2.BtnB.wasPressed()) {
        StickCP2.Speaker.tone(8000, 20);
        StickCP2.Display.clear();
        StickCP2.Display.drawString("B Btn Pressed",
                                    StickCP2.Display.width() / 2,
                                    StickCP2.Display.height() / 2);
    }
    if (StickCP2.BtnB.wasReleased()) {
        StickCP2.Speaker.tone(8000, 20);
        StickCP2.Display.clear();
        StickCP2.Display.drawString("B Btn Released",
                                    StickCP2.Display.width() / 2,
                                    StickCP2.Display.height() / 2);
    }
}
