#include<bits/stdc++.h>
using namespace std;
class demo
{
public:
    int age;
    string name;
    //define the prototype of the member function
    void print_data();

};

//define the member function by using the syntax(return type class name scope resolution(::) func_mem_name)
void demo::print_data()
{
    cout<<"the age is: "<<age<<endl<<"the name is: "<<name<<endl;
}
int main()
{
    demo ob;
    ob.name = "bala";
    ob.age = 20;
    ob.print_data();
}