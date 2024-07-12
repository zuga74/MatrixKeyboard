/*
 * matrix_keyboard_conf.h
 * for stm32
 *  Created on: 2 may 2024 г.
 *      Author: Rafael Boltachev
 */

#ifndef MATRIX_KEYBOARD_CONF_H_
#define MATRIX_KEYBOARD_CONF_H_

#include "main.h"

//Active state on out (0 or 1)
#define MATRIX_KEYBOARD_OUT_ACTIVE 		0
//Active state on in (0 or 1)
#define MATRIX_KEYBOARD_IN_ACTIVE 		0


//Output pins count
#define MATRIX_KEYBOARD_OUT_CNT		5

//Output pins set
inline void matrix_keyboard_write_out(uint8_t index, uint8_t val)
{
	switch (index) {
		case 0: HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, val);	break;
		case 1: HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, val);	break;
		case 2: HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, val);	break;
		case 3: HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, val);	break;
		case 4: HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, val);	break;
		default: break;
	}
}

//Input pins count
#define MATRIX_KEYBOARD_IN_CNT		4

//Input pins get
inline uint8_t matrix_keyboard_read_in(uint8_t index)
{
	switch (index) {
		case 0: return HAL_GPIO_ReadPin(ROW0_GPIO_Port, ROW0_Pin);
		case 1: return HAL_GPIO_ReadPin(ROW1_GPIO_Port, ROW1_Pin);
		case 2: return HAL_GPIO_ReadPin(ROW2_GPIO_Port, ROW2_Pin);
		case 3: return HAL_GPIO_ReadPin(ROW3_GPIO_Port, ROW3_Pin);
		default: return !MATRIX_KEYBOARD_IN_ACTIVE;
	}
}


#endif /* MATRIX_KEYBOARD_CONF_H_ */
