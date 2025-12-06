# Code Provenance and References

This project is intentionally **transparent** about how the firmware
logic was created.

## 1. How the Code Was Originally Built

The original Arduino sketch that drove the traffic light was NOT written
from scratch. It was assembled in a **piecemeal** way by:

- Searching for simple Arduino examples for:
  - blinking LEDs
  - reading a push button
  - using `INPUT_PULLUP`
  - basic state machine patterns
- Copying small snippets (a few lines at a time)
- Adapting pin numbers, variable names, and logic flow
- Iteratively testing, breaking, and fixing the behavior on real hardware

In other words, the code was created the way many real beginners build
embedded projects:

> research → copy small patterns → adapt → debug → refine.

Because of that, it would be misleading to claim the final sketch as
“entirely original source code.”

## 2. Why the Full Sketch Is Not Published

Out of respect for:

- open-source licensing
- the original tutorial authors
- academic integrity and honest attribution

the exact composite sketch is **not** included verbatim in this repository.

Instead, this repository focuses on:

- the **architecture** (what the code does conceptually)
- the **learning process** (how the code was refined)
- the **hardware + UX design** around the routine system.

## 3. High-Level Behavior (Pseudocode)

The firmware manages LED states based on user interaction and routine progression.
It cycles between red, yellow, and green modes according to the child’s completion of tasks.
Timing logic, thresholds, and state transitions are intentionally omitted for intellectual property protection.

## 4. Example Types of Sources Used

The types of references used during development included:

- Official Arduino documentation for:
  - `pinMode()`, `digitalWrite()`, `digitalRead()`
  - `INPUT_PULLUP`
  - `millis()` timing patterns
- Beginner tutorials on:
  - controlling multiple LEDs
  - wiring and reading a push button
  - simple finite state machines on Arduino

**Specific URLs and tutorials**

- Tutorial: "Arduino Button with Internal Pull-Up" (https://docs.arduino.cc/tutorials/generic/digital-input-pullup/)
- Tutorial: "Traffic Light with 3 LEDs" – (https://www.youtube.com/watch?v=l2yrDmrPW70)
- Blog post: "Simple FSM on Arduino" – (https://www.digikey.com/en/maker/tutorials/2023/how-to-program-an-arduino-finite-state-machine)

## 5. What Was Learned

Through this piece-by-piece process, I learned to:

- interpret and adapt code from multiple sources
- debug logic errors on physical hardware
- understand why debouncing is needed
- reason about states instead of one-off `if` statements
- map pin behavior to real-world LED outputs.

These skills are often more important than writing everything from scratch,
especially at the prototype stage.

## 6. How to Rebuild a Clean, Original Version Later

If time and energy allow in the future, a fully original sketch can be
rewritten from the pseudocode above by:

1. Creating a fresh `.ino` file
2. Defining clear `enum` states for RED/YELLOW/GREEN
3. Writing the button handling logic from scratch
4. Writing LED control functions from scratch
5. Commenting each section to explain the intent

That would turn this from a *"piecemeal learning sketch"* into a
*"from-first-principles implementation"* using the same behavior.
