//reversing last two digits
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the four digit number: ");
    scanf("%d",&num);
    int rem = num%100;
    num=num/100;
    num*=100;
    int res=0;
    while(rem>0)
    {
        int temp = rem%10;
            res = res*10 + temp;
            rem/=10;
    }
    printf("%d",num+res);
}