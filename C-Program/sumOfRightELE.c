#include<stdio.h>
int main()
{
    int arr[]={10,20,30,46,50};int sum=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)sum+=arr[i];
    for(int i =0;i<n;i++)
    {
        sum = sum-arr[i];
        arr[i] = sum;
        printf("%d ",arr[i]);
    }
}