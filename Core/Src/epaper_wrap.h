#pragma once
#include <stdint.h>
#include "main.h"

static inline void delay_ms(uint16_t ms){
	HAL_Delay(ms);
}

static inline void led_toggle(void){
	HAL_GPIO_TogglePin(led_GPIO_Port,led_Pin);
}

