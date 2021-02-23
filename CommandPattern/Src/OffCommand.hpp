/*! \file
 * This is an OffCommand class
 */
#ifndef _OFF_COMMAND_H
#define _OFF_COMMAND_H

/* INCLUDES */
#include "ICommand.hpp"

/* MACROS */

/*!
 * \details Class
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
class OffCommand : public ICommand {
	public:
		OffCommand() {};
		virtual ~OffCommand() {};
		
		void Execute();
};
#endif
