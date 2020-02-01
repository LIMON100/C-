#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;
void addfirst(int value)
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

void removelast()
{
    if(head==NULL)
    {
        cout<<"list is empty."<<endl;
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
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
    cout<<endl;
}

int main()
{
    addfirst(4);
    print();
    addfirst(54);
    print();
    addfirst(87);
    print();
    addfirst(9);
    print();
    addfirst(1);
    print();
    cout<<"After romove elemnet:"<<endl;
    removelast();
    print();

    return 0;
}
