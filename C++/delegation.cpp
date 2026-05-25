#include<bits/stdc++.h>
using namespace std;
class hello
{
    private:
        int x,y,z;
    public:
    hello()
    {
        x=1;y=2;z=3;
        //cout<<endl<<x<<endl<<y<<endl<<z;
    }
     hello(int z):hello()
    {
        this->z = z;
        // cout<<endl<<x<<endl<<y<<endl<<z;
    }
    void show()
    {
         cout<<x<<endl<<y<<endl<<z;
    }
};
int main()
{
    hello h;
    cout<<endl;
    h.show();
    hello h1(10);
    cout<<endl;
    h1.show();

}