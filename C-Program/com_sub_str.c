#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int maxstring(char *a,char *b);
int main()
{
 char *a = "hello";
 char *b = "ello";
 int ans= maxstring(a,b);
 printf("%d",ans);
}

int maxstring(char *a,char *b)
{
    int m = strlen(a);
    int n = strlen(b);
    int res=0;
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            int cur=0;
            while((i+cur)<m && (j+cur)<n && a[i+cur] == b[j+cur])cur++;
            if(cur>res)res=cur;
        }
            
    }
    return res;
}