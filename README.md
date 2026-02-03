# 🚦 Smart Traffic Signal Management System (Arduino + Ultrasonic Sensors)

This project implements a **Smart Traffic Signal Management System** using Arduino Uno and ultrasonic sensors to dynamically control traffic signal timings based on real-time vehicle density. The system automatically prioritizes congested lanes by increasing green light duration, helping reduce traffic jams, waiting time, and fuel wastage.

This project is suitable for **IoT mini projects, smart city applications, academic demonstrations, and traffic automation prototypes**.

---

## 📌 Project Objectives

- Reduce traffic congestion at intersections  
- Improve traffic flow efficiency  
- Minimize waiting time for vehicles  
- Reduce carbon emissions caused by idle vehicles  
- Demonstrate real-time sensor-based automation  

---

## 🧠 System Overview

The system uses **four ultrasonic sensors (HC-SR04)** placed at different lanes of an intersection. These sensors continuously measure the distance between vehicles and the signal pole. The Arduino processes this data and adjusts the signal timing accordingly.

LEDs are used to simulate traffic lights in the prototype.

---

## 🔧 Hardware Components

| Component | Quantity |
-----------|----------
Arduino Uno R3 | 1  
HC-SR04 Ultrasonic Sensor | 4  
LEDs (Traffic Lights) | 4  
220Ω Resistors | 4  
Jumper Wires | As Required  
USB Cable | 1  
Power Supply | 5V  

---

## 💻 Software Requirements

- Arduino IDE  
- USB Driver   

---

## ⚙️ Working Principle

1. Ultrasonic sensors emit ultrasonic waves.  
2. Reflected waves are received back by the sensor.  
3. Arduino calculates distance using time delay.  
4. Traffic density is estimated based on distance.  
5. Signal timing is adjusted automatically.  
6. LEDs turn ON/OFF based on priority lane.  

---

## 🚀 Advantages

- Low cost implementation  
- Easy to modify and expand  
- Energy efficient  
- Real-time automation  
- Reliable sensor-based detection 

---

## 👨‍💻 Author
Developed By Pranav Thanavel

