# Hardware Notes

This prototype intentionally stays on the **low‑voltage** side of the circuit. Do not open or modify any mains‑voltage adapters.

## 1. Original Lamp

Typical specs for similar lamps:

- Power: 2–3 × AA batteries (3–4.5 V total)
- LEDs: integrated into a small PCB for red, yellow, and green
- Control: a simple push‑button that cycles through modes

## 2. Option A – USB Power (Replace AA Batteries)

If the lamp uses 3 × AA (4.5 V), it can usually be powered from 5 V USB with a small series resistor or a buck converter adjusted to ~4.5 V.

Wiring (conceptual):

- Remove the AA batteries
- Identify battery positive (+) and negative (–)
- Connect:
  - USB +5 V (red wire) → battery +
  - USB GND (black wire) → battery –

## 3. Option B – Rechargeable 18650 + TP4056

Components:

- 1 × 18650 lithium cell
- 1 × 18650 holder
- 1 × TP4056 charging/protection board (with USB input)

Wiring:

- Holder + → TP4056 BAT+
- Holder – → TP4056 BAT–
- Lamp + → TP4056 OUT+
- Lamp – → TP4056 OUT–

Charging: plug a USB cable into the TP4056. The board manages charge and basic protection.

## 4. Option C – Full Microcontroller Control

If the original controller is removed:

- Connect each LED (or LED segment) to:
  - a digital output pin via a current‑limiting resistor, or
  - a small N‑channel MOSFET if the LED board draws more current.

Example mapping (Arduino Nano):

- Red LED → D3
- Yellow LED → D4
- Green LED → D5
- Button input → D2 (with pull‑up)

See the wiring notes in `diagrams/wiring-notes.md`.
