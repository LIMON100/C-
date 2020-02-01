#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;
void create(int value)
{
    node* nptr=new node;
    nptr->data=value;
    nptr->next=NULL;

    if(head==NULL)
    {
        head=nptr;
    }
    else
    {
        nptr->next=head;
        head=nptr;

    }
}

void push(node** head_r,int value)
{
    node* new =create(value);
    new->next=(*head_r);
    (*head_r)=new_node;

}

int main()
{
    node* first=NULL;
    node* second=NULL;
    node* res=NULL;

    push(&first,6);
    push(&first,4);
    push(&first,9);
    push(&first,5);
    push(&first,7);
    printf("Print the first element: ");
    print(first);

    push(&second,8);
    push(&second,4);
    printf("Print the second element: ");
    print(second);

    return 0;
}
