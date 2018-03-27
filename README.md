# LabMonitor

UROP with Prof. Joe Steinmeyer to bring out a low cost and small footprint system to monitor environmental data within a laboratory setting.

## Getting Started

For this project, we are using the ESP32 (https://www.espressif.com/en/products/hardware/esp32/overview), the BME680 environmental sensor (https://cdn-shop.adafruit.com/product-files/3660/BME680.pdf), as well as a customized PCB for a minimal barebones setup. The ESP32 and BME680 are interfaced using I2C.

### Setup (WITHOUT PCB)

Materials
* ESP32-DevKitC (https://www.espressif.com/en/products/hardware/esp32-devkitc/overview)
* Adafruit BME680 (https://learn.adafruit.com/adafruit-bme680-humidity-temperature-barometic-pressure-voc-gas)
* Jumper cables
* USB to MicroUSB cable
* Breadboard

After installing the software listed below in the Software section to program the ESP32-DevKitC with Arduino, simply follow the hookup guide outlined in the Adafruit tutorial linked above in the materials list.

### Setup 

Materials
* ESP-Wroom-32 (https://www.espressif.com/en/products/hardware/esp-wroom-32/overview)
* BME680 (https://www.bosch-sensortec.com/bst/products/all_products/bme680)
* Sparkfun FTDI (https://www.sparkfun.com/products/9716)
* Customized PCB
* 2 Buttons (Reset and Prgm)
* Wires
* Breadboard

After installing the software listed below in the Software section to program the ESP-Wroom-32, (

Notes
* Use 3.3V on the FTDI so cut the 5V connection and solder the 3.3V connection
* To program the ESP-Wroom-32, press Reset, press Prgm, release Reset, and release Prgm and upload the sketch
* When using wifi, the FTDI driver cannot supply enough current, so power using batteries or a lab supply

### Software

Programming the ESP32 with Arduino
https://github.com/espressif/arduino-esp32

BME680 Driver
https://github.com/BoschSensortec/BME680_driver

KiCad (If customizing PCB)
http://kicad-pcb.org/

MQTT
https://techtutorialsx.com/2017/04/24/esp32-publishing-messages-to-mqtt-topic/

### References
http://esp32.net/
https://www.espressif.com/sites/default/files/documentation/esp32_hardware_design_guidelines_en.pdf
https://www.espressif.com/sites/default/files/documentation/esp-wroom-32_datasheet_en.pdf
https://3.bp.blogspot.com/-zyGHuqISKPs/WMx4MWPAZOI/AAAAAAAAAMw/xxDcpwVSq0garkCG5n8yQfn4X7r94zMHACLcB/s1600/ESP%2B32%2BSchematic.PNG
https://cdn-shop.adafruit.com/product-files/3660/BME680.pdf
https://learn.adafruit.com/adafruit-bme680-humidity-temperature-barometic-pressure-voc-gas/arduino-wiring-test
https://www.14core.com/wiring-and-flashing-programming-esp-32-esp32s-with-usb-ttl-uart/
https://github.com/sparkfun/SparkFun-KiCad-Libraries
https://www.wayneandlayne.com/blog/2013/02/27/kicad-tutorial-gerber-file-generation/
https://techtutorialsx.com/2017/04/24/esp32-publishing-messages-to-mqtt-topic/

