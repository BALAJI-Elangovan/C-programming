#include<stdio.h>
/*RCC_CR  = BASE_ADDRESS+OFFSET;
RCC_AHB1ENR = BASE ADDRESS + OFFSET;
GPIOA_MODER = BASE ADDRESS + OFFSET;
GPIOA_TYPER = BASE ADDRESS + OFFSET;
GPIOA_SPEEDR = BASE ADDRESS + OFFSET;
GPIOA_ODR = BASE ADDRESS + OFFSET;
*/
volatile unsigned int *RCC_CR = (unsigned int*)  0x40023800+0x00;
volatile unsigned int *RCC_AHB1ENR = (unsigned int*)  0x40023830;
volatile unsigned int *GPIOA_MODER = (unsigned int*)  0x40020000;
volatile unsigned int *GPIOA_TYPER = (unsigned int*) 0x40020004;
volatile unsigned int *GPIOA_SPEEDR = (unsigned int*) 0x40020008;
volatile unsigned int *GPIOA_ODR = (unsigned int*) 0x40020014;

int main()
{
	*RCC_CR = 0x00000001;
	*RCC_AHB1ENR = 0x00000001;
	*GPIOA_MODER = 0x00000400;
	*GPIOA_TYPER = 0x0000;
	*GPIOA_SPEEDR =0x0000000;
	while(1)
	{
		*GPIOA_ODR = 0x0020;
		
	}
	return 0;
}