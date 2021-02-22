/*! \file
 * This is an IBehavior interface
 */
#ifndef _IBEHAVIOR_H
#define _IBEHAVIOR_H

/* INCLUDES */

/* MACROS */

/*!
 * \details interface
 * \author  Sebastien Ivanez
 * \date    22/02/2021
 */
class IBehavior {
  public:
    virtual void Execute() = 0;
};
#endif
