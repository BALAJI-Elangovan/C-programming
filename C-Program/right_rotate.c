#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n =6;
    int ar[10];
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    for(int i =n-pos;i<n;i++)
    {
        ar[i-n+pos]=arr[i];
    }
   
}