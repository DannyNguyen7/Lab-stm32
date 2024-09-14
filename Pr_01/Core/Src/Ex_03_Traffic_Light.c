
#include <user.h>
#include <main.h>
#include <stm32f1xx_hal.h>


void Led_run(int tr, int ty, int tg){
	int a = tr *1000;
	int b = ty *1000;
	int c = tg * 1000;

	Led_Red(1);
	HAL_Delay(a);
	Led_Red(0);

	Led_Yellow(1);
	HAL_Delay(b);
	Led_Yellow(0);

	Led_Green(1);
	HAL_Delay(c);
	Led_Green(0);
}
