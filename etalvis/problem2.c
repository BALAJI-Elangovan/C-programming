//getting two digit and making 10 digit as one
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int rem = num%10;
    num/=100;
    num = 10;
    printf("%d",num+rem);
}