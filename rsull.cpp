#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;
void rev()
{
    if(head==NULL)
    {
        return;
    }
    stack<struct node*>s;

    node* temp=head;
    while(temp!=NULL)
    {
        s.push(temp);
        temp=temp->next;
    }

    temp=s.top();
    head=temp;
    s.pop();

    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    char c[50];
    printf("Enter a string: ");
    gets(c);
    printf("%s",rev());
    return 0;
}
