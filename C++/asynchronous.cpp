#include<bits/stdc++.h>
#include<pthread.h>
#include<unistd.h>
using namespace std;
typedef void (*func)();
void callback()
{
    cout<<"asynchronous"<<endl;
}
void* tfunc(void* arg)
{
    func f = (func)arg;
    sleep(2);
    f();
    return nullptr;
}
int main()
{
pthread_t t;
if(pthread_create(&t, nullptr, tfunc, (void*)callback)!=0)cout<<"error";
pthread_join(t,nullptr);
}