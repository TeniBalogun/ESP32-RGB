# RGB 

## Getting Started
1. Clone or download this repository to your local machine.
2. Set up your hardware as described in the "Hardware Setup" section below.
3. Upload the provided code (`rgb_led_code.ino`) to your ESP32 board.
4. Observe the RGB LED cycling through three different colors: Cyan (#00C9CC), Coral (#F7788A), and Green (#34A853).

## Hardware
### Materials Needed:
- An RGB LED
- ESP32 development board
- Jumper wires
- Resistors (if necessary)

### Hardware Setup
![Hardware Setup](https://github.com/TeniBalogun/ESP32-RGB/assets/140060893/8a84b535-fcfb-414a-b9e3-c598c022865b)

## Usage
1. Follow the steps in the "Getting Started" section to upload the code to your ESP32.
2. The RGB LED will cycle through the predefined colors. Each color is displayed for one second.

## Customization
You can customize the code to create your own color patterns or adjust the duration of each color display by modifying the `delay()` values.

## Compatibility
This code is specifically written for ESP32 microcontroller boards, which support the `analogWrite()` and `pinMode()` functions.

## Code Overview
This code controls an RGB LED using an ESP32 microcontroller. It cycles through three colors: cyan, coral, and green. Each color is displayed for one second.

The pins for each color channel are defined as follows:
- Red Pin: GPIO23
- Green Pin: GPIO22
- Blue Pin: GPIO21

The `setup()` function configures these pins as outputs, while the `loop()` function sets the LED to each color using the `analogWrite()` function and waits for one second with `delay()`.

You can modify the colors and timings in the `loop()` function to customize the LED behavior.

## Credits
This code was written by Teniola Balogun. Feel free to modify and use it according to your needs.

---

Some information was taken from: [ESP32 RGB LED Tutorial](https://esp32io.com/tutorials/esp32-rgb-led)
