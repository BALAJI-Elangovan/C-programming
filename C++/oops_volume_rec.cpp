#include<bits/stdc++.h>
using namespace std;
class rectangle
{   public:
    double l,b,h;
    
};
double vol(const rectangle& r);

int main()
{ rectangle r;
   cout<<"enter the dimensions :";
    
    cin >> r.l;
    cin >> r.b;
    cin >> r.h;
    double ans = vol(r);
    cout<<"the volume is :"<<ans;
}
double vol(const rectangle& r)
    {
        return r.l*r.b*r.h;
    }