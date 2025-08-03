# HKCV4 - [ARCHIVED - REFERENCE ONLY]

**⚠️ IMPORTANT NOTE FOR THE TEAM ⚠️**

This directory, `Imported HKCV4.PrjPcb`, contains the design files for the communication and interface board used in the original MIT research paper. In that project, this board served the role of the high-level computer interface, similar to how we are using a Jetson Nano or UP Board.

**We are NOT using this board in our project.**

These files are archived here for **historical and reference purposes only**. They provide context for how the SPIne and Connector boards were originally connected and controlled.

---

## Original Function (For Context)

The board documented in these files was the central communication hub in the MIT robot. Its primary function was to:

* Act as the main interface board, connecting to a computer like an UP Board.
* Receive high-level commands from the computer over an SPI bus.
* Translate these commands into CAN bus messages for the four 3-DOF legs.
* It is functionally equivalent to what the paper refers to as the **"SPIne"** board.

For our project's active development, please refer to the design files in the `July31CommBrd,` `Best_Connector_board_July`, and `PDB` directories.
