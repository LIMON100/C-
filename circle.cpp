#include<stdio.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;
void push(node** head,int value)
{
    node* nptr=new node;
    nptr->data=value;
    nptr->next=(*head);
    (*head)=nptr;
}

void rot(node** head,int k)
{
    int c=1;
    if(k==NULL)
    {
        return;
    }

    node* current=*head;
    while(c<k && current!=NULL)
    {
        current=current->next;
        c++;
    }

    if(current==NULL){
        return;
    }

        node* tptr=current;
        while(current!=NULL)
        {
            current=current->next;
        }
        current->next=*head;

      *head=tptr->next;

    tptr->next=NULL;
}


void print(node* tptr)
{
    while(tptr!=NULL)
    {
        printf("%d ",tptr->data);
        tptr=tptr->next;
    }
    printf("\n");
}

int main()
{
    int i,n,x,r;
    node* head;
    printf("No of element: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(&head,x);
    }

    printf("Print the linked list: ");
    print(head);

    /*printf("Which next position u want to rotate: ");
    scanf("%d",&r);*/
    rot(&head,4);

    printf("After rotate linked list: ");
    print(head);
    return 0;
}
