/*! \file
 * This is a client class
 */
#ifndef _CLIENT_H
#define _CLIENT_H

/* INCLUDES */
#include "IBehavior.hpp"

/* MACROS */

/*!
 * \details class
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
class Client {
  public:
		IBehavior* Behavior;
		
    Client(IBehavior* behavior);
    virtual ~Client() {};

    void Execute();
};
#endif
