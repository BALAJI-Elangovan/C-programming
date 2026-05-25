#include<stdio.h>
#define MAX 100
//warning is used to throw warnings
int main()
{
#if defined(MAX)
#warning "MAX is  defined"
#endif

}