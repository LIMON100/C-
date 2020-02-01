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

void add(int value)
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
       print(head->left);
       printf("%d ",head->data);
       print(head->right);
   }
}

bool findmin(node* root,int value)
{
    if(root==NULL)
    {
        return true;
    }

    if(root->left<=value && findmin(root->left,value) && findmin(root->right,value))
    {
    	return true;
	}
	else
	{
		return false;
	}
}

bool findmax(node* root,int value)
{
    if(root==NULL)
    {
        return true;
    }

    if(root->left>value && findmax(root->left,value) && findmax(root->right,value))
    {
    	return true;
	}
	else
	{
		return false;
	}
}

bool bst(node* head)
{
	if(head==NULL)
	{
		return NULL;
	}

	else if(findmin(head->left,root->data) && findmax(root->right,root->data)
	  && bst(head->left) && bst(head->right))
	  {
	  	return true;
	  }

	  else
	  {
	  	return false;
	  }
}

int main()
{
    add(15);
    add(10);
    add(8);
    add(12);
    add(20);
    add(12);
    add(25);
    print(root);

    printf("\n\n");

    if(bst(root)==1)
	{
		printf("This is a binary search tree.\n");
	}

	else
	{
		printf("This is not a binary search tree.\n");
	}

    return 0;
}

