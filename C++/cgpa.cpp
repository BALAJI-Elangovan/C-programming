#include<bits/stdc++.h>
using namespace std;
#define max_student 5

int ind = 0;
struct student
{
char name[50];
char dept[50];
float cgpa;
}*s[max_student];

void add(const char* name,const char* dep,float cg)
{
    if(ind<max_student)
    {
    s[ind] = new student; // Allocate memory for new student
    strcpy(s[ind]->name,name);
    strcpy(s[ind]->dept,dep);
    s[ind]->cgpa = cg;
    ind++;
    }
    else
    {
        throw "list is full";
    }
}
void remove()
{
    if(ind != 0)
    {
        delete s[ind - 1]; // Free the memory of the last student
        s[ind - 1] = nullptr;
        ind--;
    }
    else
    {
        throw "list is empty";
    }
}
void print()
{
    if(ind >= 0)
    {
        for(int i =0;i<ind;i++)
        {
            cout<<endl<<s[i]->name<<endl<<s[i]->dept<<endl<<s[i]->cgpa<<endl;
        }
    }
}
int main()
{
    try
    {
        add("balaji","EEE",10.00);
        add("balaji","EEE",10.00);
        add("balaji","EEE",10.00);
        add("balaji","EEE",10.00);
        add("balaji","EEE",10.00);
        add("balaji","EEE",10.00);
       
    }
    catch(const char* e)
    {
        cout<<"Exception: "<<e<<endl;
    }
    print();
    try
    {
         remove();
    }
    catch(const char* e)
    {
        cout<<"Exception: "<<e<<endl;
    }
    print();
}