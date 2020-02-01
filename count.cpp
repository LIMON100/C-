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

void print()
{
    node* tptr=head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
}

void getcount()
{
    node* temp=head;
    int length=0;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }

    cout<<"No of elements are : "<<length<<endl;
}

int main()
{

   create(33);
   create(3);
   create(13);
   create(23);
   print();

   cout<<endl;
   getcount();
   return 0;

}
