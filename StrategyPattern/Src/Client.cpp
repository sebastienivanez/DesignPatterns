/*! \file
 * This is a client class implementation
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
#include "Client.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details constructor
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
Client::Client(IBehavior* behavior)
{
	Behavior = behavior;
}

/*!
 * \details Execute methode
 * \author Sebastien Ivanez
 * \date 22/02/2021
 */
void Client::Execute()
{
	Behavior->Execute();
}
