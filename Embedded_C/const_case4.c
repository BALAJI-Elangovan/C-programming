#include<stdio.h>
//in this case both the address and value is const we cant change anyone of this.
int main()
{
    int const a = 10;
    int b = 20;
    int const *const ptr = (int*)&a;
    ptr = &b;
    *ptr = 20;
    printf("%d",*ptr);
}