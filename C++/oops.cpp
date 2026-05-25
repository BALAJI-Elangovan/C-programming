#include<bits/stdc++.h>
using namespace std;

//creating abstract class
class abstractemployee{
    virtual void gethike()=0;
};
//to use abstract class in main class we need to sign the contract by just giving :abstract_class name next to main class
class employee:abstractemployee{
  private:
    string name;
    string company;
    int age;


//encapsulation

public:
    void setname(string Name)
    {
        name = Name;
    }
    string getname()
    {
        return name;
    }
    void setcompany(string Company)
    {
        Company = company ;
    }
    string getcompany()
    {
        return company;
    }
    void setage(string Age)
    {
        Age = age;
    }
    int getage()
    {
        return age;
    }

void intro()
{
    cout<<"Name - "<< name << endl;
    cout<<"Company- "<< company << endl;
    cout << "Age- "<< age << endl;
}
// making constructors
employee(string Name,string Company,int Age)
{
     name = Name ;
     company = Company ;
    age = Age  ;
}
void gethike()
{
    if(age>19)
        cout<<endl<<"Got! an hike"<<endl;
}
void work()
    {
        cout<<"Working in Qualcomn"<<endl;
    }
};

class developer : public employee
{
    public:
    string favprogramlang;
    developer(string Name,string Company,int Age,string Favprogramlang)
        : employee(Name, Company, Age)
    {
        favprogramlang = Favprogramlang;
    }
    //polymorphism (many form)
    void work()
    {
        cout<<"Working in Texas Instruments"<<endl;
    }
};


int main()
{ employee employee1 = employee("Balaji E","TEXAS INSTRUMENTS",20);
    // employee1.name = "balaji";                         for default constructors
    // employee1.company = "TEXAS INSTRUMENTS";
    // employee1.age = 20;
   employee1.intro();
   cout<<employee1.getage();
   employee1.gethike();
   developer dev = developer("Balaji E","TEXAS INSTRUMENTS",20,"C");
   dev.work();
   employee1.work();
}