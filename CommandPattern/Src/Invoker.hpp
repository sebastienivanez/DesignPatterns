/*! \file
 * This is an Invoker class
 */
#ifndef _INVOKER_H
#define _INVOKER_H

/* INCLUDES */
#include "ICommand.hpp"

/* MACROS */

/*!
 * \details Class
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
class Invoker {
	public:
		ICommand* On;
		ICommand* Off;
	
		Invoker(ICommand *on, ICommand *off);
		virtual ~Invoker() {};
};
#endif
