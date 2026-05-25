#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct node *p;
    p=malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("FULL");
    }
    else
    {
        p->data =x;
        p->next = NULL;
        if(front == NULL)
            front=rear=p;
    else
    {
        rear->next = p;
        rear = p;
    }
    }
    
    
}

int dequeue()
{
    struct node *p;
    int x = -1;
    if(front == NULL)
        printf("empty");
    else
    {
        x= front->data;
        p=front;
        front = front->next;
        free(p);
    }
}

void display()
{
    struct node *p = front;
   
    while(p)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(10);
    enqueue(100);
    dequeue();
    display();
}