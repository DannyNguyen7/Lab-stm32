/*
 * led.h
 *
 *  Created on: Sep 8, 2024
 *      Author: tiend
 */

#ifndef INC_EXERCISE_01_H_
#define INC_EXERCISE_01_H_


#include "stm32f1xx_hal.h"

typedef enum {
    LED_OFF = 0,
    LED_ON = 1
} led_status_t;

typedef struct {
    GPIO_TypeDef* GPIOx;
    uint16_t GPIO_Pin;
    led_status_t status;
    int counter;
    int on_time;
    int off_time;
} led_t;

void led_init(led_t* led);
void led_on(led_t* led);
void led_off(led_t* led);
void led_run(led_t* led);


#endif
