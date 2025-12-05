# Wiring Notes (Conceptual)

This file documents the **conceptual** wiring for a microcontroller‑driven version of the lamp.

Assumptions:

- Arduino Nano or similar 5 V board
- Common cathode LED arrangement, or separate LED channels with a shared ground
- One momentary push button

## Pin Mapping

- **D2** – Button input (pulled up internally, active LOW)
- **D3** – Red LED control
- **D4** – Yellow LED control
- **D5** – Green LED control
- **5V** – Supply to LED board (if compatible)
- **GND** – Common ground

## Button Wiring

- One side of the button → GND  
- Other side → D2  

In code, enable `pinMode(BUTTON_PIN, INPUT_PULLUP);` so the pin is normally HIGH and goes LOW when pressed.

## LED Wiring (Direct Drive Example)

If each LED color can be driven directly:

- D3 → series resistor (e.g., 220–330 Ω) → Red LED anode
- D4 → resistor → Yellow LED anode
- D5 → resistor → Green LED anode
- All LED cathodes → GND

For higher‑current LED boards, swap the direct drive for N‑channel MOSFETs and drive their gates from D3/D4/D5.
