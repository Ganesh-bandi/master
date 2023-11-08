#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void insert(struct node **head,int data)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->link=*head;
    *head=new_node;
}

void rem(struct node *head)
{
    struct node *curr=head;
    while(curr!=NULL)
    {
        struct node *run=curr;
        while(run->link!=NULL)
        {
            if(run->link->data==curr->data)
            {
                struct node *temp=run->link;
                run->link=run->link->link;
                free(temp);
            }
            else
            {
                run=run->link;
            }
        }
        curr=curr->link;
    }
}

void print(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
    printf("\n");
}
int main()
{
    struct node *head=NULL;
    insert(&head,1);
    insert(&head,3);
    insert(&head,1);
    insert(&head,8);
    print(head);
    rem(head);
    print(head);
    
}