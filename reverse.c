#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head;
struct node* rev(struct node* head)
{
    struct node *current,*next,*prev;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

 node* insert(node* head,int data)
{
    node* temp=(struct node*)malloc(sizeof(struct node))
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
            temp1->next=temp;
        }
    }

    return head;

}

void print(node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

int main()
{
    struct node* head=NULL;
    head=insert(head,2);
    head=insert(head,45);
    head=insert(head,54);
    head=insert(head,4);
    print(head);
    head=rev(head);
    print(head);
    return 0;
}

