#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100]="aabab",ch;
    int itr,in_itr,count=0,print=0;
    for(itr=0;itr<strlen(s);itr++)
    {
        count=0;
        print = 0;
        for(in_itr=0;in_itr<itr;in_itr++)
        {
            if(s[itr] == s[in_itr])
            {
                print = 1;
                break;
            }
        }
        if(print == 0)
        {
            for(in_itr=0;in_itr<strlen(s);in_itr++)
            {
                if(s[itr] == s[in_itr])count++;
            }
            printf("%d%c",count,s[itr]);
        }
        
    }
}