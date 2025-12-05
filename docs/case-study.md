# Case Study – Kids' Traffic Light Routine Prototype

## 1. Problem

School mornings and bedtime routines were chaotic:
- Lots of verbal reminders
- Meltdowns when kids felt rushed
- Hard to know if "we're actually ready" or just *almost* ready

I wanted a **non‑verbal, visual system** that:
- worked for young kids (pre‑readers)
- supported ADHD brains with clear states
- could eventually integrate into a larger smart‑home / robotics system.

## 2. Concept

Use a **toy traffic light lamp** as a physical indicator of readiness:

- **Red** – core tasks incomplete  
- **Yellow** – almost ready, quick checks remaining  
- **Green** – completely ready, time for fun or heading out  

Kids can help move the light from red → yellow → green, reinforcing ownership and positive routines.

## 3. Hardware Overview

- Off‑the‑shelf battery‑powered traffic light lamp (3x LEDs: red, yellow, green)
- Original design: AA battery pack + simple cycling controller
- My modifications (depending on version):
  - Option A: Replace AA batteries with a **5 V USB power input**
  - Option B: Add a **rechargeable 18650 cell + TP4056 charging module**
  - Optional: Replace internal controller with **Arduino Nano / ESP32** for programmable logic

I deliberately kept all work on the **low‑voltage side** and did not open or modify any mains‑voltage adapters.

## 4. Firmware Design

The firmware here assumes:

- 3 LED channels wired to digital pins on an Arduino‑class board  
- Optional push button so the kids can step the state forward themselves  

Core logic:

- Track a `state` variable (`RED`, `YELLOW`, `GREEN`)
- Listen for:
  - a **button press** (kid interaction), or
  - an **external signal** (e.g., from a task‑tracking app later)
- Update the LEDs to match the state

See [`code/main.ino`](code/main.ino) for the current implementation.

## 5. UX / Routine Mapping

Example morning mapping:

- **Red** – brush teeth, bathroom, clothes, hair, shoes
- **Yellow** – backpack, water bottle, jacket, quick room check
- **Green** – free play, music, leave for school

Evening mapping is similar but swaps in pajamas, toy tidy‑up, and bedtime story.

## 6. What I Learned

- How to reason about existing toy electronics and decide whether to:
  - keep the built‑in controller and simulate button presses, or
  - bypass it and drive the LEDs directly
- How to design around **kid‑friendly states** instead of purely technical ones
- The value of **small, visual cues** for emotional regulation and routine adherence
- How this kind of prototype could tie into a broader **IoT / secure robotics** project later.

## 7. Future Work

- Integrate with an ESP32 and simple HTTP / MQTT API
- Add a parent dashboard for logging "green light" streaks
- Explore secure update patterns (firmware signing, over‑the‑air updates)
- Integrate into a larger home‑health / readiness dashboard for my robotics capstone.
- Add game mode option for classic red light, green light game (the inspiration for this project)
