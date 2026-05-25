#include<stdio.h>
int sum(int a)
{
    int add = 0;
    add=add+a;
    a--;
    if(a == 0)
        return add;
    return sum(a);
}
int main()
{
    int a = 4;
    printf("%d",sum(a));
}