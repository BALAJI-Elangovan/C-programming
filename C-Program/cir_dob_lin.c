#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*first;
void create(int a[],int n)
{
    struct node *t,*last;
    first = malloc(sizeof(struct node));
    first->data = a[0];
    first->prev = first -> next = first;
    last = first;
    int i;
    for(i=1;i<n;i++)
    {
        t=malloc(sizeof(struct node));
        t->data=a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    do
    {
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=first);
    printf("\n");
}
void insert(struct node *p,int index,int x)
{
    struct node *t;
    t=malloc(sizeof(struct node));
    t->data = x;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
    }
    t->next = p->next;
    p->next = t;
    t->prev = p;
    if(p->next)
        p->next->prev = t;
}
void reverse(struct node *p)
{
    struct node *q,*r;
    do{
        r=q;
    q=p;
    p=p->next;
    q->next = r;
    }while(p!=first);
    first = q;
}
void mid()
{
    struct node *q,*p;q=p=first;
    while(q)
    {
        q=q->next;
        if(q)
            q=q->next;
        if(q)
            p=p->next;
    }
    printf("\n%d",p->data);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8};int l =8;
    create(a,l);
    display(first);
    insert(first,4,44);
    display(first);
    reverse(first);
    display(first);
    mid();
}

