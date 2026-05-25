#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt","r");
    char s[100];
    int line = 1;
    while(fgets(s,sizeof(s),fptr))
    {
        if(line%2 == 1)cout<<s;
        line++;
    }
    fclose(fptr);
    return 0;
}