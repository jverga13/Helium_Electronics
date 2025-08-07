## Smaller SPIne Communication Board (Cost-Reduced Version)

This directory contains the design files for a modified, cost-reduced version of the main SPIne Communication Board.

### Key Modifications
The primary goal of this version is to lower costs and simplify in-house manufacturing.

- **Reduced Size:** The PCB dimensions have been significantly decreased to lower the cost of fabrication.
- **Fit the OSH Park Rules** The PCB is changed so that it fits OSH parks rules (tracings, distance between components, other errors that occurred  when put into OSH Park Rules)

---
### Original Board Overview

This board is based on the main **SPIne Communication Board**, which acts as the central nervous system for the robot. It processes high-level commands from a host computer (like a Jetson Nano) and manages real-time communication with the motors via CAN bus. It's designed to work with a secondary Connector Board that distributes power and signals.

The core features of the original design include:
- **Dual STM32F446 Microcontrollers** for real-time processing.
- **A 40-pin header** to stack directly onto a host computer.
- **Four independent and galvanically isolated CAN bus channels** for robust motor communication.
- **Onboard power regulation** and isolated DC-DC converters.

---
### Full Documentation

For a complete breakdown of the original board's design, components, and system architecture, please see the full documentation on Notion:

**[📄FAQ Document](https://docs.google.com/document/d/1BTmc7MTexFd-CQ0lYXevFovfLc9VMLDNh9eOhk8kmDs/edit?usp=sharing)**

**[📄 Briefing Doc](https://docs.google.com/document/d/1LLA47OMKxJ5xzOaiPruQMuQE-OeMwa2zv2Psi5w3PYQ/edit?usp=sharing)**

**[📄 Helium Project - SPIne System Details](https://www.notion.so/atombot/The-Helium-Project-1a723e66a3218009b606e8f94d7b40a9?p=22423e66a321802cb875cee111c35315&pm=s)**

**[📄 Microcontroller Choice Explanation Document](https://docs.google.com/document/d/166toBr8D5q9DAse6OPuDGO7630AuwiWQxv-KNbx1AGk/edit?usp=sharing)**

**[📄 Original Github of SPIne Board](https://github.com/bgkatz/SPIne/tree/master/SPIne_V2)**

<img width="822" height="987" alt="image (5)" src="https://github.com/user-attachments/assets/7a28f79e-760c-4ac3-b113-77467ea25711" />
<img width="887" height="1292" alt="image (6)" src="https://github.com/user-attachments/assets/970997ed-c6d9-4fd0-8a8c-8684efc36fea" />

**Concept Tree**

<img width="10010" height="8688" alt="NotebookLM Mind Map (4)" src="https://github.com/user-attachments/assets/37095343-2e7a-47da-9bbc-5e49c5c7a38d" />

