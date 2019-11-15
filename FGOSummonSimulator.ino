/*FGO Summon Simulator
By Radipp*/

//Libaries
#include <M5StickC.h>

void setup() {
  //Initiation, to set up your intro screen right

  M5.begin();
  M5.IMU.Init();
  M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(TFT_BLUE);
  M5.Lcd.setTextColor(TFT_WHITE);  // Adding a background colour erases previous text automatically
  M5.Lcd.setCursor(10, 30);  
  M5.Lcd.setTextSize(3);
  M5.Lcd.print("Summon!");  
  delay(1000);
  
}

void loop() {
  // It breaks wait loop when the button is pressed
  while(1) {
    if (digitalRead(M5_BUTTON_HOME) == LOW ) {
      break;
    }
  }

  delay(1000);
  int number = random(1,1000);
  M5.Lcd.fillScreen(TFT_BLACK);
  delay (200);

  //Getting SSR gives you rainbow flash
  if (number <= 7) {
      M5.Lcd.fillScreen(TFT_RED);
      delay (500);
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (500);
      M5.Lcd.fillScreen(TFT_GREEN);
      delay (500);
      M5.Lcd.fillScreen(TFT_YELLOW);
      delay (500);
      M5.Lcd.setTextColor(TFT_BLACK); 
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("Rate-Up SSR Servant");  
  }

  else if (number <= 10) {
      M5.Lcd.fillScreen(TFT_RED);
      delay (500);
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (500);
      M5.Lcd.fillScreen(TFT_GREEN);
      delay (500);
      M5.Lcd.fillScreen(TFT_YELLOW);
      delay (500);
      M5.Lcd.setTextColor(TFT_BLACK);  
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("Spook SSR Servant");  
  }
  else if (number <= 30) {
      M5.Lcd.fillScreen(TFT_YELLOW);
      delay (100);
      M5.Lcd.setTextColor(TFT_BLACK); 
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("Rate-Up SR Servant");  
  }

    else if (number <= 40) {
      M5.Lcd.fillScreen(TFT_YELLOW);
      delay (100);
      M5.Lcd.setTextColor(TFT_BLACK);  
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("Spook SR Servant");  
  }

    else if (number <= 80) {
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (100);
      M5.Lcd.setTextColor(TFT_WHITE);  
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("SSR CE");  
  }

    else if (number <= 200) {
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (100);
      M5.Lcd.setTextColor(TFT_WHITE);  
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("SR CE");  
  }

    else if (number <= 600) {
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (100);
      M5.Lcd.setTextColor(TFT_WHITE);  
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("R Servant");  
  }

      else if (number <= 1001) {
      M5.Lcd.fillScreen(TFT_BLUE);
      delay (100);
      M5.Lcd.setTextColor(TFT_WHITE); 
      M5.Lcd.setCursor(10, 30);  
      M5.Lcd.setTextSize(2);
      M5.Lcd.print("R CE");  
  }
}
