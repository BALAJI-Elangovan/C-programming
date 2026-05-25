#include<stdio.h>
int main()
{
    int const a = 10;
    int *const ptr =(int*) &a;
    int b = 20;
    //in this case the const belongs to the pointed address so, it will allow
    // changes in value but not in address
    *ptr = 30;
    printf("%d",*ptr);
}