#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*first;

void create(int a[],int x)
{   int i;
    struct node *t;
    struct node *last;
    first = malloc(sizeof(struct node));
    first->data = a[0];
    first->prev=first->next=NULL;
    last = first;
    
    for(i=0;i<x;i++)
    {
        t=malloc(sizeof(struct node));
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;

    }
}

void display(struct node *p)
{
    while(p!=0)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int length(struct node *p)
{
    int l =0;
    while(p!=0)
    {
        l++;
        p=p->next;
    }
    return l;
}
void insert(struct node *p,int index,int x)
{
   struct node *t;
   int i;
   
   for(i=0;i<index-1;i++)
        p=p->next;
    t=malloc(sizeof(struct node));
    t->data = x;
    t->prev = p;
    t->next = p->next;
    if(p->next)
        p->next->prev = t;
    p->next = t;
}
void delete(struct node *p,int index)
{   
    int i,x=0;
    for(i=0;i<index;i++)
        p=p->next;
    p->prev->next = p->next;
    if(p->next)
        p->next->prev = p->prev;
    x=p->data;
    free(p);
}
void reverse(struct node *p)
{
    struct node *q=0,*r=0;
   while(p!=0)
   {
     r=q;
    q=p;
    p=p->next;
    q->next = r;
   }
   first = q;
}


int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    create(a,8);
    display(first);
    printf("%d",length(first));
    insert(first,5,11);
    display(first);
    delete(first,5);
    display(first);
    reverse(first);
    display(first);
}