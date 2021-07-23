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

