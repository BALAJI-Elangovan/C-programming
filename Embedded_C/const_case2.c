#include<stdio.h>
//in this case we can change the variable of the pointer value but we cant change the address
int main()
{
    int const a = 10;
    int b = 20;
    int const*data = (int*)&a;
    //in this the const pointer to the deference, which means the value in the pointed address
    data = &b;
    printf("%d",*data);
}