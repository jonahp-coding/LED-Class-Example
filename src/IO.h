
#ifndef _IO_H
#define _IO_H

// the above preprocessor directives are referred to as 'Header Guards'

#include <Arduino.h>

//--------------------------------------------------------------------------------------------------
// class IO
//
/**
 * 
 * This is the IO class.
 * 
 */

class IO{

    public:

        explicit IO(const String ioName);
    
        void init(const int ioPin);

        virtual ~IO();
    
    private:

        int idCounter;

    protected:

        uint8_t ioPin;
    
        uint16_t ioId;

        String ioName;
    
    public:

        String className;

};// end of class IO
//--------------------------------------------------------------------------------------------------

#endif // IO_H