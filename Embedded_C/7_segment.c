#include<stdio.h>
#include "stm32f401_clock.h"
#include "stm32f401_gpio.h"

#define RCC    ((volatile rcc*)RCC_BASE)
#define GPIOA ((volatile gpio*)GPIOA_BASE)
#define GPIOB ((volatile gpio*)GPIOB_BASE)
#define GPIOC ((volatile gpio*)GPIOC_BASE)
#define GPIOD ((volatile gpio*)GPIOD_BASE)
#define GPIOE ((volatile gpio*)GPIOE_BASE)
#define GPIOH ((volatile gpio*)GPIOH_BASE)	

int main()
{
	RCC->RCC_CR|=(1<<0);
	RCC->RCC_AHB1ENR = RCC->RCC_AHB1ENR | (1<<0) | (1<<1) | (1<<2);
	
	GPIOA->MODER &= ~((3<<12)|(3<<14) | (3<<16) | (3<<18));
	GPIOA->MODER |= ((1<<12)|(1<<14) | (1<<16) | (1<<18));
	GPIOA->OTYPER &= ~((1 << 6) | (1 << 7) | (1 << 8) | (1 << 9));
	GPIOA->OSPEEDR &= ~((3 << 12) | (3 << 14) | (3 << 16) | (3 << 18));

	GPIOA->ODR |= ((1<<6) | (1<<7) | (1<<8) | (1<<9));
	 while (1)
    {
       
    }

}