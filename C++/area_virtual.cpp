#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
class area
{
    public:
    virtual void cal(int a)= 0;
};
class circle:public area
{
    public:
    void cal(int r)
    {
        cout<<PI*r*r<<endl;
    }
};
class square:public area
{
    public:
    void cal(int a)
    {
        cout<<a*a<<endl;
    }
};

int main()
{
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    int a;
    cout<<"Enter the area: ";
    cin>>a;
   circle cr;
   cr.cal(r);
    square sq;
    sq.cal(a);

}