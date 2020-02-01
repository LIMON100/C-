#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    node* left=NULL;
    node* right=NULL;
};

node* root=NULL;

void insertNode(int value)
{
    node* nptr=new node;
    nptr->data=value;
    nptr->left=NULL;
    nptr->right=NULL;

    if(root==NULL)
    {
        root=nptr;
    }

    else
    {
        node* tptr=root;
        while(true)
        {
            if(tptr->data>value)
            {
                if(tptr->left==NULL)
                {
                    tptr->left=nptr;
                    break;
                }
                else
                {
                    tptr=tptr->left;
                }
            }

            else
            {
                if(tptr->right==NULL)
                {
                    tptr->right=nptr;
                    break;
                }
                else
                {
                    tptr=tptr->right;
                }
            }
        }
    }
}

void print(node* head)
{
   if(head!=NULL)
   {
       printf("%d ",head->data);
       print(head->left);
       print(head->right);
   }
}

node* findmin(node* n)
{
	if(n==NULL)
	{
		printf("The tree is empty.\n");
	}
	while(n->left!=NULL)
	{
		n=n->left;
	}
	
	return n;
}

node* deletenode(node* head,int value)
{
    if (head==NULL)
    {
        return NULL;
    }
    
    else if(value<head->data)
    {
    	head->left=deletenode(head->left,value);
	}
	
	else if(value>head->data)
    {
    	head->right=deletenode(head->right,value);
	}
	
	else
	{
		if(head->left==NULL && head->right==NULL)
		{
			head=NULL;
		}
		
		else if(head->left==NULL)
		{
			head=head->right;
		}
		
		else if(head->right==NULL)
		{
			head=head->left;
		}
		
		else
		{
			node* tptr=findmin(head->right);
			head->data=tptr->data;
			head->right=deletenode(head->right,tptr->data);
		}
	}
	
	return head;
	
}


int main()
{
    insertNode(47);    insertNode(40);    insertNode(54);
    insertNode(38);    insertNode(43);    insertNode(49);
    insertNode(39);    insertNode(45);    insertNode(44);
    insertNode(30);    insertNode(41);    insertNode(70);
    insertNode(46);    insertNode(59);
    print(root);

    printf("\n\n");
    
    node* del=deletenode(root,43);
    print(del);


    return 0;
}

