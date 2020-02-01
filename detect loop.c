#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

struct node* head=NULL;
node *newNode(int value)
{
    node* p;
    p=(node*)malloc(sizeof(node));
    p->data=value;
    p->next=NULL;
    return p;
}

int main()
{
    int len;
	node *p , *q , *loop_node , *slow , *fast , *length_calculator;
	p = newNode(1);
	p->next = newNode(2);
	p->next->next = newNode(3);
	p->next->next->next = newNode(4);
	loop_node = p->next->next->next;
	p->next->next->next->next = newNode(5);
	p->next->next->next->next->next = newNode(6);
	p->next->next->next->next->next->next = newNode(7);
	p->next->next->next->next->next->next->next = newNode(8);
	p->next->next->next->next->next->next->next->next = loop_node;

	slow=p;
	fast=p;

	while(1)
    {
        if(slow==NULL || fast==NULL)
        {
            printf("There is no loop.\n");
            break;
        }

        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            printf("There is a loop\n");
            break;
        }
    }
        len=1;
        length_calculator=slow->next;

        while(length_calculator!=slow)
        {
            len++;
            length_calculator=length_calculator->next;
        }

        printf("\nLength of the loop is %d\n",len);

        q=slow;
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }

    printf("\nThe starting point of the loop is  %d\n", p->data);
    while(fast!=NULL)
    {
        printf("%d ",fast->data);
        fast=fast->next;
    }

	return 0;
}
