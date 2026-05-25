#include<stdio.h>
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int result = (a*b)/gcd(a,b);
    return result;
}
int main()
{
    int a = 4;
    int b = 6;
    printf("the LCM of a and b is %d",lcm(a,b));
}