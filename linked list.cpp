#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;
int create(int value)
{
    node* temp=new node;
    temp->data=value;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* temp1=new node;
        temp1->next=temp;
        temp1=temp;

    }
}

int print()
{
    node* temp1=head;
    while(head!=NULL)
    {
        cout<<temp1->data<<" -> ";
        temp1=temp1->next;
    }
    cout<<endl;
}

int main()
{
    create(43);
    print();
    create(20);
    print();
    return 0;
}
