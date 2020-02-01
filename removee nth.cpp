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

void removevalue(int value)
{
    if(head==NULL)
    {
        cout<<"list is empty."<<endl;
    }

    else if(head->data==value)
    {
        head=head->next;
    }

    else
    {
       node* tptr=head;
       while(tptr->next !=NULL && tptr->next->data !=value)
       {
           tptr=tptr->next;
       }

       if(tptr->next==NULL)
       {
           cout<<"Not found."<<endl;
       }
       else
       {
           tptr->next=tptr->next->next;
       }
    }

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
    create(1);
    create(2);
    create(3);
    create(4);
    print();
    cout<<"After romove elemnet:"<<endl;
    removevalue(3);
    print();

    return 0;
}

