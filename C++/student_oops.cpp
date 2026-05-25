#include<bits/stdc++.h>
using namespace std;
#define n 10
int i =0;
struct student
{
    char name[20];
    char dep[5];
    float cgpa;
}*s[n];
void add();
void remove();
void print();
int main()
{
    
    while(1)
    {
        cout<<"1.add"<<endl<<"2.remove"<<endl<<"3.print"<<endl<<"4.No thanks"<<endl;
        int a;
        cin>>a;
        
        switch(a)
        {
            case 1:
                add();
                break;
            case 2:
                remove();
                break;
            case 3:
                print();
                break;
            case 4:
                cout<<"visit again thankyou!!";
                return 0;
        }
    }
    return 0;
}
void add()
{
    if(i < n) {
        s[i] = new student;
        cout<<"Enter the name: ";
        cin>>s[i]->name;
        cout<<"Enter the departement: ";
        cin>>s[i]->dep;
        cout<<"Enter the cgpa: ";
        cin>>s[i]->cgpa;
        i++;
    } else {
        cout << "Student array is full!" << endl;
    }
}
void remove()
{
if(i<0)
{
    cout<<"Student array is empty !";
}
else
{
    i--;
}
}
void print()
{
    for(int ind=0;ind<i;ind++)
    {
        cout<<"Name : "<<s[ind]->name<<endl;
        cout<<"Departement : "<<s[ind]->dep<<endl;
        cout<<"CGPA : "<<s[ind]->cgpa<<" NAlla padi"<<endl;
    }
}