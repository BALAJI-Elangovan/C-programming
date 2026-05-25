#include<stdio.h>
//const variables are immutable but we can change the value by using pointers 
//(this only applicable for local scope variables)
int main()
{
    int const a = 10;
    int *ptr = (int*)&a;
    *ptr = 20;
    printf("%d",a);
}