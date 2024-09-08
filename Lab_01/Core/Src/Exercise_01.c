/*
 * led.c
 *
 *  Created on: Sep 8, 2024
 *      Author: tiend
 */

#include <Exercise_01.h>


void led_on(led_t* led) {
    HAL_GPIO_WritePin(led->GPIOx, led->GPIO_Pin, GPIO_PIN_SET);
}

void led_off(led_t* led) {
    HAL_GPIO_WritePin(led->GPIOx, led->GPIO_Pin, GPIO_PIN_RESET);
}

void led_run(led_t* led) {
    switch (led->status) {
        case LED_ON:
            led_on(led);
            led->counter--;
            if (led->counter <= 0) {
                led->status = LED_OFF;
                led->counter = led->off_time;
            }
            break;

        case LED_OFF:
            led_off(led);
            led->counter--;
            if (led->counter <= 0) {
                led->status = LED_ON;
                led->counter = led->on_time;
            }
            break;

        default:
            break;
    }
}

