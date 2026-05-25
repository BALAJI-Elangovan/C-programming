#include<stdio.h>
int main()
{
    int n = 5;
    int num = 1;
    for(int itr =0;itr<n;itr++)
    {
        for(int in_itr=0;in_itr<itr;in_itr++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}