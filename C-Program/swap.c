#include<stdio.h>
int swap(int a,int b)
{
    a = a^b;
    b = a^b;
    a = a^b;

    printf("%d %d",a,b);
}

int main()
{
    int a =10;
    int b =20;
    swap(a,b);
}