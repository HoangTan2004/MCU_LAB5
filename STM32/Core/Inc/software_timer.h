/*
 * software_timer.h
 *
 *  Created on: Nov 4, 2024
 *      Author: HP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

void setTimer(int index, int duration);
void timerRun(void);
int isTimerExpired(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
