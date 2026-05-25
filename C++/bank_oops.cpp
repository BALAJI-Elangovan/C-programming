#include<bits/stdc++.h>
using namespace std;
class bankaccount
{
private:
int account_number;
string account_holder;
double balance;
public:

void create(string name,int acc_no,double balance)
{
    this->account_holder = name;
    this->account_number = acc_no;
    this->balance = balance;
}
void deposit(double amount)
{
    this->balance += amount;
    cout<<"AMOUNT DEPOSITED!"<<endl;
    cout<<"BALANCE: "<<this->balance<<endl;
}
void withdraw(double amount)
{
    if(amount>this->balance)
    {
        cout<<"INSUFFICIENT BALANCE! "<<endl;
        return;
    }
    else
    {
        this->balance -= amount;
        cout<<"AMOUNT WITHDRAWED! "<<endl;
        cout<<"BALANCE: "<<this->balance<<endl;
    }
}
void display()
{
    cout<<"account Holder: "<<this->account_holder<<endl;
    cout<<"aacount number: "<<this->account_number<<endl;
    cout<<"BALANCE: "<<this->balance<<endl;
}
int getaccno()
{
    return account_number;
}

};
int main()
{
vector<bankaccount>bank;
while(1)
{
    string name;
    int acc_no;
    double balance;
    int amount;
    int op;
   
    cout<<"Enter the option: "<<endl;
    cout<<"1. CREATE ACCOUNT"<<endl<<"2. DEPOSIT AMOUNT"<<endl<<"3.WITHDRAW"<<endl;
    cout<<"4.BALANCE DISPLAY"<<endl<<"5.EXIT"<<endl;
    cin>>op;
//     if (cin.fail()) {
//     cin.clear(); // clear error flag
//     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
//     cout << "Invalid input! Please enter a number.\n";
//     continue; // back to menu
// }
    switch(op)
    {
        case 1:
        
        {
            cout<<"Enter the account holder name: "<<endl;
        cin>>name;
        cout<<"Enter the account holder number: "<<endl;
        cin>>acc_no;
        cout<<"Enter the initial amount: "<<endl;
        cin>>balance;
        bankaccount b;
        b.create(name,acc_no,balance);
        bank.push_back(b);
        cout<<"Account is created!"<<endl;
        break;
    }
        case 2:
        {
           cout<<"Enter the bank account number: "<<endl;
           int no;
           cin>>no;
         
           for(auto &it:bank)
           {
            if(it.getaccno() == no)
            {
                cout<<"account found!"<<endl;
                int amount;
                cout<<"Enter the ammount to deposit: "<<endl;
                cin>>amount;
                it.deposit(amount);
                break;
            }
           }
        break;
        }
        case 3:
    {
        cout<<"Enter your account number: "<<endl;
        int no;
        cin>>no;
        for(auto &it:bank)
        {
            if(it.getaccno() == no)
            {
                cout<<"Enter the amount to withdraw: "<<endl;
                int amount;
                cin>>amount;
                it.withdraw(amount);
                break;
            }
            
        }
            break;
        
    }
    case 4:
    {
        for(auto &it:bank)
        {
            it.display();
        }
        break;
    }
    case 5:
    {
        return 0;
    }
    break;
       
    }
}
}