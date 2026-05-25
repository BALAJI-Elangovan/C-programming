#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n-1;i++)
  {
    for(j=n-i-1;j>0;j--)
    {
      printf(" ");
    }
    for(k=0;k<=2*i;k++)
    {
      printf("*");
    }
    printf("\n");
  }
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