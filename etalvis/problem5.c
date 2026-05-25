#include<stdio.h>
int main()
{
    //get the number from the user substract 5  if the sum of digits is odd without if
int num;
scanf("%d",&num);
int copy=num;
int sum =0;

while(copy>0)
{
    int rem = copy%10;
    sum += rem;
    copy/=10;
}
sum&1 && printf("%d",num-5) || printf("%d",num);
}