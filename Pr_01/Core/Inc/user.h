/*
 * Led.h
 *
 *  Created on: Sep 11, 2024
 *      Author: tiend
 */

#ifndef INC_USER_H_
#define INC_USER_H_

#include "stm32f1xx_hal.h"


typedef enum{
	led_red,
	led_yellow,
	led_green,
}led_state_t;

extern int led_current;

#define Led_Red(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5 , x);
#define Led_Yellow(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, x);
#define Led_Green(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, x);

void Led_run(int tr, int ty, int tg);
void dislay7SEG(int num);
void control_countdown(int countdown);
void control_countup(int countup);
void control_traffic_light(int red_countdown, int yellow_countdown, int green_countdown);
void check();

#endif /* INC_USER_H_ */
