#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600); // Initialize the Serial monitor for debugging

  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);


 
    display.setCursor(10, 10);
    display.print("<HTML>");
     display.setCursor(10, 30);
    display.print("<H1> SUCHI </H1>"); // Print the received string on the display
     display.setCursor(10, 50);
     display.println("</HTML>");
    
    display.display(); // Update the display to show the text

  
}

void loop() {

 
  
}
