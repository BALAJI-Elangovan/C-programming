#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
}*top=0;

void push(char x)
{
    struct node *t = malloc(sizeof(struct node));
    if(t == 0)
        printf("overflow");
    else{
        t->data = x;
        t->next = top;
        top=t;
    }
}

void display()
{
    struct node *p=top;
    while(p!=NULL)
    {
        printf(" %c ",p->data);
        p=p->next;
    }
    printf("\n");
}
int pop()
{
    struct node *t=malloc(sizeof(struct node));int x =-1;
    
    if(top==0)
        printf("empty");
    else
    {
        t = top;
        top = top->next;
        x = t->data;

        free(t);
    }
    return x;
}

int isbalance(char *exp)
{
    int i =0;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
            {
                if(top == 0)
                    return 0;
                else
                    pop();
            }
    }
    if(top == 0)
        return 1;
    else 
        return 0;
}
int main()
{
   char *exp = "(a+b)*(a-b)";
   isbalance(exp);
}