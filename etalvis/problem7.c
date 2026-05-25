#include<stdio.h>
//check first two digit and last two digits are same
int main()
{
    int num;
    scanf("%d",&num);
    int rem = num%100;
    num /= 100;
    if(num == rem)
        printf("1");
    else
        printf("0");
}