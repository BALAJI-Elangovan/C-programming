#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *l,*r;
};

struct node *create()
{
    int x;
    printf("Enter the value : \n");
    scanf("%d",&x);
    if(x == -1)
    {
        return NULL;
    }
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->data = x;
    newnode->l = create();
    newnode->r = create();
    return newnode;
}
void print(struct node *n)
{
    if(n == NULL) return;
    printf("%d\n", n->data);
    print(n->l);
    print(n->r);
}
int main()
{
    struct node *root = create();
    print(root);
}