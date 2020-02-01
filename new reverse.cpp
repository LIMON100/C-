#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void rev(node* p)
{
    if(p==NULL)
    {
        head=p;
        return;
    }
    rev(p->next);
    ///printf("%d ",p->data);
    node* q=p->next;
    q->next=p;
    p->next=NULL;
}
