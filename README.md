# RGB
Hardware
  Materials Needed:
    - An RGB LED
    - ESP32 development board
    - Jumper wires
    - Resistors
      
    Hardware Setup:
    
  ![image](https://github.com/TeniBalogun/ESP32-RGB/assets/140060893/8a84b535-fcfb-414a-b9e3-c598c022865b)

Usage:
  Set up your hardware as described in the "Hardware Setup" section.
  Upload the provided code to your ESP32 board.
  The RGB LED will cycle through three different colors: Cyan (#00C9CC), Coral (#F7788A), and Green (#34A853).
  Customization
  You can modify the code to create your own color patterns or change the duration of each color display by adjusting the delay() values.

Compatibility
  This code is specifically written for ESP32 microcontroller boards, which support the analogWrite() and pinMode() functions.

Code Overview
  This code controls an RGB LED using an ESP32 microcontroller. It cycles through three colors: cyan, coral, and green. Each color is displayed 
  for one second.
  
  The pins for each color channel are defined as follows:
  
  Red Pin: GPIO23
  Green Pin: GPIO22
  Blue Pin: GPIO21
  The setup() function configures these pins as outputs, while the loop() function sets the LED to each color using the analogWrite() function 
  and waits for one second with delay().
  
  You can modify the colors and timings in the loop() function to customize the LED behavior.
  
Credits:
  This code was written by Teniola Balogun. Feel free to modify and use it according to your needs. Also some information was taken from - 
  https://esp32io.com/tutorials/esp32-rgb-led 
