#include<bits/stdc++.h>
using namespace std;
int main()
{
   fstream file;
   file.open("hello.txt", ios::in);
   string s;
   if (file.is_open()) {
       getline(file, s);
       file.close();
   }
   cout<<s;
}