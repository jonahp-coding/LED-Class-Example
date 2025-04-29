
#ifndef _DigitalIO_H
#define _DigitalIO_H

// the above preprocessor directives are referred to as 'Header Guards'

#include <Arduino.h>
#include <IO.h>

//--------------------------------------------------------------------------------------------------
// class DigitalIO
//
/**
 * 
 * This is the DigitalIO class.
 * 
 */

class DigitalIO : public IO{

    public:

        explicit DigitalIO(const String pIoName);
    
        void turnOn();

        void turnOff();

        virtual ~DigitalIO();
    
    private:

    protected:
        
    public:
        String className;

};// end of class DigitalIO
//--------------------------------------------------------------------------------------------------

#endif // DigitalIO_H