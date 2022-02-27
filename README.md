# ATtiny Handheld Games Console

## Table of Contents

- [Introduction](#introduction)
- [Board Manager & Programming Setup](#board-manager---programming-setup)
- [Circuitry](#circuitry)
  * [Schematic](#schematic)
  * [PCB Design](#pcb-design)
  * [Soldered PCB](#soldered-pcb)
- [Code](#code)
- [Enclosure](#enclosure)
  * [CAD Enclosure](#cad-enclosure)
  * [3D Printed Enclosure](#3d-printed-enclosure)
- [Game Library](#game-library)
- [Further Work](#further-work)

## Introduction

My aim is to create a handheld games console, based on the ATtiny85 AVR microcontroller. Users will be able to program their own games and play them anywhere. The long-term goal for this project is to create a library of games and it would be amazing to build a community of users who can upload their games for others to download and play.

## Board Manager & Programming Setup

I am using the ATTinyCore board manager (https://github.com/SpenceKonde/ATTinyCore) with the following settings:

<p align="center">
 <img src="./Images/BoardSettings.png" width="450" />
</p>

Currently I programming the ATtiny using an arduino uno as a programmer. You could either do this or use a dedicated ISP programmer.

## Circuitry

This is the V1 circuitry. I have multiple things which I would like to change but this is the current design.

### Schematic

<p align="center">
 <img src="./PCB_Design/ATtiny_Handheld_Schematic.png"/>
</p>

### PCB Design

| <img src="./PCB_Design/ATtiny85_Handheld.png" /> | <img src="./PCB_Design/ATtiny85_Handheld_Back.png" /> |
| ------------------------------------------------ | ----------------------------------------------------- |
| <img src="./Images/PCB.jpg" />                   | <img src="./Images/PCB_Back.jpg" />                   |

### Soldered PCB

<p align="center">
 <img src="./Images/Soldered_PCB.jpg"/>
</p>

## Code

This repostitory includes code to test that the buttons and display are working correctly. When you press a button the display should show the analog value on the actionButton and directionButton pins, along with the name of the button pressed. Recognised buttons are as follows:

- UP
- DOWN
- LEFT
- RIGHT
- UP_LEFT
- UP_RIGHT
- DOWN_LEFT
- DOWN_RIGHT
- A
- B

 <p align="center">
 <img src="./Images/ButtonTest.jpg" width="550" />
</p>

## Enclosure

### CAD Enclosure

### 3D Printed Enclosure

## Game Library

## Further Work
