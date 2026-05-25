#include<stdio.h>
//print the range without loops
int main()
{
    int num;
    scanf("%d",&num);
    int i = 1;
    loop:if(i<=num) 
    {
        printf("%d\n",i);
        i++;
        
            goto loop;
    }
}