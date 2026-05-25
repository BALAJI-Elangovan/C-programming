#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

void create(int a)
{
struct node* n = (struct node*)malloc(sizeof(struct node));
n->data =a;
if(head == NULL)
{
    head=n;
    head->next = NULL;
}
else
{
n->next = head;
head= n;
}

}
void traverse()
{
    struct node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void reverse()
{
    struct node *temp,*prev=NULL,*first=NULL;
    temp = head;
    while(temp!=NULL)
    {
        first = temp->next;
        temp->next = prev;
        prev = temp;
        temp = first;
    }
    while(prev!=NULL)
    {
        printf("%d ",prev->data);
        prev = prev->next;
    }
}
int main()
{
    create(10);
    create(20);
    create(30);
    traverse();
    reverse();
}