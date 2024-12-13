/*
 * fsm.h
 *
 *  Created on: Dec 13, 2024
 *      Author: HP
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "global.h"
#include "main.h"

ADC_HandleTypeDef hadc1;

TIM_HandleTypeDef htim2;

UART_HandleTypeDef huart2;

void main_fsm(void);
void command_parser_fsm();
void uart_communication_fsm(void);

#endif /* INC_FSM_H_ */
