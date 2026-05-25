#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[]={0,1,1,2,3,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hash[n+1];
    for(int i =0;i<n+1;i++)hash[i]=0;
    for(int i =0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int miss=-1,repeat=-1;
    for(int i =0;i<n;i++)
    {
        if(hash[i] == 2)repeat = i;
        if(hash[i]==0)miss = i;
    }
    printf("repeat: %d\nmiss: %d\n",repeat,miss);
}