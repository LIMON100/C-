#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;

void push(int value)
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

void remdup()
{
    node* p=head;
    node* q;
    while(p!=NULL && p->next!=NULL)
    {
        if(p->data==p->next->data)
        {
            q=p->next->next;
            p->next=q;
        }
        p=p->next;
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
    int i,x,n;
    cout<<"No of element: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(i=1;i<=n;i++)
    {
        cin>>x;
        push(x);
    }
    cout<<"The elements are: ";
    print();

    cout<<"After removing duplicate element: ";
     remdup();
     print();
    return 0;
}
