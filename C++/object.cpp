#include<bits/stdc++.h>
using namespace std;
//class creation
//class keyword class_name
class demo
{
public:
    string name;
    int age;
    void print_data()
    {
        cout<<"name is : "<<name<<endl<<"age is : "<<age<<endl;
    }
};
int main()
{
    //object creation
    //class_name object_name
    demo ob;
    ob.name = "balaji";
    ob.age = 20;
    ob.print_data();
}