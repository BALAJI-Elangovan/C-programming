#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *rfile;
    FILE *wfile;
    rfile = fopen("hello.txt","r");
    if(!rfile)cout<<"file is not opened";
    wfile = fopen("chello.txt","w");
    if(!wfile)cout<<"file is not opened";
    char buffer[1000];
    while(fgets(buffer,sizeof(buffer),rfile))
    {
        fputs(buffer,wfile);
        cout<<buffer<<endl;
    }
    fclose(rfile);
    fclose(wfile);
    return 0;
}