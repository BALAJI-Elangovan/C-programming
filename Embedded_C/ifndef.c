#include<stdio.h>
//ifnedf is used to check that macro is exisiting are not
//#define MAX 100
int main()
{
    #ifndef MAX
    printf("Not exist");
    return 0;
    #endif
    printf(" exist");
}