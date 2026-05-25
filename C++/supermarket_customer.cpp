#include<bits/stdc++.h>
using namespace std;
class supermarket
{
    public:
        int book;
        void purchase(int c)
        {
            cout<<"customer "<<c<<" purchased "<<book<<" book"<<endl;
            
        }
};
int main()
{
    int n;
    cout<<"Enter the number of customer:";
    cin>>n;
     supermarket customer[n];
    for(int i =0;i<n;i++)
    {
        cin>>customer[i].book;
    }
    for(int i =0;i<n;i++)
    {
        customer[i].purchase(i+1);
    }

}