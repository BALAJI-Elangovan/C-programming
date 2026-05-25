#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
    int data;
    struct node*next;
};

int main()
{
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    struct node *p,*head=NULL,*temp=NULL;
    for(int i =0;i<5;i++)
    {
        p=malloc(sizeof(struct node));
        p->data = a[i];
        p->next=NULL;
        if(head == NULL)
        {
            head = p;
            temp = head;
        }
        else
        {
            temp->next = p;
            temp = temp->next;
        }
    }
   temp = head;
   while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}