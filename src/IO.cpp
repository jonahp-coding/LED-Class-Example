//--------------------------------------------------------------------------------------------------
// IO.cpp
//
//
// This is a base/super class which provides general structure and functionality for Input/Output (I/O) devices. The class feature pin declaration and
// initialization, e.g. using `pinMode()` as well as declaring the pin as Input or Output using a representitive case-(in)sensitive String.
//
// TO DO: (as of 04/29/2025)
//  - Seperate turnOn / turnOff methods into the DigitalIo sub-class
//  - create DigitalIo and PwmIo (sub-)classes which inherit from IO class
//  - add 'Input' -- 'Output' pin setup using a case-(in)sensitive String checker function
//  - Make IO base-class private or virtual from users..
//
// Author:
//            Jonah Phillips
//
// Date of project start: 2025/04/29
//
//--------------------------------------------------------------------------------------------------

#include "IO.h"

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// class IO
//
/**
 *
 * [DESCRIPTION]
 *
 */

//--------------------------------------------------------------------------------------------------
// IO::IO (constructor)
/**
 *
 * Class constructor.
 *
 */

IO::IO(const String pIoName) :
    ioName(pIoName)
{

    className = " IO:" + ioName;

    idCounter++;
    ioId = idCounter;

    Serial.print(className); Serial.println(": constructor called...");

}// end of IO:IO (constructor)
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// IO::init
//
/**
 *
 * [DESCRIPTION]
 *
 */

 void IO::init(const int pIoPin)
 {
    
    Serial.print(className); Serial.println(": init called...");

    ioPin = pIoPin;
    
    pinMode(ioPin, OUTPUT);

 }// end of IO::init
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// IO::~IO (destructor)
//
/**
 *
 * This gets called when the object is destroyed. All objects and memory allocated by this object
 * should be released here.
 *
 */

 IO::~IO()
 {
 
    Serial.print(className); Serial.println(": destructor called...");
 
 }// end of IO::~IO (destructor)
 //--------------------------------------------------------------------------------------------------
 
 //end of class IO
 //--------------------------------------------------------------------------------------------------
 //--------------------------------------------------------------------------------------------------
