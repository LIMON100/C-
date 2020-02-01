#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* rev(node* head)
{
    node *current,*next,*prev;
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

node* c(node* head,int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        static node* temp1=head;
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
    node* head=NULL;
    head=c(head,2);
    head=c(head,45);
    head=c(head,54);
    head=c(head,4);
    print(head);
    head=rev(head);
    print(head);
    return 0;
}
