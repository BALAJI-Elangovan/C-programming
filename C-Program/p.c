#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>

void printdata(uint32_t data);

  typedef struct {
      volatile uint32_t MODER;    // GPIO port mode register
      volatile uint32_t OTYPER;   // GPIO port output type register
      volatile uint32_t OSPEEDR;  // GPIO port output speed register
      volatile uint32_t PUPDR;    // GPIO port pull-up/pull-down register
      volatile uint32_t IDR;      // GPIO port input data register
      volatile uint32_t ODR;      // GPIO port output data register
      volatile uint32_t BSRR;     // GPIO port bit set/reset register
      volatile uint32_t LCKR;     // GPIO port configuration lock register
      volatile uint32_t AFR[2];   // GPIO alternate function low/high register
  } gpio_def;

  gpio_def *gpioa = (gpio_def *)0x50000000;
  gpio_def *gpiob = (gpio_def *)0x50000400;
  gpio_def *gpioc = (gpio_def *)0x50000800;

  typedef struct {
      volatile uint32_t RCC_CR;
      volatile uint32_t RCC_ICSCR;
      volatile uint32_t RCC_CFGR;
      volatile uint32_t RCC_PLLCFGR;
      volatile uint32_t reserved[2];
      volatile uint32_t RCC_CIER;
      volatile uint32_t RCC_CIFR;
      volatile uint32_t RCC_CICR;
      volatile uint32_t RCC_IOPRSTR;
      volatile uint32_t RCC_AHBRSTR;
      volatile uint32_t RCC_APBRSTR1;
      volatile uint32_t RCC_APBRSTR2;
      volatile uint32_t RCC_IOPENR;
      volatile uint32_t RCC_AHBENR;
      volatile uint32_t RCC_APBENR1;
      volatile uint32_t RCC_APBENR2;
      volatile uint32_t RCC_IOPSMENR;
  } rcc_def;

  rcc_def *rcc = (rcc_def *)0x40021000;

 

  // GPIO configuration
 

void printdata(uint32_t data) {
    if (data & 0x01) gpioa->ODR |= (1 << 15);
    else gpiob->ODR &= (~(1 << 15));
    if (data & 0x02) gpiob->ODR |= (1 << 5);
    else gpiob->ODR &= (~(1 << 5));
    if (data & 0x04) gpiob->ODR |= (1 << 4);
    else gpiob->ODR &= (~(1 << 4));
    if (data & 0x08) gpiob->ODR |= (1 << 10);
    else gpiob->ODR &= (~(1 << 10));
    if (data & 0x10) gpiob->ODR |= (1 << 3);
    else gpiob->ODR &= (~(1 << 3));
    if (data & 0x20) gpioa->ODR |= (1 << 10);
    else gpioa->ODR &= (~(1 << 10));
    if (data & 0x40) gpiob->ODR |= (1 << 6);
    else gpiob->ODR &= (~(1 << 6));
    if (data & 0x40) gpiob->ODR |= (1 << 7);
    else gpiob->ODR &= (~(1 << 7));
  }

int main()
{
   gpioa->MODER |= (1 << 16) | (1 << 20) | (1 << 30);
  gpiob->MODER |= (1 << 8) | (1 << 20) | (1 << 10) | (1 << 6) | (1 << 12) | (1 << 14);
  gpioc->MODER |= (1 << 8) | (1 << 10);
    printdata(0x4F);
}
 