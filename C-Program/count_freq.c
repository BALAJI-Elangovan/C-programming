#include<stdio.h>
int main()
{
    int a[] = {1,2,2,2,6,5,3,3,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i =0;i<n;i++)
    {
        int count = 0;
        for(int j =0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

            printf("\n the count of %d is %d",a[i],count);
    }
}