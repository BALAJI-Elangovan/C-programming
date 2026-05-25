#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int n = 5;
    int pos = 1;
    for(int i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;
    for(int i = 0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    
}