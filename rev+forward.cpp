#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void print(node* p)
{
    if(p==NULL)
       {
           return ;
       }
    printf("%d ",p->data);
    print(p->next);
}

 node* create(node* head,int value)
{
    node* temp=new node;
    temp->data=value;
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

int main()
{
    node* head=NULL;
    head=create(head,3);
     head=create(head,45);
      head=create(head,677);
       head=create(head,9);
       print(head);
}
