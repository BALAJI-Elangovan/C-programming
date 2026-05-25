//subract 5 if the given number is odd and dont use if condition
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    num&1 && printf("%d",num-5) || printf("%d",num);
}