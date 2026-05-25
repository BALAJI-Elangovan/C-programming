#include<stdio.h>
int main()
{
    int n = 5;
    int num = n*2;
    for(int itr =n-1;itr>=0;itr--)
    {
        for(int in_itr=0;in_itr<itr;in_itr++)
        {
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
}