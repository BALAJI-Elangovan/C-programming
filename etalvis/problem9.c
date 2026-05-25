#include<stdio.h>
//program to print sum of digit = 7
int main()
{

    int i =1,j = 0;
    l1:if(i>0)
    {
        l2:if(j<=i)
        {
            if(j+i == 7)
                printf("%d%d\n",i,j);
            j++;
            goto l2;
        }
        i++;
        goto l1;
    }
}