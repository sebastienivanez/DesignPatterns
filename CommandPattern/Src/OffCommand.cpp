/*! \file
 * This is an OffCommand class implementation
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
#include "OffCommand.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Execute method
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
void OffCommand::Execute() {
	cout << "This is my Off execute command" << endl;
}
