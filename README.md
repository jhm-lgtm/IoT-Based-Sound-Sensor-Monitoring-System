# IoT-Based-Sound-Sensor-Monitoring-System
An ESP32-based IoT sound monitoring system that detects sound events using a sound sensor and instantly sends Telegram notifications. Built on a custom soldered PCB for compact and reliable operation.

## Features

- Real-time sound level monitoring
- ESP32-based IoT system
- Continuous sensor data acquisition
- Cloud data visualization
- Low-cost and energy-efficient design
- Easy to deploy and expand
- Suitable for indoor and outdoor monitoring


##  Software & Tools

- Arduino IDE
- ESP32 Board Package
- Telegram 
- C++



  ##  Pin Connections

| Component | ESP32 Pin |
|-----------|-----------|
| VCC | 3.3V |
| GND | GND |
| AO | GPIO 34 |
| DO *(Optional)* | GPIO 27 |

> Change the GPIO numbers according to your actual wiring.



## Working Principle

1. ESP32 reads sound intensity from the sound sensor.
2. Sensor values are processed by the microcontroller.
3. The data is transmitted to the cloud platform over Wi-Fi.
4. Users can monitor sound levels remotely through a dashboard.



## 📷 Prototype

![image alt](https://github.com/jhm-lgtm/IoT-Based-Sound-Sensor-Monitoring-System/blob/9f6a4d6b949a6cf4154d9ad17d699ccf57b623d4/Gemini_Generated_Image_14koyy14koyy14ko.png)

---


##  Applications

- Noise pollution monitoring
- Smart cities
- Classroom monitoring
- Industrial environments
- Office spaces
- Libraries
- Home automation



##  Future Improvements

- Mobile app notifications
- Email/SMS alerts
- OLED display integration
- AI-based sound classification
- Historical data analytics
- Battery-powered operation















