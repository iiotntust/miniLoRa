# miniLoRa
# Use miniLoRa to link nodes and gateway 
### Hands-on #3: RS485 + LoRa
### Part 1: RS485 to PC, Microcontroller
#### RS485 + LORA BRIEFING
#### TASK A: CONNECT DEVICES VIA RS-485 PORT
#### TASK B: RS485 TO UART MODULE AND LIBRARY TEST
# RS485 + LoRA
### Briefing
### Purpose
### Contents: Part 1, Part 2
### Bill of materials
### Modbus tool trials
![image](https://user-images.githubusercontent.com/90613715/144187329-e5093e77-39af-4401-b9e7-dfe075b08e41.png)
### https://modbus.org/
### https://lora-alliance.org/
### https://www.semtech.com/lora/lora-products
# Purpose 
### To familiarize with RS485 and LoRa 
### To know the process of product development
![image](https://user-images.githubusercontent.com/90613715/144187620-e953488c-e85c-4923-878d-a17a6f849cf8.png)
![image](https://user-images.githubusercontent.com/90613715/144187665-12778e44-1020-4638-b105-741607637ac2.png)
Reference:https://en.wikipedia.org/wiki/LoRa ; https://en.wikipedia.org/wiki/RS-485
# Low cost, simple, reliable
![image](https://user-images.githubusercontent.com/90613715/144188021-8605b9e4-a25a-4159-acba-d61aa9c45784.png)
# Contents
### Part 1: RS485 to PC ………………………………………………2 hours
### Part 2: LoRa + UART………………………………………………3 hours
![image](https://user-images.githubusercontent.com/90613715/144188113-ccfa0b00-416c-400b-9db1-d31e633324b4.png)
https://kochingchang.coderbridge.io/
# Part 1: RS485 to PC
![image](https://user-images.githubusercontent.com/90613715/144188379-a4a7f426-37d0-419f-b7b6-21dfe90d38d3.png)
# Part 2: LoRa + UART
![image](https://user-images.githubusercontent.com/90613715/144188743-f9324100-d042-4ef9-a366-f7f88b2faf99.png)
# Bill of Materials
![image](https://user-images.githubusercontent.com/90613715/144188812-a42b2784-6aab-4e26-b7da-42c573362ec9.png)
# Components / parts
### Subject to reconfigure for each exercise*
![image](https://user-images.githubusercontent.com/90613715/144189366-fc6419a6-4156-4653-9d65-92b895777970.png)
# Modbus tool trials
### Most of tools are 30 trials version 
![image](https://user-images.githubusercontent.com/90613715/144189447-fa2fcfe6-c456-4150-bf3a-7a5dc96fea91.png)
# Modbus Poll
### Modbus Poll is the very popular Modbus master simulator for test and debug of your slave devices. Supports Modbus RTU/ASCII and Modbus TCP/IP.
![image](https://user-images.githubusercontent.com/90613715/144189604-77cd4095-9adf-497c-9919-51acbd556814.png)
### 30 days free trial (source: https://www.modbustools.com/ )
# MODBUS Tool
### Free
### Chinese version only
![image](https://user-images.githubusercontent.com/90613715/144190056-9aed75ba-6fca-4b8c-aea9-6bafdce3326f.png)
# Task A
### Connect devices via RS-485 port
#### PC setting and reading power meter data
#### RS485 wiring (USB/RS485 converter)
#### RS485 Modbus tools usage (read power meter data practice )*
![image](https://user-images.githubusercontent.com/90613715/144190200-75216ec7-4912-481d-a890-40964d9afbb3.png)
# PC setting and reading power meter data
### Insert USB-RS485 converter into PC USB port 
![image](https://user-images.githubusercontent.com/90613715/144190361-5715f11b-7ecf-45c1-94a4-50cebfb2d5f7.png)
# Wiring diagram
### Only the last device terminal resistor can be “on”. 
![image](https://user-images.githubusercontent.com/90613715/144190453-4d27832e-2797-4396-b1c8-2ea1075551ce.png)
![image](https://user-images.githubusercontent.com/90613715/144190491-8b017fc5-5ffb-4f5d-8221-206ea8cb94e8.png)
# Practice
### RS485 wiring (USB/RS485 converter)
### RS485 Modbus tools usage
### read power meter data practice 
![image](https://user-images.githubusercontent.com/90613715/144190586-b10baaa0-0fce-433d-91e0-3f315799a428.png)
![image](https://user-images.githubusercontent.com/90613715/144190631-cf589e47-ee40-47b6-86ea-27b4be025069.png)
# Fix error
![image](https://user-images.githubusercontent.com/90613715/144190837-e2b469f8-e9e8-4d42-aca5-9bbe2e8ad344.png)
#  *Read data from sensors / devices RS485
### 1.Power meter
### 2. Proximity sensor (strength)
### 3.I/O relay module
![image](https://user-images.githubusercontent.com/90613715/144191170-115bd95f-c525-44a9-a773-559647304190.png)
![image](https://user-images.githubusercontent.com/90613715/144191069-3326d9ee-0816-4ddd-81fa-c6762794ac4f.png)
# 1.Power meter : command
### SDM640 Single phase (110V/220V) power meter
![image](https://user-images.githubusercontent.com/90613715/144191251-559a5e8e-9f47-481b-a35d-603f05669114.png)
# Test Sample
![image](https://user-images.githubusercontent.com/90613715/144191329-38918d61-dec6-4f6b-810a-bfd6e2fccdb6.png)
# 2.Proximity sensor command
### RS485 Lux strength module: GY-485-44009
![image](https://user-images.githubusercontent.com/90613715/144191370-76dbef3c-0b2d-4426-a478-fd55818f7ae6.png)
# Lux strength calculation
### Method
![image](https://user-images.githubusercontent.com/90613715/144191439-11c77d9a-f691-4c7b-a1ca-cabaff444877.png)
# Command
### (4) Command string from external controller to module device ( 16 bit) 
![image](https://user-images.githubusercontent.com/90613715/144191525-4af4ef76-39fe-4cff-9879-f7fb261c2896.png)
# Test sample
![image](https://user-images.githubusercontent.com/90613715/144191565-08e1c5b4-77be-4751-9cdc-bde70e2cf207.png)
# 3.I/O relay module command
### Modbus RTU
![image](https://user-images.githubusercontent.com/90613715/144191661-db25a695-3b5e-4889-93fd-08c8e2febe27.png)
### https://world.taobao.com/item/548966422932.htm?spm=a21wu.11804641-cat-tw.0.0.3c7b79288rC6WK
### Driver data download：https://pan.baidu.com/s/1raoOiL2b (CHINA IP only)
# Common commands
![image](https://user-images.githubusercontent.com/90613715/144191776-0a432f3f-512c-4392-9341-fd95d2747500.png)
![image](https://user-images.githubusercontent.com/90613715/144191817-4d0007ac-bfb9-4f3b-aaa4-495ffeef3841.png)
![image](https://user-images.githubusercontent.com/90613715/144191856-9164c1ba-c678-4057-9820-d48a0e49146a.png)
# Test Sample
![image](https://user-images.githubusercontent.com/90613715/144191913-b9d78aa5-abda-40dd-ab2c-74204917a70c.png)
# Task B
# RS485 to UART
# module and library test
### RS485 / UART (TTL (RX/TX) features
### Arduino NANO MCU features
### Arduino RS485 Modbus Library
### functionality
### Arduino reading data from device via
### RS485 Modbus 
![image](https://user-images.githubusercontent.com/90613715/144192035-d637fc9e-1e8d-4564-85d3-7a526231f398.png)
# RS485 / UART (TTL (RX/TX) features
![image](https://user-images.githubusercontent.com/90613715/144192101-49682a4f-ff3e-44e2-a495-e0dd97a7bcf8.png)
### DI (data in) to pin 1 (D1) TX
### RO (receive out) to pin 0 (D0) RX
### DE (data enable)
### RE (receive enable) jumpered together and to DE pin 7 (D7)
### Vcc 5V and Gnd connected (5V Gnd)
### A and B : the RS485 pair
# Arduino NANO MCU features
### Subject to minor changes by different vendors
![image](https://user-images.githubusercontent.com/90613715/144192150-ea9da3c2-2f9f-4b2d-afba-90ebdc9103e6.png)
![image](https://user-images.githubusercontent.com/90613715/144192196-7bea3d6d-d2ec-496a-a435-9c2fecef219a.png)
# PIN-out diagram
### Unofficial board pin-out (check before use)
![image](https://user-images.githubusercontent.com/90613715/144192275-9378bf2e-3fbb-4c93-b4cc-a8becd7cf158.png)
# Arduino nano / RS485 wiring diagram
![image](https://user-images.githubusercontent.com/90613715/144192366-68c3ea19-1009-43f9-bca3-c289a1f0dc4c.png)
# Connection 
![image](https://user-images.githubusercontent.com/90613715/144192466-2b154f0d-1088-4ff7-86e7-1252a3aba6e7.png)
![image](https://user-images.githubusercontent.com/90613715/144192548-b0f154cc-2475-49b4-b237-1fca61908046.png)
# Option: DC power measure / AC suppler 
### Model: JSY-MK-211-D
![image](https://user-images.githubusercontent.com/90613715/144192707-fbb3ef66-d8d3-4e46-9608-ce7d5ccba871.png)
### http://www.webaic.com/
### https://item.taobao.com/item.htm?spm=2013.1.w4023-2401383821.8.33134693jB0Yw3&id=16908305128
# Power module address table
![image](https://user-images.githubusercontent.com/90613715/144192764-70cf26fc-28eb-49c3-8029-846ae5da5eea.png)
# Arduino RS485 Modbus Library functionality
### Test 
![image](https://user-images.githubusercontent.com/90613715/144192841-73aa2189-09db-42bc-a952-eb07bb7acfef.png)
### \Handon2_data\RS485-SOURCE\ArduinoNANO\RS485_test1
# Arduino reading data from device via RS485 Modbus
### Current sketch
![image](https://user-images.githubusercontent.com/90613715/144192917-3a3221d1-d2e8-495a-a328-678b46767f39.png)
# Reference
![image](https://user-images.githubusercontent.com/90613715/144192992-4871fd6a-1603-4c11-9242-ca2a8bbc7a82.png)
# Hands-on #3: RS485 + LoRa
# Part 2: LoRa communication test
### TASK C: MINILORA / NANO ASSEMBLING
#### TASK D: LORA MINIDUINO TRANSMITTING/RECEIVING PRACTICE
#### TASK E: LORA GATEWAY, AMEBA APPENDIX
# Task C, D: LoRa node(Arduino nano)
# Task E: Lora gateway (Ameba)
![image](https://user-images.githubusercontent.com/90613715/144193294-b8ff2d41-1dc3-45d7-95b6-b7656e064f81.png)
# Task C:
### MiniLoRa / Nano
#### assembling
#### General and resource
#### Arduino Nano / MiniLora Wiring
#### LoRa SPI library intro.
#### Example: LoRa master/slave demo
# Assembly
![image](https://user-images.githubusercontent.com/90613715/144193493-cd9b88e3-9f47-4512-ac06-4e932ad79cea.png)
# General and resources
### To make it easy for you to test MiniLoRa modules in the easiest way, we developed the test program with the Arduino IDE. Use the Arduino Nano MCU to connect the MiniLoRa module to the SPI interface. The LoRa long-distance low-power characteristics are used to transmit the sensed value data.After receiving the data transmitted by LoRa, the receiving end can use Ameba or MTK7697 built-in WiFi function to upload the data to the IoT platform in RESTful API or MQTT format respectively.
![image](https://user-images.githubusercontent.com/90613715/144193738-0aa7e8a1-71d2-4e1f-bb35-985271bc2a86.png)
# LoRa network architecture
![image](https://user-images.githubusercontent.com/90613715/144193812-7497c2e5-4ba3-45d8-830a-c65328317849.png)
# LoRa Node + LoRa Gateway (task CD,E)
![image](https://user-images.githubusercontent.com/90613715/144193888-19179abe-7704-41b3-9dfd-c00f8d1d4000.png)
# Arduino Nano / MiniLora Wiring
### Arduino Nano MCU + MinLora (SPI interface) 
![image](https://user-images.githubusercontent.com/90613715/144193995-b44ae782-bff8-4d5e-8044-168df028c302.png)
# Arduino IDE
### 1. Start Arduino IDE
### 2. Set working folder: nano (restart)
### 3. Confirm board, com port, processor
### 4. Include libraries
