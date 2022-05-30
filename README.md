# Automatic-Street-light-using-8051-microcontroller
## Table of contents
* [introduction](#introduction)
* [Technologies](#technologies)
* [Setup](#setup)

## introduction 
Generally, street lights are switched on for whole night and during the day, they are switched off. But during the night time, street lights are not necessary if there is no traffic. 
This project presents a design and a prototype implementation of Automatic street light system using Proteus simulation tool to represent the hardware in addition to assembly Language as its controlling software. Our purpose of this project is to have a clear understanding of how to use Microprocessor in mini project ,how all the components combine and how it's controlled the software to perform its special task that was designed to do.

## Technologies
Project is created with:
* c language
* 8051 programmer 
* protos for simulation 

## Setup
### hardware require:
* AT89C51 MICROCONTROLLER  
* RELAY 5V *5 
* IR SENSOR 
* LED (Light emmitting diode)
* RESISTANCE 1k *2
* LDR 
* BC547 TRANSISTOR

## circuit diagram 
![image](https://user-images.githubusercontent.com/40560478/171043448-1073095d-e7db-4cab-a69e-1a2b9fcb2883.png)

## code
""" 
sbit sensor1=P1^0;
sbit sensor2=P1^1;
sbit sensor3=P1^2;
sbit sensor4=P1^3;
sbit sensor5=P1^4;
sbit load1=P2^0;
sbit load2=P2^1;
sbit load3=P2^2;
sbit load4=P2^3;
sbit load5=P2^4;
void main()
{
load1=load2=load3=load4=load5=0;
sensor1=sensor2=sensor3=sensor4=sensor5=0;
while(1)
{
if(sensor1==1)
load1=1;
else
load1=0;
if(sensor2==1)
load2=1;
else
load2=0;
if(sensor3==1)
load3=1;
else
load3=0;
if(sensor4==1)
load4=1;
else
load4=0;
if(sensor5==1)
load5=1;
else load5=0;}} """


