#include<iostream>
#include<thread>
using namespace std;
void hello()
{
    cout<<endl<<"hi"<<endl;
}
void hi()
{
    cout<<endl<<"hello"<<endl;
}
int main()
{
    thread t1(hello);
    thread t2(hi);
    t1.join();
    t2.join();
}