#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node *newNode(int data)
{
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(struct node** head_r,int value)
{
    struct node* new_node=newNode(value);
    new_node->next=(*head_r);
    (*head_r)=new_node;
}

struct node* add(struct node* first,struct node* second)
{
    struct node* res = NULL;
    struct node *temp, *prev = NULL;
    int carry = 0, sum;

    while(first!=NULL || second!=NULL)
    {
        sum=carry+(first?first->data:0)+(second?second->data:0);
        carry=(sum>=10)?1:0;
        sum=sum%10;
        temp=newNode(sum);

        if(res==NULL)
            res=temp;
            else
                prev->next=temp;
            prev=temp;

        if (first) first = first->next;
        if (second) second = second->next;

    }

    if(carry>0)
        temp->next=newNode(carry);

    return res;
}

void print(struct node* tptr)
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
   struct node* first=NULL;
   struct node* second=NULL;
   struct node* res=NULL;

   push(&first,6);
   push(&first,4);
   push(&first,9);
   push(&first,5);
   push(&first,7);
   printf("Print first list: ");
   print(first);

   push(&second,4);
   push(&second,8);
   printf("Print second list: ");
   print(second);

   res=add(first,second);
   printf("The sum is: ");
   print(res);

   return 0;
}
