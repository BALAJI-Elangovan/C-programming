#include<stdio.h>
//get the number and subtract 5 if the 1s and 100th digit is odd without if condition
int main()
{
    int num;
    scanf("%d",&num);
    int ones = num%10;
    int hundreds = (num/100)%10;
    (ones&1 && hundreds&1) && printf("%d",num-5) || printf("%d",num);

}