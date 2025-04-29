//--------------------------------------------------------------------------------------------------
// PwmIO.cpp
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

#include "PwmIO.h"

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// class PwmIO
//
/**
 *
 * [DESCRIPTION]
 *
 */

//--------------------------------------------------------------------------------------------------
// PwmIO::PwmIO (constructor)
/**
 *
 * Class constructor.
 *
 */

PwmIO::PwmIO(const String pIoName) :
    className(pIoName),
    IO(pIoName)
{

    className = " PwmIO:" + ioName;

    Serial.print(className); Serial.println(": constructor called...");

}// end of PwmIO:PwmIO (constructor)
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// PwmIO::setPwm
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 void PwmIO::setPwm(uint8_t pwmVal)
 {
    analogWrite(ioPin, pwmVal);
    Serial.print(className); Serial.print(": pwmVal = "); Serial.println(pwmVal);
 }// end of PwmIO::setPwm
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// PwmIO::getPwm
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 uint8_t PwmIO::getPwm()
 {
    digitalWrite(ioPin, LOW);
    return pwmVal;
 }// end of PwmIO::getPwm
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// PwmIO::~PwmIO (destructor)
//
/**
 *
 * This gets called when the object is destroyed. All objects and memory allocated by this object
 * should be released here.
 *
 */

 PwmIO::~PwmIO()
 {
 
    Serial.print(className); Serial.println(": destructor called...");
 
 }// end of PwmIO::~PwmIO (destructor)
 //--------------------------------------------------------------------------------------------------
 
 //end of class PwmIO
 //--------------------------------------------------------------------------------------------------
 //--------------------------------------------------------------------------------------------------
