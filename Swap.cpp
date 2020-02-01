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

void swapnodes(int m,int n)
{
    node *p,*q;
    int temp;
    p=q=head;

    for(int i=0;i<m;i++)
    {
        p=p->next;
    }

    for(int j=0;j<n;j++)
    {
        q=q->next;
    }

    temp=p->data;
    p->data=q->data;
    q->data=temp;
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
    cin>>m>>n;

    swapnodes(m-1,n-1);
    print();
   return 0;

}
