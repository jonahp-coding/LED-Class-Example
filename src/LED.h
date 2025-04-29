
#ifndef _LED_H
#define _LED_H

// the above preprocessor directives are referred to as 'Header Guards'

#include <Arduino.h>

//--------------------------------------------------------------------------------------------------
// class LED
//
/**
 * 
 * This is the LED class.
 * 
 */

class LED{

    public:

        explicit LED(const String pLedName, const uint16_t pLedId, const String pLedColor);
    
        void init(const int pLedPin);

        void turnOn();

        void turnOff();

        void setPwm(uint8_t pwmVal); // setter function

        void blink(uint16_t blinkDuration);

        virtual ~LED();
    
    private:

        uint16_t counterBlink;

    protected:

        uint8_t ledPin;
    
        uint16_t ledId;

        String ledName;

        String ledColor;
    
    public:

        String className;

};// end of class LED
//--------------------------------------------------------------------------------------------------

#endif // LED_H