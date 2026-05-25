#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<n;i++)
  {
    for(j=n-i;j>0;j--)
    {
      printf(" ");
    }
    for(k=1;k<=2*i-1;k++)
    {
      printf("%d",i);
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
      printf("%d",i);
    }
    printf("\n");
  }
}