# SPIne Connector and Power Distribution Board

This repository contains the design files for the `mc_spine_con`, a passive connector and power distribution board designed to work with the SPIne V2 communication board for dynamic legged robots.

## Overview

The purpose of this board is to serve as a robust breakout and wiring hub. It takes the bundled power and communication signals from the main SPIne board and distributes them cleanly to the robot's four legs and other peripherals like the remote control receiver and emergency stop. This simplifies the robot's wiring harness, making assembly and maintenance much easier.

This board was designed as part of the research detailed in the [MIT Masters Thesis by Benjamin G. Katz](https://dspace.mit.edu/handle/1721.1/117362).
**I have adjusted this board in the following ways to ensure can iterate on this design quickly through the use of the in-lab Carvera PCB CNC:**
- Replacing the components that are out of circulation
- Changing location of components and traces based on in-lab Carvera rules.

---

## Features

* **Central Input:** A single **20-pin male header** (`SV2`) receives all signals and power from the main SPIne board.
* **Leg Outputs:** Four **4-pin Molex Micro-Fit connectors** (`LEG1` - `LEG4`) provide dedicated power and CAN bus communication to each of the robot's four legs.
* **Remote Control:** A **3-pin header for SBUS** allows for the direct connection of a standard RC radio receiver for low-latency manual control.
* **Safety Interface:** A **2-pin header for an Emergency Stop (ESTOP)** provides a connection point for a critical safety cutoff switch.
* **Power Taps:** Five **8-pin Molex Micro-Fit headers** (`P$1`) are available for distributing power to other subsystems.
* **Mounting:** Four **mounting holes** (`MH1` - `MH4`) allow the board to be securely fastened to the robot chassis.
* **Construction:** Simple and robust **2-layer PCB** design, suitable for manufacturing with desktop PCB makers or professional fabrication houses.

---

## Repository Contents

* **/AltiumProject/**: Contains the source Altium Designer project files, including:
    * `mc_spine_con.PcbDoc` - The PCB layout file.
    * `mc_spine_con.SchDoc` - The schematic file.
* **/Gerber/**: Manufacturing files (Gerbers) for producing the PCB.
* **/BOM/**: The Bill of Materials (`.csv`) listing all required components and their part numbers.
* `README.md`: This file.

---

## Integration

This board is designed to be the interface layer between the main SPIne V2 board and the robot's hardware.

1.  The **female 20-pin connector** (`SV1`, Harwin `M20-7822046`) on the main SPIne board plugs directly into the **male 20-pin header** (`SV2`, Harwin `M20-9992046`) on this connector board.
2.  The `LEG` ports connect to the motor controllers in each leg.
3.  The `SBUS` and `ESTOP` ports connect to the respective external hardware.
4.  The main power for the system is supplied to the SPIne board, which then passes it through to this board for distribution.

---

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
