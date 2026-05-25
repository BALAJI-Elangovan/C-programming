#include<stdio.h>
//#define MAX 100
//#define MIN 100
int main()
{
    #if defined(MAX)
    printf("hello");
    #elif defined(MIN)
    printf("hi");
    #else
     printf("hai");
    #endif
}