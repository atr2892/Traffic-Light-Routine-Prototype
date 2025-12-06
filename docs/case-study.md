Case Study – Kids’ Traffic Light Routine Prototype

A human-centered embedded-systems project for behavioral routines

1. Problem

School mornings and bedtime routines in my household were often chaotic:

Too many verbal reminders

Kids feeling rushed, overwhelmed, or unsure of what comes next

Difficulty distinguishing "almost ready" from "actually ready"

I needed a non-verbal, visual routine system that:

Works for pre-reading children

Supports ADHD-friendly clarity, transitions, and predictability

Can eventually integrate into a broader smart-home or secure-robotics ecosystem

2. Concept

Repurpose a toy traffic light lamp into a tangible readiness indicator:

🔴 Red — Tasks Not Started / Core Tasks Missing

🟡 Yellow — Nearly Ready / Quick Checks Remaining

🟢 Green — Fully Ready / Free Time or Time to Leave

Children participate by advancing the state from Red → Yellow → Green, giving them ownership, structure, and positive reinforcement.
The light becomes a predictable emotional anchor and routine guide.

3. Hardware Overview

A retail traffic-light toy became the foundation. The original device included:

3 discrete LEDs (red, yellow, green)

A simple cycling controller

A 2xAA battery power supply

My hardware modifications explored several configurations:

Option A — USB-Powered Mod

Removed the AA battery pack

Added a 5 V USB input for stable power

Retained low-voltage safety (no mains modifications)

Option B — Rechargeable Mod

Integrated a TP4056 charging module

Added an 18650 lithium cell for rechargeable operation

Added protection circuitry to ensure safe low-voltage management

Option C — Programmable Logic Mod

Replaced the internal cycling controller with an Arduino Nano, ESP8266, or ESP32

Enabled fully custom logic, state transitions, and external signal integration

All modifications were done on the low-voltage side only, ensuring safety and clarity for future expansion.

4. Firmware Design

The firmware assumes:

3 LED channels mapped to Arduino digital pins

An optional pushbutton to allow kids to advance the state

Core State Machine Logic

Maintain a state variable (RED, YELLOW, GREEN)

Detect:

Button presses (kid interaction)

External triggers (future app or dashboard events)

Update LED outputs to reflect the current state

Debounce and timing logic included for clean interactions

Source reference:
code/main.ino (modular and replaceable as the system evolves)

5. UX / Routine Mapping
Morning Routine Mapping

Red → Brush teeth, bathroom, clothes, hair, shoes

Yellow → Backpack check, water bottle, jacket, quick room tidy

Green → Free play, morning music, ready to leave

Evening Routine Mapping

Red → Pajamas, bathroom, toys cleaned up

Yellow → Prepare backpack for next day, quick sweep of room

Green → Wind-down, bedtime story, lights out

The system supports:

Predictability

Emotional regulation

Independence

It eliminates constant verbal prompting and replaces it with calm visual cues.

6. What I Learned
Technical Lessons

Evaluating existing toy electronics to choose between:

Simulating internal button presses

Fully bypassing the controller

Driving LEDs directly with microcontroller PWM outputs

Designing minimal, kid-safe embedded systems

Managing power constraints and component selection

Building expandability into a prototype without over-engineering

Human-Factors Lessons

Kids respond better to visual cues than verbal reminders

A single traffic-light metaphor is both intuitive and regulating

Embedding emotional regulation into the design improves adoption

Routine systems for kids parallel secure system states:
predictable, observable, auditable

This project also gave me ideas for future IoT and secure robotics integration—bridging my academic work with real family needs.

7. Future Work

Planned expansions include:

Technical Features

ESP32 upgrade with HTTP/MQTT API

Integration with a parent mobile dashboard

Over-the-air (OTA) secure firmware updates

Behavior-based streak tracking (positive reinforcement)

Smart-Home / Robotics Integration

Connect to a larger home-readiness dashboard in my Robotics Capstone

Add environmental sensors (temp, light, noise)

Integrate with parental time-budget planning

Fun Mode

Add a Red Light / Green Light game mode
(the inspiration behind the prototype)
