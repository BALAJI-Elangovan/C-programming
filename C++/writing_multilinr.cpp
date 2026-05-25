#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("hello.txt","w");
    string s;
    while(getline(cin,s))
    {
        fprintf(file,"%s\n",s.c_str());
        
    }
    fclose(file);
}