# CryoThermX-Electronic-Hot-Cold-Compression-Device
An electronic hot and cold compression device designed to provide safe, instant, and controlled thermal therapy for household pain relief, integrating embedded systems, power electronics, PCB design, and enclosure design.

🔥 CryoThermX – Electronic Hot & Cold Compression Device
<img width="1181" height="510" alt="image" src="https://github.com/user-attachments/assets/c581fbb3-6f26-425c-b25e-06fc647ee595" />
<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/8e4c1a33-6d2a-44c4-97ff-f64f7fe7e46e" />





## 📌  Overview
---

CryoThermX is an electronic hot and cold compression device developed to address the inconvenience, inefficiency, and safety risks of conventional thermal therapy methods such as ice packs and hot water bags.
The device enables instant switching, precise temperature control, and safe household use, making thermal therapy more accessible and reliable.

## ❓ Problem Statement
---

Traditional hot and cold compression methods:

Require manual preparation (boiling water / freezing)

Lack precise temperature control

Cool down or heat up rapidly

Pose risks of burns or frostbite
As a result, users often avoid thermal therapy even when medically beneficial.

## 💡 Proposed Solution
---

An automated, handheld hot and cold compression device powered by household AC supply, capable of:

Controlled heating and cooling

Safe temperature limits

Easy mode switching

Ergonomic skin contact through a biomedical-grade enclosure

## ⚙️ Key Features
---



Hot and cold compression modes (mutually exclusive)

Embedded control using ATmega328P / Arduino

Power regulation from 230V AC to multiple DC rails

Temperature sensing and feedback control

OLED / LCD display for real-time temperature monitoring

Safety mechanisms to prevent overheating and prolonged exposure

## 🧠 System Architecture
---
<img width="942" height="651" alt="image" src="https://github.com/user-attachments/assets/1d149945-dfa4-4be2-b1d9-8483df6d7653" />


Power Electronics: Custom AC–DC regulation circuit (LTSpice simulated)

Control Unit: ATmega328P microcontroller

Thermal Module: Peltier-based heating and cooling

User Interface: Button-based control + display

Mechanical Design: Ergonomic enclosure (SolidWorks)

## 🧪 Current Development Status
---

✅ Hot compression mode: Fully functional

✅ Cold compression mode: Fully functional upto 4 degree Celcius
### 🛠 PCB design: Completed (Altium)
<img width="412" height="610" alt="image" src="https://github.com/user-attachments/assets/60944303-2896-40eb-969f-c1966cc7ab74" />


### 🛠 Enclosure design: Completed (SolidWorks)
<img width="351" height="303" alt="image" src="https://github.com/user-attachments/assets/4cc0529e-ae8b-4b88-975a-cb052928c5d6" />


## 🧩 Challenges & Engineering Decisions
---

Includes 2 peltier modules seperately for hot and cold conditions

Stable operation from household AC supply

Thermal safety for prolonged skin contact

Trade-off analysis between Peltier vs compressor-based cooling

## 📁 Repository Contents
---

Circuit diagrams and simulations

Firmware source code

PCB and enclosure design files

Project report and presentation

Prototype images and videos

## 📜 Regulatory & Safety Considerations
---

Low-voltage operation for user safety

Software-controlled temperature limits

Designed with future FDA/medical compliance in mind

### 🚀 Future Work



Clinical validation and compliance assessment

## 👥 Team
---

Team CryoThermX / PulseTronic
Undergraduate Engineering Project – Biomedical Engineering
<img width="1342" height="701" alt="image" src="https://github.com/user-attachments/assets/c41306f6-683d-4f51-9864-0f735815f5c2" />



