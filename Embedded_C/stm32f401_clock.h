#ifndef _STM32F401_CLOCK_H_
#define _STM32F401_CLOCK_H_
#include<stdint.h>
#define RCC_BASE 0x40023800U
typedef struct
{
volatile uint32_t RCC_CR;
volatile uint32_t RCC_PLLCFGR;
volatile uint32_t RCC_CFGR;
volatile uint32_t RCC_CIR;
volatile uint32_t  RCC_AHB1RSTR;	
volatile uint32_t  RCC_AHB2RSTR;	
volatile uint32_t Reserved;
volatile uint32_t Reserved1;
volatile uint32_t  RCC_APB1RSTR;
volatile uint32_t   RCC_APB2RSTR;
volatile uint32_t reserved0[2];
volatile uint32_t  RCC_AHB1ENR;	
volatile uint32_t RCC_AHB2ENR;	
volatile uint32_t Reserved2;	
volatile uint32_t Reserved3;	
volatile uint32_t  RCC_APB1ENR;	
volatile uint32_t  RCC_APB2ENR;	
volatile uint32_t  Reserved4;	
volatile uint32_t  Reserved5;	
volatile uint32_t  RCC_AHB1LPENR;
volatile uint32_t  RCC_AHB2LPENR;
volatile uint32_t  Reserved6;
volatile uint32_t  Reserved7;	
volatile uint32_t  RCC_APB1LPENR;	
volatile uint32_t RCC_APB2LPENR;	
volatile uint32_t  Reserved8;	
volatile uint32_t  Reserved9;	
volatile uint32_t  RCC_BDCR;	
volatile uint32_t  RCC_CSR;	
volatile uint32_t  Reserved10;	
volatile uint32_t  Reserved11;	
volatile uint32_t RCC_SSCGR;	
volatile uint32_t RCC_PLLI2SCFGR;	
volatile uint32_t  RCC_DCKCFGR;	
}rcc;


#endif