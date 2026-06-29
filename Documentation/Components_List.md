\# 🔧 Components Used



The \*\*Solar-Powered Autonomous IoT Lawn Mower\*\* is built using the following hardware components.



\---



\## 🧠 Control \& Communication



| Component              | Qty | Description                                                                                   |

| ---------------------- | :-: | --------------------------------------------------------------------------------------------- |

| Arduino Uno            |  1  | Main controller responsible for processing sensor data and controlling all system operations. |

| HC-05 Bluetooth Module |  1  | Provides wireless communication for manual control and system monitoring.                     |



\---



\## 🔋 Power Management



| Component                  | Qty | Description                                                        |

| -------------------------- | :-: | ------------------------------------------------------------------ |

| 12V Li-ion Battery         |  1  | Supplies power to the Arduino and low-power electronic components. |

| 12V Lead Acid Battery      |  1  | Dedicated power source for high-current drive motors.              |

| Solar Panel (10V/24V)      |  1  | Converts solar energy into electrical power for battery charging.  |

| DC-DC Buck-Boost Converter |  1  | Maintains stable voltage levels from the solar charging system.    |

| 3S 18650 Charging Module   |  1  | Ensures safe charging and battery protection for Li-ion cells.     |



\---



\## ⚙️ Motion \& Cutting System



| Component          | Qty | Description                                                      |

| ------------------ | :-: | ---------------------------------------------------------------- |

| L298N Motor Driver |  2  | Controls the speed and direction of the drive motors.            |

| 12V Gear Motor     |  4  | Drives the four wheels of the mower.                             |

| 12V DC Motor       |  1  | Rotates the grass-cutting blade.                                 |

| Servo Motor        |  1  | Controls steering or rotates the ultrasonic sensor for scanning. |



\---



\## 📡 Sensors



| Component                 | Qty | Description                                                 |

| ------------------------- | :-: | ----------------------------------------------------------- |

| HC-SR04 Ultrasonic Sensor |  1  | Detects nearby obstacles and enables autonomous navigation. |



\---



\## 🔌 Assembly Components



| Component    |     Qty     | Description                               |

| ------------ | :---------: | ----------------------------------------- |

| Breadboard   |      1      | Used for circuit prototyping and testing. |

| Jumper Wires | As Required | Connects all electronic modules together. |



\---



\# 📋 Bill of Materials (BOM)



| Category                    | Number of Components |

| --------------------------- | :------------------: |

| Control \& Communication     |           2          |

| Power Management            |           5          |

| Motion \& Cutting            |           4          |

| Sensors                     |           1          |

| Assembly Components         |           2          |

| \*\*Total Unique Components\*\* |        \*\*14\*\*        |



\---



\# 🚀 Hardware Overview



```

&#x20;                   Solar Panel

&#x20;                        │

&#x20;         DC-DC Buck-Boost Converter

&#x20;                        │

&#x20;               3S Charging Module

&#x20;                        │

&#x20;       ┌────────────────┴────────────────┐

&#x20;       │                                 │

&#x20;12V Li-ion Battery             12V Lead Acid Battery

&#x20;       │                                 │

&#x20;       │                          L298N Motor Drivers

&#x20;       │                                 │

&#x20;  Arduino Uno ────────► 4 Gear Motors

&#x20;       │

&#x20;       ├────────► Bluetooth Module

&#x20;       ├────────► Ultrasonic Sensor

&#x20;       ├────────► Servo Motor

&#x20;       └────────► Cutting DC Motor

```



\---



\# 📌 Key Features



\*  Solar-powered battery charging

\*  Autonomous obstacle detection

\*  Bluetooth manual control

\*  Four-wheel drive system

\*  High-speed grass cutting motor

\*  Dual battery power architecture

\*  Stable power regulation using Buck-Boost converter



