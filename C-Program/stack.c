#include<stdio.h>
#include<stdlib.h>

 struct stack{
    int size;
    int top;
    int *p;
}*st;

void create(struct stack *a)
{
    a->size = 5;a->top = -1;
    a->p = malloc(a->size*sizeof(int));
}
void push(struct stack *a,int x)
{
    if(a->top == a->size-1)
        printf("invalid");
    else
    {
        a->top++;
        a->p[a->top] = x;
    }
}

void pop(struct stack *a)
{
    int x =-1;
    if(a->top == -1)
        printf("inavlid");
    else
        {
            
            x=a->p[a->top--];
        }
        printf("%d",x);
}
void display(struct stack *a)
{
    int i ;
    for(i=a->top;i>=0;i--)
    {
        printf(" %d\n ",a->p[i]);

    }
}
int main()
{struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    create(st);
    push(st,4);
    push(st,5);
    display(st);
    pop(st);
}