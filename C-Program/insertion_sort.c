#include<stdio.h>
void insertionsort(int a[],int n)
{
    int j,i,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int arr[]= {5,1,2,8,3,5,0,7};
    int l = *(&arr+1)-arr;
    insertionsort(arr,l);
}