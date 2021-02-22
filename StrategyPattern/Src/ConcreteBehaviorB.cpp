/*! \file
 * This is a concrete behavior B implementation
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
#include "ConcreteBehaviorB.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Execute method
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
void ConcreteBehaviorB::Execute() {
	cout << "Concrete Behavior B" << endl;
}
