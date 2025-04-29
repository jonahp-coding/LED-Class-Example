
#ifndef _PwmIO_H
#define _PwmIO_H

// the above preprocessor directives are referred to as 'Header Guards'

#include <Arduino.h>
#include <IO.h>

//--------------------------------------------------------------------------------------------------
// class PwmIO
//
/**
 * 
 * This is the PwmIO class.
 * 
 */

class PwmIO : public IO{

    public:

        explicit PwmIO(const String pIoName);
    
        void setPwm(uint8_t pwmVal);

        uint8_t getPwm();

        void setFrequency(uint16_t pwmFreq);

        uint16_t get_Frequency();

        virtual ~PwmIO();
    
    private:

        uint8_t pwmVal;
        uint16_t pwmFreq;

    protected:
        
    public:

        String className;

};// end of class PwmIO
//--------------------------------------------------------------------------------------------------

#endif // PwmIO_H