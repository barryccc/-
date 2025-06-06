#ifndef _led_H
#define _led_H

#include "system.h"
#include <stdbool.h>

/*  LED时钟端口、引脚定义 */
#define LED1_PORT 			GPIOB   
#define LED1_PIN 			GPIO_Pin_5
#define LED1_PORT_RCC		RCC_APB2Periph_GPIOB

#define LED2_PORT 			GPIOE   
#define LED2_PIN 			GPIO_Pin_5
#define LED2_PORT_RCC		RCC_APB2Periph_GPIOE


#define LED1 PBout(5)  	
#define LED2 PEout(5)  	


void LED_Init(void);
void LED_ON(void);
void LED_OFF(void);
void LED_Toggle(void);

//get LED status
bool LED1_Status(void);
bool LED2_Status(void);


#endif
