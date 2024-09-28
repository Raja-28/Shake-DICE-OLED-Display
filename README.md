## Shake-DICE-OLED-Display


## Overview

This project simulates a dice roll using an Arduino. The dice roll is triggered by shaking a vibration sensor or pressing a tactile push button. The dice result is then displayed on an OLED display, and a buzzer plays a sound to indicate the roll. This project is a fun interactive way to simulate rolling a dice using electronics.

## Components Used
- Arduino Nano/Uno
- OLED Display (128x64)
- Push Tactile Button
- Vibration Sensor
- Buzzer
- Breadboard
- Jumper Wires

## Wiring

### OLED Display
- `VCC` -> 5V
- `GND` -> GND
- `SCL` -> A5
- `SDA` -> A4

### Vibration Sensor
- `OUT` -> Pin 2
- `GND` -> GND
- `VCC` -> 5V

### Push Button
- One side to `Pin 3`
- Other side to `GND`

### Buzzer
- `+` -> Pin 4
- `-` -> GND

## How It Works

1. **Dice Roll Trigger**: You can roll the dice in two ways:
   - By **shaking** the vibration sensor.
   - By **pressing** the push button.
2. **Random Dice Value**: Each shake or button press generates a random value between 1 and 6, simulating a dice roll.
3. **OLED Display**: The result of the dice roll is displayed on the OLED screen.
4. **Buzzer Feedback**: The buzzer produces a sound to indicate the dice roll.

## Code Explanation

- **OLED Display**: The `Adafruit_SSD1306` library is used to interface with the OLED display. The dice value is shown after each roll.
- **Vibration Sensor**: The vibration sensor detects a shake, which triggers a new dice roll.
- **Push Button**: The button serves as an alternative trigger to the vibration sensor.
- **Buzzer**: A tone is played for 200ms to give feedback that the dice was rolled.

## Setup Instructions

1. Connect all the components as per the wiring diagram above.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. After powering on, you will see a welcome message on the OLED display.
4. Roll the dice by shaking the vibration sensor or pressing the button. The dice result will be displayed on the screen, and the buzzer will beep.

## Customization

- **Dice Range**: The dice currently generates a value between 1 and 6. You can modify this by changing the `random(1, 7)` function.
- **Sound**: You can adjust the sound frequency and duration of the buzzer tone in the `tone()` function.
- **Display**: You can modify the text size or add more information to the OLED display.

## Application Ideas

- **Board Game Dice**: This project can replace physical dice for board games, providing a digital way to generate random values.
- **Shake Detection**: You can use the vibration sensor in other projects where motion or shaking needs to be detected.
- **Interactive Games**: Use this concept to develop other games or interactive displays.

## Libraries Required

- **Adafruit_GFX**: A graphics library used to display text and images on the OLED.
- **Adafruit_SSD1306**: A library for controlling OLED displays via I2C.

## License

This project is licensed under the MIT License.
