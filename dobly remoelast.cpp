#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node *pre;
    node *next;
};

node* head=NULL;
void addfirst(int value)
{
    node* tptr;
    node* nptr=new node;
    nptr->pre=NULL;
    nptr->data=value;
    nptr->next=NULL;

    if(head==NULL)
    {
        head=nptr;
        tptr=head;
    }

    else
    {
        nptr->next=tptr;
        tptr->pre=nptr;
        tptr=nptr;
        head=tptr;
    }
}

void removelast()
{
    node* tptr=head;
    if(head==NULL)
    {
        cout<<"List is empty."<<endl;
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }

    else
    {
        node* tptr=head;
        while(tptr->next->next!=NULL)
        {
            tptr=tptr->next;
        }

        tptr->next=NULL;
    }
}

void print()
{
    node* tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}

int main()
{
    addfirst(34);
    print();
    addfirst(3);
    print();
    addfirst(99);
    print();
    addfirst(76);
    print();

    cout<<"After remove 1st element: "<<endl;
    removelast();
    print();
    removelast();
    print();

    return 0;
}

