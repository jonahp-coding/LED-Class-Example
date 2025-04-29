//--------------------------------------------------------------------------------------------------
// LED.cpp
//
//
// [DESCRIPTION]
//
// Author:
//            Jonah Phillips
//
// Date of project start: 2025/04/25
//
//--------------------------------------------------------------------------------------------------

#include "LED.h"

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// class LED
//
/**
 *
 * [DESCRIPTION]
 *
 */

//--------------------------------------------------------------------------------------------------
// LED::LED (constructor)
/**
 *
 * Class constructor.
 *
 */

LED::LED(const String pLedName, const uint16_t pLedId, const String pLedColor) :
   // remove @param pLedId ... this variable should be updated internally with the LED:init function,
   // and there should be a counter variable which gets updated each time the LED:LED (constructor) is called.
    ledName(pLedName),
    ledId(pLedId),
    ledColor(pLedColor)
{

    className = " LED:" + ledName;

    Serial.print(className); Serial.println(": constructor called...");

}// end of LED:LED (constructor)
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// LED::init
//
/**
 *
 * [DESCRIPTION]
 *
 */

 void LED::init(const int pLedPin)
 {
    
    Serial.print(className); Serial.println(": init called...");

    ledPin = pLedPin;
    
    pinMode(ledPin, OUTPUT);

 }// end of LED::init
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// LED::turnOn
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 void LED::turnOn()
 {
    digitalWrite(ledPin, HIGH);
    Serial.print(className); Serial.println(": LED On...");
 }// end of LED::turnOn
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// LED::turnOff
//
/**
 * 
 * [DESCRIPTION]
 * 
 */

 void LED::turnOff()
 {
    digitalWrite(ledPin, LOW);
    Serial.print(className); Serial.println(": LED Off...");
 }// end of LED::turnOff
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// LED::~LED (destructor)
//
/**
 *
 * This gets called when the object is destroyed. All objects and memory allocated by this object
 * should be released here.
 *
 */

 LED::~LED()
 {
 
    Serial.print(className); Serial.println(": destructor called...");
 
 }// end of LED::~LED (destructor)
 //--------------------------------------------------------------------------------------------------
 
 //end of class LED
 //--------------------------------------------------------------------------------------------------
 //--------------------------------------------------------------------------------------------------
