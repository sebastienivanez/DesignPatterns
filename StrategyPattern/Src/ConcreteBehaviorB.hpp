/*! \file
 * This is a concrete behavior B
 */
#ifndef _CONCRETEBEHAVIORB_H
#define _CONCRETEBEHAVIORB_H

/* INCLUDES */
#include "IBehavior.hpp"

/* MACROS */

/*!
 * \details class
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
class ConcreteBehaviorB : public IBehavior {
  public:
		ConcreteBehaviorB() {};
		virtual ~ConcreteBehaviorB() {};
		
    void Execute();
};
#endif
