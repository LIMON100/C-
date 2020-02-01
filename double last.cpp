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
void addlast(int value)
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
        tptr->next=nptr;
        nptr->pre=tptr;
        tptr=nptr;
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
    int i,n,x;
    cout<<"No of element: ";
    scanf("%d",&n);
    cout<<"Enter elements: ";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        addlast(x);
    }

     print();
    return 0;
}
