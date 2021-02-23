/*! \file
 * This is an ICommand interface
 */
#ifndef _ICOMMAND_H
#define _ICOMMAND_H

/* INCLUDES */

/* MACROS */

/*!
 * \details Interface
 * \author  Sebastien Ivanez
 * \date    23/02/2021
 */
class ICommand {
	public:
		virtual void Execute() = 0;
};
#endif
