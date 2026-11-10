#  Arduino-Based IR Sensor Object Detection and Buzzer Alert System

### Object Detection with Automatic Audio Alert Using Arduino UNO

---

##  About the Project

This project uses an **Infrared (IR) Sensor** and Arduino UNO to detect nearby objects and provide an audible alert using a buzzer.

The IR sensor detects the presence of an object and sends a digital signal to the Arduino. When an object is detected, the buzzer turns ON and the Serial Monitor displays "OBJECT DETECTED". When no object is detected, the buzzer remains OFF and the Serial Monitor displays "NO OBJECT".

---

##  Features

- **Object Detection:** Detects nearby objects using an IR sensor.
- **Automatic Buzzer Alert:** Activates the buzzer when an object is detected.
- **Serial Monitor Display:** Displays object detection status.
- **Real-Time Response:** Responds to changes in sensor output.
- **Automatic Control:** Turns OFF the buzzer when no object is detected.
- **Continuous Monitoring:** Checks the sensor output every second.

---
## 🔧 Components Required

| S.No | Component |
|---|---|
| 1 | Arduino UNO |
| 2 | IR Sensor Module |
| 3 | Buzzer |
| 4 | Breadboard |
| 5 | Jumper Wires |
| 6 | USB Cable |

##  Working Principle

1. The IR sensor emits infrared light to detect nearby objects.
2. The sensor sends a digital signal to Arduino pin 3.
3. Arduino reads the sensor output using `digitalRead()`.
4. When the sensor output is LOW, the Arduino displays **"OBJECT DETECTED"** and activates the buzzer.
5. When the sensor output is HIGH, it displays **"NO OBJECT"** and turns OFF the buzzer.
6. The process repeats every 1 second.

---

##  Expected Output

**When an object is detected:**
```text
OBJECT DETECTED
```

**When no object is detected:**
```text
NO OBJECT
```

---

## 💻 Arduino Source Code

[View IR Sensor and Buzzer Arduino Code](./IR_sensor_buzzer.ino)

---

##  Learning Outcomes

- Understanding the working principle of an IR sensor.
- Learning IR sensor and buzzer interfacing with Arduino UNO.




