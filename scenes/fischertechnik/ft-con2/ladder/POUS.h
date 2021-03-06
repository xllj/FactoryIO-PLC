#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// PROGRAM CELL2
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_LOCATED(BOOL,C1_IR)
  __DECLARE_LOCATED(BOOL,M1_IR)
  __DECLARE_LOCATED(BOOL,MAIN)
  __DECLARE_LOCATED(BOOL,M1_MOTOR)
  __DECLARE_LOCATED(BOOL,C2_MOTOR)
  __DECLARE_VAR(BOOL,C2_WORKING)
  __DECLARE_LOCATED(DINT,C2_WORKING_INT)
  __DECLARE_VAR(BOOL,M1_WORKING)
  __DECLARE_LOCATED(DINT,M1_WORKING_INT)
  TON TIMER_CONVEYOR;
  TON TIMER_MACHINING;
  __DECLARE_VAR(BOOL,BOOL_TO_DINT41_ENO)
  __DECLARE_VAR(DINT,BOOL_TO_DINT41_OUT)
  __DECLARE_VAR(BOOL,BOOL_TO_DINT51_ENO)
  __DECLARE_VAR(DINT,BOOL_TO_DINT51_OUT)

} CELL2;

void CELL2_init__(CELL2 *data__, BOOL retain);
// Code part
void CELL2_body__(CELL2 *data__);
#endif //__POUS_H
