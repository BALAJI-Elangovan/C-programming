#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int size;
    int front;
    int rear;
    int *arr;

}*q;

void create(struct node *p,int x)
{
    p->size = x;
    p->front=p->rear =-1;
    p->arr=malloc(p->size * sizeof(int));
    
}

void enqueue(struct node *p,int x)
{
    if(p->rear == p->size-1)
        printf("queue is full");
    else
        {
            p->rear++;
            p->arr[p->rear] = x;
        }
}
int dequeue(struct node *p)
{
    int x =-1;
    if(p->front == p->rear)
        printf("empty");
    else
        {
            p->front++;
            x=p->arr[p->front];
        }
        return x;
      
}

void display(struct node *p)
{
    int i=0;
    for(i=p->front+1;i<=q->rear;i++)
    {
        printf(" %d ",p->arr[i]);
    }
}

int main()
{
    q = malloc(sizeof(struct node));
    create(q,5);
    enqueue(q,5);
    enqueue(q,115);
    display(q);
}