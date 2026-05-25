//get the number from the user and sub 5 if the tenth digit is odd without if condition
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int rem = (num%100)/10;
    rem&1 && printf("%d",rem-5) || printf("%d",rem);
    
}