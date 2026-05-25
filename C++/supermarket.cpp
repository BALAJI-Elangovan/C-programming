#include<bits/stdc++.h>
using namespace std;
class supermarket
{
    public:
        int book;
        void purchase()
        {
            cout<<"I purchased "<<book<<" book.";
        }
}customer;
int main()
{
    cout<<"Enter the number of book purchased :";
    cin>>customer.book;
    customer.purchase();
}