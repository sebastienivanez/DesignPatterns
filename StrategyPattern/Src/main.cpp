/*! \file
 * Simple implementation of strategy pattern
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
#include "ConcreteBehaviorA.hpp"
#include "ConcreteBehaviorB.hpp"
#include "Client.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Entry function to project.
 * \author  Sebastien Ivanez
 * \date    31/01/2021
 */
int main()
{
  auto* CObject1 = new ConcreteBehaviorA();
  auto* CObject2 = new ConcreteBehaviorB();
	auto* Object1 = new Client(CObject1);
	auto* Object2 = new Client(CObject2);
	Object1->Execute();
	Object2->Execute();
	
	if (Object1 != nullptr)
	{
	  delete Object1;
	  Object1 = nullptr;
	}
	if (Object2 != nullptr)
	{
	  delete Object2;
	  Object2 = nullptr;
	}
	if (CObject1 != nullptr)
	{
	  delete CObject1;
	  CObject1 = nullptr;
	}
	if (CObject2 != nullptr)
	{
	  delete CObject2;
	  CObject2 = nullptr;
	}

	return 0;
}
