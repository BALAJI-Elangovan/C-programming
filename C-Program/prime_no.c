#include<stdio.h>
int main()
{
    int start = 41,end = 100,c=0;
   for(int num = start;num<=end;num++)
  {
    c=0;
    for(int i =1;i*i<=num;i++)
    {
    
        if(num%i == 0)
        {
            c++;
        
        if(num/i != i)
        {
            c++;
        }
            }
        }
        if(c==2)
        {
        printf("%d ",num);
        }
        }
    }       
