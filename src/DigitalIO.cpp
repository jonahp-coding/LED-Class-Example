//--------------------------------------------------------------------------------------------------
// DigitalIO.cpp
//
//
// This is a derived class of IO.
//
// Author:
//            Jonah Phillips
//
// Date of project start: 2025/04/29
//
//--------------------------------------------------------------------------------------------------

#include "DigitalIO.h"

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// class DigitalIO
//
/**
 *
 * [DESCRIPTION]
 *
 */

//--------------------------------------------------------------------------------------------------
// DigitalIO::DigitalIO (constructor)
/**
 *
 * Class constructor.
 *
 */

DigitalIO::DigitalIO(const String pIoName) :
    className(pIoName),
    IO(pIoName)
{

    className = " DigitalIO:" + ioName;

    Serial.print(className); Serial.println(": constructor called...");

}// end of DigitalIO:DigitalIO (constructor)
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// DigitalIO::turnOn
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 void DigitalIO::turnOn()
 {
    digitalWrite(ioPin, HIGH);
    Serial.print(className); Serial.println(": DigitalIO On...");
 }// end of DigitalIO::turnOn
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// DigitalIO::turnOff
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 void DigitalIO::turnOff()
 {
    digitalWrite(ioPin, LOW);
    Serial.print(className); Serial.println(": DigitalIO Off...");
 }// end of DigitalIO::turnOff
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// DigitalIO::~DigitalIO (destructor)
//
/**
 *
 * This gets called when the object is destroyed. All objects and memory allocated by this object
 * should be released here.
 *
 */

 DigitalIO::~DigitalIO()
 {
 
    Serial.print(className); Serial.println(": destructor called...");
 
 }// end of DigitalIO::~DigitalIO (destructor)
 //--------------------------------------------------------------------------------------------------
 
 //end of class DigitalIO
 //--------------------------------------------------------------------------------------------------
 //--------------------------------------------------------------------------------------------------
