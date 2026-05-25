#include<stdio.h>
int main()
{
    int n = 5;
    int row,col,space,star;
    for(row=1;row<=n;row++)
    {
        for(space=n-row;space>0;space--)
            printf(" ");
        for(star = 1;star<=row;star++)
        {
            printf("* ");
        }
        for(space=n-row;space>0;space--)
            printf(" ");
        printf("\n");
    }
}