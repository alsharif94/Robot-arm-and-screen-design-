# Robot-arm-and-screen-design-


In this task, we will design two arms for the robot and operate the screen for the robot that represents the face of the robot. Initially, we will design the robotic arms by using six servo motors. We will determine the initial position of each servo motor, depending on what the mechanical engineer will determine. In the second part of the mission, we will learn about a new type of sensor, the ultrasonic sensor, which enables us to calculate distances by using ultrasound waves, and this will benefit us in sensing the objects near the robot, and accordingly the robot will interact with nearby objects. In the last section, we will learn how to connect the microcontroller to the Bluetooth to turn on the screen of the robot. This will give us many advantages, which is to reduce the wires connected to the microcontroller and other advantages.



Design of the two arms of the robot


![image](https://user-images.githubusercontent.com/85449693/126074563-3b24258a-4240-4e1b-923a-6bd34e2b04f6.png)


I will design the arms of the robot by using the servo motor. I will use six servo motors distributed on the arms. We will choose an initial angle for the servo motor depending on the information of the electrical engineer. I will use the Arduino as a microcontroller as in the previous tasks and Protues as a simulation program to make sure that the program works before installing and connecting the electronic circuit


•	The schematic diagram 

![image](https://user-images.githubusercontent.com/85449693/126074582-263822fb-5c56-4ac7-aa2d-3a0e5ba08928.png)


Basic tools
1.	Six servo motors


![image](https://user-images.githubusercontent.com/85449693/126074603-fd2e4ecc-d7bf-4b16-a25d-ed6cc1fbe307.png)



2.	Microcontroller (Arduino)

![image](https://user-images.githubusercontent.com/85449693/126074617-1d9bca39-9709-4257-9bd9-aa819ce9edb7.png)




3.	Battery 

![image](https://user-images.githubusercontent.com/85449693/126074622-732a614b-92b8-4161-ba86-1d2ae05a3ac5.png)




4.	Wires 


![image](https://user-images.githubusercontent.com/85449693/126074629-7b866bea-d32a-4f0d-a542-e9079b287318.png)



5.	Push button(optional)

![image](https://user-images.githubusercontent.com/85449693/126074637-a523bc43-c24d-4e53-a38e-4baa48121ce2.png)




HC-SR04 Ultrasonic Sensor


![image](https://user-images.githubusercontent.com/85449693/126735480-dde366f2-cc03-4299-bb09-ed5b3b1f1134.png)


•	This type of sensor relies on ultrasound waves with a frequency greater than 20kHz 
•	It can cover a wide range of up to 13 feet 
•	Inexpensive and runs on low power


![image](https://user-images.githubusercontent.com/85449693/126735509-7abcda60-fb1d-461c-9b91-66a6ffcecf3f.png)


The specification 



![image](https://user-images.githubusercontent.com/85449693/126735542-7225e9b2-64c6-410d-b31d-e317997f8b38.png)



 Ultrasonic Sensor components

•	VCC: power source of the sensor is connected to the 5V pin of the Arduino

•	Trig (Trigger): is used to trigger the ultrasonic sound pulses.

•	Echo: produces a pulse when the reflected signal is received, and the length of the pulse is proportional to the time taken to detect the transmitted signal.

•	GND(Ground): It must be connected to the Arduino ground



Working principle


A ten-microsecond pulse is applied to the trigger pin. As a result, the sensor sends a sound impulse consisting of eight pulses with a frequency is 40kHz. Since the frequency is 40kHz, which makes the receiver distinguish between it and other sound waves of the external environment. At the same time, the echo pin is in the high so that the sensor is ready to receive the signal, and the timeout for the signal to return is 38ms 


![image](https://user-images.githubusercontent.com/85449693/126735607-577e1619-5466-4bad-93ca-839db0eac5e6.png)


Interfacing Bluetooth HC-05 module with Arduino 


•	Pin function 

![image](https://user-images.githubusercontent.com/85449693/126840088-f42982c9-8bf5-4ae2-877a-ecc85e523c5c.png)

![image](https://user-images.githubusercontent.com/85449693/126840178-7543f0b2-44f2-4d19-a26d-d1fd51210ba1.png)


•	Schematic diagram 

![image](https://user-images.githubusercontent.com/85449693/126840228-4db499d5-0579-4385-8ea8-99f0ecaa6ae3.png)



•	The main goal
The main goal of the tasks is to move the robot arm and turn on the screen if an object is standing next to the robot for three seconds


•	Schematic diagram 

![image](https://user-images.githubusercontent.com/85449693/126840265-3062680f-41e2-439e-9468-1470b9663ab4.png)



1.	Six servo motors

![image](https://user-images.githubusercontent.com/85449693/126840333-76d5b693-f770-41a5-8e4c-c95e92fab5c2.png)




2.Two	Microcontrollers (Arduino)

![image](https://user-images.githubusercontent.com/85449693/126840402-f7c67159-4e28-4042-8d1c-0a84d38d098a.png)




3.	Battery 

![image](https://user-images.githubusercontent.com/85449693/126840422-0c55b53d-77eb-4a31-88db-0f408f8e007d.png)



4.	Wires 

![image](https://user-images.githubusercontent.com/85449693/126840431-75316900-ba0f-488a-a8f5-d27985c3b675.png)



5.	Two HC-05 Bluetooth modules 

![image](https://user-images.githubusercontent.com/85449693/126840454-d20d8eba-9c04-4bc2-8459-c47518fa35e9.png)




6.	HC-SR04 ultrasonic sensor


![image](https://user-images.githubusercontent.com/85449693/126840471-ae3dc858-acef-40c4-b4b0-8db24dfe789f.png)










