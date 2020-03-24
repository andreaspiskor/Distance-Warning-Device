# Distance-Warning-Device

The main purpose of this device is to make people aware of the distance they need to keep away from each other because of the Corona pandemic. Not everybody knows exactly what 1,5 meters (or 6 feet) is. With this simple device you can show them. Depending on where you live 1,5 meters or 6 feet is adviced. You can easily change this in the source code (.ino file).

The device measures the distance between you and another person (or objects in general). If a person (or an object) is shorter than 1,5 meters away from you the red LED lights up and an alarm signal is played through the speaker. You can change the distance to 6 feet in code, just change the distance value from 150 to 180. To use it, press the button, wait for 1 or 2 seconds to start up and as long as you keep the button pressed the device is activated. Aim the two "eyes" to a person (or object) to check if the distance is below 1,5 meters. 

## Schema

Wiring diagram:

![alt text](https://github.com/leonvandenbeukel/Distance-Warning-Device/blob/master/Schema/Schema.png)



## Components

| Components         | x  |
| -------------                 | ----- |
|Arduino Nano          | 1x    |
|Distance sensor HC-SR04                   | 1x    |
|Piezo speaker                   | 1x    |
|9V battery                   | 1x    |
|9V battery connector                 | 1x    |
|Red LED                   | 1x    |
|Green LED                   | 1x    |
|Resistor 220 ohm                   | 2x    |
|Resistor 100 ohm                   | 1x    |
|Push button                   | 1x    |
|Prototype PCB board 50x70cm                   | 1x    |
|Wires                   |     |

## 3D Printing the case

The 3D printer I use is an Anet A8. The parts are printed with PLA, 10% infill and 0.3 setting. The print file can be found in the STL folder.

## 3D Model of the case

The case is modeled in FreeCAD. You can modify this design if you want. For those who like to use Fusion360 I've also added .STEP files which you can import in Fusion360 (I have not tried that though). 
