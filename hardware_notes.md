🔧 Hardware Notes (High-Level Summary)

This prototype intentionally stays entirely on the low-voltage DC side of the system.
No mains-voltage components were modified.
All modifications involve simple, safe, consumer-grade electronics suitable for prototyping.

1. Original Traffic Light Lamp

Most commercially available toy-style traffic lights use:

Power: 2–3 × AA batteries (≈3–4.5 V DC)

Light source: Red, Yellow, and Green LEDs mounted on a compact PCB

Built-in controller: A basic push-button cycle mode (ON → FLASH → OFF)

For this prototype, the lamp housing and LED assemblies were repurposed while keeping all work on the low-voltage side.

2. Option A — USB Power Replacement (Non-Destructive, Low-Voltage)

For prototypes requiring stable, continuous power, AA batteries can be replaced by a 5 V USB supply, provided that the lamp’s circuitry is compatible or adjusted.

High-Level Approach (Conceptual Only)

Remove or bypass the AA battery holders

Identify the lamp’s positive (+) and negative (–) terminals

Connect:

USB +5 V → lamp positive

USB GND → lamp negative

Note: Some lamps require a small voltage adjustment (e.g., resistor or buck converter) if originally designed for 4.5 V.

3. Option B — Rechargeable System (18650 Cell + TP4056 Module)

For a rechargeable prototype, a standard protected lithium charging module can be used.

Components

18650 lithium-ion battery (in a secured holder)

TP4056 charging/protection board (5 V USB input)

Conceptual Wiring

Battery holder + → TP4056 BAT+

Battery holder – → TP4056 BAT–

Lamp power leads → TP4056 OUT+ / OUT–

This provides charging, basic protection, and a clean rechargeable power system.

4. Option C — Full Microcontroller Integration (ESP32 / Arduino Variant)

For programmable control, the original cycling PCB can be bypassed and LEDs driven from digital output pins via appropriate protection components.

Conceptual Features

Microcontroller drives the RED / YELLOW / GREEN LED channels

Button input for user-controlled state changes

Optional Wi-Fi/Bluetooth for task synchronization (not included in the stock firmware here)

Example Pin Mapping (High-Level Only)

Red LED → Digital Output

Yellow LED → Digital Output

Green LED → Digital Output

Button Input → Digital Input (with internal pull-up enabled)

Notes

Exact resistor values, current calculations, and LED driving circuits have been intentionally omitted for IP protection and patent preparation.

Full circuit disclosure will be included only in the provisional patent submission.

5. Safety Notes

No mains voltage was handled or modified at any point.

All modifications were made on the 3–5 V DC side, safe for prototyping.

All exposed wires were insulated, and the internal space of the lamp housing was reinforced to prevent accidental shorts.

6. Additional Documentation

Additional conceptual wiring notes are provided in:
diagrams/wiring-notes.md

Detailed implementation diagrams will be included exclusively in the provisional patent filing.
