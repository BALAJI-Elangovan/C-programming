#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *next;
}*head;

void traverse()
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct node *middle(struct node *head)
{
    struct node *fast,*slow;
    fast = head;
    slow = head;
    fast = fast->next;
    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct node *merge(struct node *l1,struct node *l2)
{
    struct node *dummy = (struct node*)malloc(sizeof(struct node));
    struct node *temp = dummy;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data <= l2->data)
        {
            temp->next = l1;
            l1 = l1->next;
        }
        else if(l1->data >= l2->data)
        {
            temp->next= l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    if(l1 != NULL)
        {
            temp->next=l1;
        }
    if(l2 != NULL)
        {
            temp->next = l2;
        }
    temp = dummy->next;
    free(dummy);
    return temp;
}

struct node *sort(struct node *head)
{
    if(head == NULL || head->next == NULL)return head;
    struct node *left;
    struct node *right;
    left = head;
    struct node *mid = middle(head);
    right = mid->next;
    mid->next = NULL;
    left = sort(left);
    right = sort(right);
    return merge(left,right);
}
void create(int a)
{
    struct node *n  = (struct node*)malloc(sizeof(struct node));
    n->data = a;
    if(head == NULL)
    {
        head = n;
        head->next = NULL;
    }
    else
    {
        n->next = head;
        head = n;
    }
}
int main()
{
    create(60);
    create(30);
    create(20);
    create(80);
    create(10);
    create(89);
    create(1);
    traverse();
    sort(head);
    traverse();
}