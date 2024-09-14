//#include <Led.h>
//#include <main.h>
//
//uint16_t Led7Seg[10] = {0xC0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};
//
//void display7SEG(int num){
//	if(num < 0 || num > 9) return;
//	GPIOB->ODR &= 0xFF00;
//	GPIOB -> ODR |= Led7Seg[num];
//}

#include "user.h"
#include "main.h"

uint16_t Led7Seg[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};


void dislay7SEG(int num){
	if (num < 0 || num > 9) return;
	GPIOB->ODR = (GPIOB -> ODR & 0xff80) | Led7Seg[num];
}


void control_countdown(int countdown){
	 for(int i = countdown; i > 0; i--){
		  dislay7SEG(i);
		  HAL_Delay(1000);
	 }
}

void control_countup(int countup){
	 for(int i = countup; i >= 0; i--){
		  dislay7SEG(i);
		  HAL_Delay(1000);
	 }
}
