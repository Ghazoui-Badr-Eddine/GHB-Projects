
# Arduino Laser based Security System Prototype
The objective of this project is to study, design and implement a prototype of a security system based on the KY-008 laser and the laser sensor.
It is a security system that detects the intruder if he passes through the laser light, in which case an alarm will be triggered to alert the owner of the building.
 

## Components
### KY-008 Laser
This module is a red laser transmitter for Arduino, it emits with a wavelength of 650nm and its working voltage is 5V.

<img src="https://user-images.githubusercontent.com/58095725/209869718-1288e5b9-e25d-41a5-ba5c-daf3b9e2f385.png" width="300" height="300">

#### Technical characteristics
- Operating voltage: 5V
- Consumption: 30mA
- Laser wavelength: 650 nm
- Power: 5mW(laser class 3A)
- Dimensions: 15 x 24 mm
- Laser diameter: 6mm
- Weight: 3g

We only need to power this device to GND and power on as shown in the image below:

<img src="https://user-images.githubusercontent.com/58095725/209869853-75d2966c-1419-4068-9447-4e61f12fd605.png" width="300" height="100">

### Laser Receiver Module
<img src="https://user-images.githubusercontent.com/58095725/209869872-9eaaad6c-d023-4a64-8c6e-de495a84dcbb.png" width="300" height="300">

The laser receiver module, which has either a high output level when there is laser irradiation, or a low output level when there is no laser irradiation.

The detection module also has three pins; the "VCC" pin of the module is connected to the "5V" pin of the Arduino and the ground of the module is connected to the ground of the Arduino. Finally, the “OUT” signal pin of the module is connected to pin “3”.

In case of the absence of this module, we can use a light sensor


### KY-012 Active Buzzer Module
<img src="https://user-images.githubusercontent.com/58095725/209869905-c35c5888-1f57-4bb5-8f67-767220ffa8a1.png" width="300" height="300">
An active buzzer does not require a square wave to operate, unlike the KY-006 passive module. Simply apply a voltage of at least 3.3 Vdc to it for it to work.

The buzzer is a component consisting essentially of a lamella reacting to the piezoelectric effect. Piezoelectricity is the property possessed by certain minerals of deforming when subjected to an electric field. This phenomenon is reversible; if we deform this mineral, it produces electrical energy. In the Arduino universe, the buzzer is mainly used to emit a sound.


### Arduino Due Module
<img src="https://user-images.githubusercontent.com/58095725/209869917-a4b8e1c4-0614-4af7-b569-c967be266dcc.png" width="350" height="200">

You can use any type of arduino for this project, in our case we used an Arduino Due.

The Arduino Due board is the first Arduino board based on 32bit ARM architecture.
As shown in the image above, the Arduino Due board has two USB connectors: the programming port and the native USB Port. Both ports can be used for programming. The native port also serves as a USB port for connected peripherals such as keyboards and smartphones.


### Bread bord
<img src="https://user-images.githubusercontent.com/58095725/209869934-a790a35c-ec21-43d7-bb80-1f0782a4017d.png" width="400" height="300">

A breadboard or prototyping board is a device that allows you to prototype an electronic circuit and test it. The advantage of this system is to be completely reusable, because it does not require welding. This last point distinguishes breadboards from veroboards, perfboards or printed circuits which are themselves used to make permanent prototypes and which we will therefore be less able to disassemble. In addition, a wide variety of components can be wired to a breadboard in order to create electronic circuits, from the simplest circuit to a microprocessor.

## Implementation

The image below shows the architecture of the system and the connection of all the components together
![image](https://user-images.githubusercontent.com/58095725/209869951-45f3db74-398a-4b68-a962-c10ccee09746.png)


## Code

We need to install the Arduino software in order to use the code and to transfer it to the Arduino ship.

[The system code](Code/Security_System.ino)

