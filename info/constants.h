#ifndef constants_H
#define constants_H

// Colors
#define REDCOLOR 0xF800 // Red
#define WHITECOLOR 0xFFFF // White
#define BLACKCOLOR 0x0000 // Black
#define GREENCOLOR 0x07E0 // Green
#define BACKGROUNDCOLOR 0x0215 // Background
#define TEXTCOLOR 0xFCFF // Textcolor

// Constants
const char* menuItems[] = {"Settings", "Wi-Fi", "Bluetooth", "TV", "Features"}; // Items mainlist
const int menuSize = sizeof(menuItems) / sizeof(menuItems[0]); // Size of items mainlist
int currentIndex = 0;

#endif
