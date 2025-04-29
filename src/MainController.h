
#ifndef _MAIN_CONTROLLER_H
#define _MAIN_CONTROLLER_H

// the above preprocessor directives are referred to as 'Header Guards'

#include <cxxabi.h>

#include "Tools.h"
#include "EventHandlerInterface.h"
#include "DigitalIO.h"
#include "PwmIO.h"

//--------------------------------------------------------------------------------------------------
// class MainController
//
/**
 *
 * This class is the main Controller (as in MVC structure).
 *
 * This class creates all other objects and is the main point of action. It inherits
 * EventHandlerInterface so that it can receive events from other objects.
 *
 */

class MainController : public EventHandlerInterface{

	public:

		explicit MainController(); //constructor

		void init();

        void startSerialPort();

		void process();

        virtual ~MainController(); //destructor

	protected:

		DigitalIO ledGreen;		// creating static declaration as it does not allocate memory on the heap..
		DigitalIO *ledGreenPtr;	// creating pointer to be set to the ledGreen instance so
								// that pointer can be used everywhere for consistency
		
		// a second object of the same class (IO)

		DigitalIO ledYellow;
		DigitalIO *ledYellowPtr;

		// a third object of the same class (IO)

		DigitalIO ledRed;
		DigitalIO *ledRedPtr;

    private:

		const int ledGreenPin;

		const int ledYellowPin;

		const int ledRedPin;

	public:

        String className;


};// end of class MainController
//--------------------------------------------------------------------------------------------------

#endif // MAIN_CONTROLLER_H