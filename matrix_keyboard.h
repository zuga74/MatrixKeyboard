/*
 * matrix_keyboard.h
 *
 *  Created on: 27 may 2024 г.
 *      Author: Rafael Boltachev
 */

#ifndef MATRIX_KEYBOARD_H_
#define MATRIX_KEYBOARD_H_

#include <stdint.h>


//init
void matrix_keyboard_init(void);
//need to be called periodically
void matrix_keyboard_task(void);

//must be defined in your program
void matrix_keyboard_press(uint8_t out, uint8_t in);
//must be defined in your program
void matrix_keyboard_unpress(uint8_t out, uint8_t in);

#endif /* MATRIX_KEYBOARD_H_ */
