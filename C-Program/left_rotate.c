#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n =6;
    int ar[10];
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    for(int i =0;i<pos;i++)
    {
        ar[i]=arr[i];
    }
    for(int i =0;i<n-pos;i++)
    {
        arr[i]=arr[i+pos];
    }
    
    printf("\n");
    for(int i =0;i<n-pos;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<pos;i++)
    {
        printf("%d ",ar[i]);
    }
}