# 🧤 Sign Language Translator using Arduino

This project translates basic hand gestures into readable text using flex sensors, ESP32, and an LCD. It helps bridge communication gaps between hearing-impaired individuals and others by converting sign language into visible output.

## 🛠️ Components Used

- Arduino UNO / ESP32
- Flex Sensors (5x – one for each finger)
- ESP32 (for Wi-Fi support and processing)
- LCD Display (I2C 16x2)
- Jumper wires
- Gloves
- Buzzer (optional)

## 💡 Features

- Detects hand gestures using flex sensors
- Displays corresponding characters/words on LCD
- Real-time translation of signs to readable output
- Buzzer alert for invalid/unrecognized signs (optional)
- Portable and low-power design

## 📷 Hardware Setup

Each flex sensor is attached to a finger of the glove.
→ Connected to analog pins of ESP32/Arduino
→ Output displayed on LCD via I2C


## 🚀 How to Use

1. Wear the glove with sensors connected.
2. Power the ESP32/Arduino using USB or battery.
3. LCD displays characters based on finger bends.
4. Valid gestures show text; optional buzzer sounds on unrecognized gestures.

## 📁 Folder Structure

sign-language-translator/
├── translator.ino // Arduino source code
├── README.md // Documentation
└── circuit_diagram.png // Circuit connection (optional)


## 🔌 Circuit Overview

- Flex Sensors → Analog Pins (e.g., A0-A4)
- LCD (I2C) → SDA, SCL pins
- Buzzer → Digital Pin (optional)
- Power → 5V / 3.3V depending on board

## 📄 Sample Output

LCD Line 1: SIGN LANGUAGE
LCD Line 2: LETTER: A


## ✨ Future Improvements

- Add voice output using speaker module
- Recognize full words/sentences
- Bluetooth/wireless display support
- Integration with mobile app

## 🙋 Author

**Harsh Kumar**  
GitHub: https://github.com/




