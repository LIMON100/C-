#include<iostream>
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

void swapnodes()
{
    node *p,*n,*q,*temp;
    p=head;
    head=p->next;

    while(1)
    {
        q=p->next;
        temp=q->next;
        q->next=p;

        if(temp==NULL || temp->next==NULL)
        {
            p->next=temp;
            break;
        }

        p->next=temp->next;
        p=temp;
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
}


int main()
{
    int i,x,m,n;
    for(i=1;i<=6;i++)
    {
        cin>>x;
        create(x);
    }

    print();
    cout<<endl;
    ///cin>>m>>n;

    cout<<"After swapping values:-"<<endl;
    swapnodes();
    print();
   return 0;

}

