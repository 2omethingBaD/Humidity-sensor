# Snake Enclosure Humidity Controller
## Overview
This repository contains the Arduino code and circuit diagram for a customized humidity controller designed for a snake enclosure. The project utilizes a temperature and humidity sensor to activate a misting system when the humidity drops below a specified percentage. The current humidity percentage, temperature in Fahrenheit, and misting motor status are displayed on a 0.96-inch OLED screen.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231119_002036.jpg?raw=true)


## Project Evolution
### Initial Setup
The project originated from repurposing components from a pre-existing humidity controller, which was timer-based rather than the desired sensor-based approach.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231112_144441.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231112_144403.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231112_144813.jpg?raw=true)
The power cord, moter, and casing where thaken from this device.

### Circuit Details 
he circuit is powered by two USB power cords (one for the motor, one for the microcontroller). Components include a TISEKER Mini Nano V3.0 ATmega328P Microcontroller Board, a DHT22 temperature and humidity sensor, a 0.96-inch OLED display, and an active buzzer for power indication.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_214153.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_213942.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_214028.jpg?raw=true)

### Housing Modifications
To integrate the new components, modifications were made to the existing casing. Custom cutouts and supports were implemented, with specific adjustments for the sensor placement, circuit board fitting, and screen installation.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_223632.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_223828.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231118_223611.jpg?raw=true)


## Completion and Deployment
### Final Touches
Stickers were strategically applied for securing the screen and enhancing the design. The dual USB power cords were connected to a wall adaptor, which, in turn, was plugged into a smart home plug for remote control capabilities.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231119_004143.jpg?raw=true)

### Integration with Snake Enclosure
The device was reconnected to the snake enclosure, where the sensor was routed through a cutout in the back. The inlet and outlet for the water were reconnected to the reservoir and misting spigots.
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231209_171022.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231209_172133.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Humidity-sensor/blob/main/img/20231209_171045.jpg?raw=true)

