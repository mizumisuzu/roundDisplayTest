#include "5.h"
#include <SPI.h>
#include <TFT_eSPI.h> // Hardware-specific library
#define FF22 FreeSansBold9pt7b
TFT_eSPI tft = TFT_eSPI();
TFT_eSprite spr = TFT_eSprite(&tft);
void setup() {
  // put your setup code here, to run once:
tft.init();
  tft.setRotation(1);
  spr.createSprite(240,240);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_BLACK);

}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<frames;i++)
{
  delay(40);
  spr.setFreeFont(&FF22);
  spr.setTextSize(1);
  tft.setTextColor(TFT_PINK);
  tft.pushImage(0, 20,animation_width  , animation_height, five[i]);
  tft.drawString("Sushi", 100, 170,4);
  tft.drawString("(They/Them)", 50, 190,4);
  }
 
}
