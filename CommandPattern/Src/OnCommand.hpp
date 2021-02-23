/*! \file
 * This is an OffCommand class
 */
#ifndef _ON_COMMAND_H
#define _ON_COMMAND_H

/* INCLUDES */
#include "ICommand.hpp"

/* MACROS */

/*!
 * \details Class
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
class OnCommand : public ICommand {
	public:
		OnCommand() {};
		virtual ~OnCommand() {};
		
		void Execute();
};
#endif
