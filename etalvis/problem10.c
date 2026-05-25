#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    //program to swap 1st and last digit in number
int num;
scanf("%d",&num);
int len = (int)log10(num)+1;

int power = 1;
loop:if(len>0)
{
    power*=10;
    len--;
    goto loop;
}
power/=10;
int first_digit = num/power;
int last_digit = num%10;
printf("%d",last_digit);
num/=10;
power/=10;
printf("%d",num%power);
printf("%d",first_digit);
}