#include<stdio.h>
struct node
{
    char x,y,z;
};
int main()
{
    struct node q = {'1','0','a'+2};
    struct node *p = &q;
    printf("%c %c",*((char*)p+1),*((char*)p+2));
}