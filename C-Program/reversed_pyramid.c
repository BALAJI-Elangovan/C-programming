#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i,j,k;
    for(i=n;i>0;i--)
  {
    for(j=n-i;j>0;j--)
    {
      printf(" ");
    }
    for(k=2*i-1;k>0;k--)
    {
      printf("*");
    }
    printf("\n");
  }
}