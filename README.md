<p align="center">
  <img src="assets/traffic_light_github_banner.png" width="100%" alt="Project Banner"/>
</p>

# Kids’ Traffic Light Routine Prototype  
*A human-centered embedded systems project for behavioral routines*

---

## 📄 Case Study (PDF)
For a full technical and UX breakdown:  
👉 **[Traffic_Light_Case_Study.pdf](docs/Traffic_Light_Case_Study.pdf)**

---

# 🔍 Project Overview
This project modifies a small battery-powered traffic light toy into a **visual readiness system for children**, using embedded-system principles and a future-facing IoT architecture.  

The design uses a familiar **Red → Yellow → Green** pattern to support ADHD-friendly morning and evening routines while demonstrating:

- microcontroller-based LED control  
- finite state machine (FSM) design  
- low-voltage hardware modification  
- human-centered UX design for children  
- IoT security and architecture planning  

The goal is both **practical** (helping kids feel calmer and more structured) and **technical** (exploring embedded behavior, safe power systems, and IoT device planning).

---

# 🧠 Why This Project Matters
Children respond better to consistency and visuals than repeated verbal instructions.  
By giving them a physical, simple indicator of readiness, we help:

- reduce overwhelm  
- reduce conflicts  
- increase independence  
- build routine confidence  

At the same time, this prototype becomes a **bridge project** between:

- embedded systems  
- UX design  
- IoT hardware  
- cybersecurity considerations  

It demonstrates engineering thought applied to a **real human problem**.

---

# 🔧 Technical Architecture

### **Hardware Analysis**
- Reverse-engineered LED driver behavior (3–4.5V)
- Evaluated control modes (icon cycle button vs direct LED wiring)
- Mapped potential power upgrades:
  - USB 5V conversion  
  - 18650 Li-ion + TP4056 recharge module  
- Identified microcontroller integration points (direct LED drive or MOSFET switching)

---

### **Firmware Architecture**
Although the original working code was pieced together from public Arduino examples (see *Code Provenance*), the final logic is cleanly represented as:

- A **finite state machine** handling state transitions  
- A **debounced button input** to advance states  
- LED control in **exclusive-mode** (only one color on at a time)  

---

### **Future IoT Expansion**
Planned extensions include:

- ESP32-based WiFi control  
- HTTP/MQTT API  
- Routine logging dashboard  
- OTA update security considerations  
- Device hardening & minimal attack surface  

---

# 🧩 Skills Demonstrated
- Embedded systems analysis  
- Finite state machine (FSM) design  
- LED driver control  
- Hardware abstraction concepts  
- Debounce logic  
- Safe low-voltage hardware modification  
- UX for children and behavioral systems  
- Early-stage IoT architecture  
- Documentation, case study writing, and project transparency  

---

# 📘 Code Provenance (Honest Attribution)
This project practices full transparency.

The firmware that controlled the LEDs during prototyping was **not** originally written line-by-line from scratch. Instead, it was assembled in a **piecemeal** manner from:

- Arduino LED examples  
- Button + `INPUT_PULLUP` tutorials  
- Simple FSM implementations  
- `millis()`-based debounce patterns  

Small sections were adapted, tested, broken, and refined on physical hardware.  

To maintain academic integrity and respect licensing:

- The combined code is **not published verbatim**  
- A placeholder `main.ino` is provided  
- Full explanation + pseudocode appear in `CODE_PROVENANCE.md`  

👉 See: [`CODE_PROVENANCE.md`](CODE_PROVENANCE.md)

This highlights a realistic engineering learning process:

> **research → adapt → integrate → debug → refine**

Not everything needs to be invented from scratch to show understanding.

---

# 🚀 Roadmap
- Add USB or rechargeable power  
- Add ESP32 control module  
- Add mobile/dashboard routine visualization  
- Add secure OTA update pipeline  
- Add photo documentation of final build  
- Add wiring diagrams (formalized)  

---

# 💬 Author
**Alison T. Richardson**  
Cybersecurity & Embedded Systems Student  
Human-centered maker | Robotics Engineer | IoT enthusiast  

