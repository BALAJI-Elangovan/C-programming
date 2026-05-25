#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int i,j,k;
  for(i=0;i<n;i++)
  {
    for(j=n-i;j>0;j--)
    {
      printf(" ");
    }
    for(k=0;k<=2*i;k++)
    {
      printf("*");
    }
    printf("\n");
  }
}
