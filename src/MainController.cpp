//-----------------------------------------------------------------------------------------------------------
// MainController.cpp
//
//
// Main code for the project.
//
// Author:
//            Jonah Phillips
//
// Date of project start: 2025/04/25
//
//--------------------------------------------------------------------------------------------------

#include "MainController.h"

//#define DEBUG_VERBOSE_CONTROLLER 1	// displays extra debugging messages on serial port

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// class MainController
//
/**
 *
 * [DESCRIPTION]
 * 
 */

//--------------------------------------------------------------------------------------------------
// MainController::MainController (constructor)
//
/**
 *
 * Class constructor.
 *
 * The ONLY thing that should be done here is initializing objects and variables and storing
 * parameters to class variables.
 *
 */

MainController::MainController() :
    className(""),
    ledGreen("Green LED"),
    ledYellow("Yellow LED"),
    ledRed("Red LED"),
    ledGreenPtr(nullptr),
    ledYellowPtr(nullptr),
    ledRedPtr(nullptr),
    ledGreenPin(13),
    ledYellowPin(12),
    ledRedPin(27)
{

    className = "MainController";

    ledGreenPtr = &ledGreen;
    ledYellowPtr = &ledYellow;
    ledRedPtr = &ledRed;

    startSerialPort();

    Serial.print(className); Serial.println(": constructor called...");

}// end of MainController::MainController (constructor)
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// MainController::init
//
/**
 *
 * Initializes the object...call immediately after instantiation.
 *
 */

void MainController::init()
{

    Serial.print(className); Serial.println(": init called...");

    ledGreenPtr->init(ledGreenPin);
    ledYellowPtr->init(ledYellowPin);
    ledRedPtr->init(ledRedPin);

    fadeRate = 15; // IMPORTANT!! CHANGE THIS | @param fadeRate is used in the fade in/out for loop in ::process to 
                   // control the rate which the pwmVal of the PwmIO object increases/decreases.

}// end of MainController::init
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// MainController::startSerialPort
//
/**
 *
 * Starts the serial port.
 *
 *  A lot of Arduino examples wait for the Serial port using:
 *    while(!Serial){}
 *
 * This causes some processors to hang up forever if the Serial is not available, but a delay
 * is required before using the port if you don't wait for it.
 *
 */

void MainController::startSerialPort()
{

    Serial.begin(115200);
    delay(3000);

}// end of MainController::startSerialPort
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// MainController::process
//
/**
 *
 * This function should be called by the Arduino 'loop' function which is in the .ino file for
 * Arduino IDE projects and in the main.cpp file for VSCode projects.
 *
 */

void MainController::process()
{
    /**
     * This ::process uses a for loop to fade in/out ( i.e. increase/decrease the pwmVal of ) the LED of PwmIO class, at a given rate, @param fadeRate.
     * The other LEDs, @param ledGreenPtr and @param ledYellowPtr are of DigitalIO class and turnOn / turnOff when the fade loop goes from fade In to fade Out.
     */

    Serial.println("Fade In...");
    ledGreenPtr->turnOn();
    ledYellowPtr->turnOff();
    for (uint8_t i=0; i<255; i++)
    {
        ledRedPtr->setPwm(i);
        delay(fadeRate);
    }

    Serial.println("Fade Out...");
    ledGreenPtr->turnOff();
    ledYellowPtr->turnOn();
    for (uint8_t i=255; i>0; i--)
    {
        ledRedPtr->setPwm(i);
        delay(fadeRate);
    }
    //delay(500); // slow down a bit so the serial monitor is easier for humans to follow

    Serial.print(className);  Serial.print(": process called...");

}// end of MainController::process
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// MainController::~MainController (destructor)
//
/**
 *
 * This gets called when the object is destroyed. All objects and memory allocated by this object
 * should be released here.
 *
 */

MainController::~MainController()
{

    Serial.print(className); Serial.println(": destructor called...");

}// end of MainController::~MainController (destructor)
//--------------------------------------------------------------------------------------------------

//end of class MainController
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------