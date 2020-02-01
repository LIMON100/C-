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
        static node* tptr=head;
        tptr->next=nptr;
        tptr=nptr;
    }
}

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

void insertnth(int value,int n)
{
    node* nptr=new node;
    nptr->data=value;
    nptr->next=NULL;

    if(n==1)
    {
        nptr->next=head;
        head=nptr;
        return;
    }

    node* tptr=head;
    for(int i=0;i<n-2;i++)
    {
        tptr=tptr->next;
    }

    nptr->next=tptr->next;
    tptr->next=nptr;
}


void removefirst()
{
    if(head==NULL)
    {
        printf("List is empty:\n");
    }
    else
    {
        head=head->next;
    }
}

void removelast()
{
    if(head==NULL)
    {
        printf("The list is empty:\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }
    else
    {
        node *tptr=head;
        while(tptr->next->next!=NULL)
        {
            tptr=tptr->next;
        }
        tptr->next=NULL;

    }
}

removenth(int x)
{
    node* nptr=head;

    if(x==1)
    {
        head=nptr->next;
        delete nptr;
    }

    for(int i=0;i<x-2;i++)
    {
        nptr=nptr->next;
    }

    node* tptr=nptr->next;
    nptr->next=tptr->next;
    delete tptr;
}

void print()
{
    node* tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
    printf("\n");
}

int main()
{
    int i,n,x;
    printf("Enter how many number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&i);
        create(i);
    }
    print();

    /*for(i=1;i<=n;i++)
    {
        scanf("%d",&i);
        addfirst(i);
    }
    print();

    /*removefirst();
    printf("After remove 1st element:\n");
    print();

   removelast();
   print();*/

    printf("Enter a position:\n");
    scanf("%d",&x);
    removenth(x);
    print();

    return 0;
}
