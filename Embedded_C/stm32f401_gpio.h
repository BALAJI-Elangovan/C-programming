#ifndef _STM32F401_GPIO_H_
#define _STM32F401_GPIO_H_

#include<stdint.h>
#include<stdio.h>
#define GPIOA_BASE  0x40020000U
#define GPIOB_BASE  0x40020400U
#define GPIOC_BASE  0x40020800U
#define GPIOD_BASE	0x40020C00U
#define GPIOE_BASE	0x40021000U
#define GPIOH_BASE	0x40021C00U
typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
	
}gpio;

#endif 
