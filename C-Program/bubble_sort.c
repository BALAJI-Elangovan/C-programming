#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int arr[],int n)
{
    int flag;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        flag =0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int a[]= {6,2,4,1,5,9,2,3};
    int n = *(&a+1)-a;
    bubblesort(a,n);
}