#include<bits/stdc++.h>
using namespace std;
class banking
{
    protected:
    string username;
    string acc_no;
    double balance  = 0.0;
    public:
    void acc(string name,string no)
    {
        username = name;
        acc_no = no;

    }
    void deposit(int amount)
    {
        balance += (double)amount;
        cout<<"deposited: "<<amount<<" Balance: "<<balance<<endl;
    }
    void withdraw(int amount)
    {
        if(balance<amount)
        {
            cout<<"insuffucuent amount.";
        }
        else
        {
            balance -= amount;
            cout<<"Balance after withdraw: "<<balance<<endl;
        }
    }
    void display()
    {
        cout<<"username: "<<username<<endl;
        cout<<"account no: "<<acc_no<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
class sav_acc:public banking
{
    public:
        void interest()
        {
           int intrest = balance*0.03;
           balance += intrest;
           cout<<"New Balance: "<<balance<<endl;
        }
};
class curr_acc:public banking
{
    public:
        void penalty()
        {
            if(balance<1000)
            {
                cout<<"The Balance is Too Low you have penalty 50rs"<<endl;
                balance -= 50;
            }
        }
};

int main()
{
    sav_acc s;
    curr_acc c;
    while(1)
    {
        cout<<"Enter your choice: ";
        cout<<"\n1. create\n2. deposit\n3. withdraw\n4. display\n5. exit\n";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
               { cout<<"Enter Name and account number: ";
                string nam;
                string ac;
                cin>>nam;
                cin>>ac;
                s.acc(nam,ac);
                break;}
            case 2:
                {cout<<"Enter the amount to deposit: ";
                int am;
                cin>>am;
                s.deposit(am);
                break;}
            case 3:
               { cout<<"Enter the amount to withdraw: ";
                int a;
                cin>>a;
                s.withdraw(a);
                break;}
            case 4:
               { s.display();
                break;}
            case 5:
                return 0;
        }

    }
}