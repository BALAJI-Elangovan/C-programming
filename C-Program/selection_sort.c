#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionsort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        swap(&a[i],&a[k]);
    }
    for(i =0;i<n;i++)
        printf("%d",a[i]);
}

int main()
{
    int arr[] = {7,5,3,9,10,14,2,6};
     int l = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr,l);
}