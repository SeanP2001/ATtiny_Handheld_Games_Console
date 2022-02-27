
#include <SSD1306_minimal.h>

#include "Button.h"

#define actionButtons A3
#define directionButtons A2

uint8_t action = 0;
char actionStr[3];
uint8_t dir = 0;
char dirStr[3];

Button UP(directionButtons, 67, 78);
Button DOWN(directionButtons, 150, 200);
Button LEFT(directionButtons, 230, 255);
Button RIGHT(directionButtons, 50, 67);

Button UP_LEFT(directionButtons, 93, 150);
Button UP_RIGHT(directionButtons, 78, 93);
Button DOWN_LEFT(directionButtons, 6, 49);
Button DOWN_RIGHT(directionButtons, 200, 230);

Button A(actionButtons, 125, 255);
Button B(actionButtons, 20, 125);

SSD1306_Mini oled;

 

void setup() {
  oled.init(0x3C);
}

void loop() {

  action = analogRead(actionButtons);
  sprintf(actionStr, "%i",action);
  dir = analogRead(directionButtons);
  sprintf(dirStr, "%i",dir);

  oled.clear();
  
  oled.cursorTo(0, 1);
  oled.printString("Action: ");
  oled.printString(actionStr);
  
  oled.cursorTo(0, 2);
  oled.printString("Direction: ");
  oled.printString(dirStr);

  oled.cursorTo(0, 3);
  
  if (UP.isPressed())
    oled.printString("UP");
  if (DOWN.isPressed())
    oled.printString("DOWN");
  if (LEFT.isPressed())
    oled.printString("LEFT");
  if (RIGHT.isPressed())
    oled.printString("RIGHT");

  if (UP_LEFT.isPressed())
    oled.printString("UP_LEFT");
  if (UP_RIGHT.isPressed())
    oled.printString("UP_RIGHT");
  if (DOWN_LEFT.isPressed())
    oled.printString("DOWN_LEFT");
  if (DOWN_RIGHT.isPressed())
    oled.printString("DOWN_RIGHT");

  if (A.isPressed())
    oled.printString("A");
  if (B.isPressed())
    oled.printString("B");
  
  delay(500);
}
