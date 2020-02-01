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

void removenth(int n)
{

    node* temp1=head;
    if(n==1)
    {
        head=temp1->next;
        delete temp1;
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
}


void print()
{
    node* tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data;
        tptr=tptr->next;
        if(tptr!=NULL)
            cout<<"->";
    }
    cout<<endl;
}

int main()
{
    int i,n,x;
    printf("Number of element: ");
    create(1);
     create(2);
     create(3);
      create(4);

    print();

    scanf("%d",&n);
    removenth(n);
    print();

    return 0;
}
