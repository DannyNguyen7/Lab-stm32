#include <user.h>
#include <main.h>

void check(){

	for(int i = 3; i < 15; i++){
		HAL_GPIO_WritePin(GPIOA, (1 << i), RESET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(GPIOA, (1 << i), SET);
	}
}
