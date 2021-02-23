/*! \file
 * Simple implementation of command pattern
 */
 
/* INCLUDES */
//#include <cstdlib> // To call atoi()
//#include <fcntl.h> // To call open()
//#include <iomanip> // To call setw()
#include <iostream> // To call cout/cin
//#include <sstream> // To call stringstream
//#include <stdint.h> // To use uint8_t
//#include <stdlib.h> // To call malloc()/sleep()
//#include <unistd.h> // To call read()
#include "Invoker.hpp"
//#include "ICommand.hpp"
#include "OnCommand.hpp"
#include "OffCommand.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Entry function to project.
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
int main()
{
	auto* onCommand = new OnCommand();
	auto* offCommand = new OffCommand();
	auto* light = new Invoker(onCommand, offCommand);
	light->On->Execute();
	light->Off->Execute();
	
	if (light != nullptr)
	{
		delete light;
		light = nullptr;
	}
	if (onCommand != nullptr)
	{
		delete onCommand;
		onCommand = nullptr;
	}
	if (offCommand != nullptr)
	{
		delete offCommand;
		offCommand = nullptr;
	}

	return 0;
}
