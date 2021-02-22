/*! \file
 * This is a concrete behavior A
 */
#ifndef _CONCRETEBEHAVIORA_H
#define _CONCRETEBEHAVIORA_H

/* INCLUDES */
#include "IBehavior.hpp"

/* MACROS */

/*!
 * \details class
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
class ConcreteBehaviorA : public IBehavior {
  public:
		ConcreteBehaviorA() {};
		virtual ~ConcreteBehaviorA() {};
		
    void Execute();
};
#endif
