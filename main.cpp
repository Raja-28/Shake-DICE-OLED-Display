#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int vibrationPin = 2;
const int buttonPin = 3; 
const int buzzerPin = 4;  
int diceValue = 0;
bool rolling = false;

void setup() {
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    while (true);
  }
  

  pinMode(vibrationPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  display.clearDisplay();
  display.display();
  
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.println("Shake Dice Game");
  display.setCursor(0, 30);
  display.println("Press Button or Shake");
  display.display();
  
  delay(2000);
}

void loop() {
  int vibrationState = digitalRead(vibrationPin);
  int buttonState = digitalRead(buttonPin);

  if (vibrationState == HIGH || buttonState == LOW) {
    rollDice();
  }

  
  if (rolling) {
    displayDice();
  }

  delay(200); 
}

void rollDice() {
  rolling = true;
  diceValue = random(1, 7); 
  tone(buzzerPin, 1000, 200); 
}

void displayDice() {
  
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(30, 20);
  display.print("Dice: ");
  display.println(diceValue);
  display.display();
}
