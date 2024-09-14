#include "user.h"
#include "main.h"
int led_current = led_red;
void control_traffic_light(int red_countdown, int yellow_countdown, int green_countdown){
	switch (led_current) {
		      case led_red:
		    	  Led_Red(1);
		          control_countdown(red_countdown);
		          //HAL_Delay(red_countdown);
		          Led_Red(0);
		          led_current = led_yellow;
		           break;
		      case led_yellow:
		    	  Led_Yellow(1);
		          control_countdown(yellow_countdown);
		          //HAL_Delay(yellow_countdown);
		          Led_Yellow(0);
		          led_current = led_green;
		            break;
		      case led_green:
		    	  Led_Green(1);
		          control_countdown(green_countdown);
		          Led_Green(0);
		          led_current = led_red;
		           break;
		      default:
		           break;
		  }

}
