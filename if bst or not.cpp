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

int findmin(node* root)
{
	if(root==NULL)
	{
		return root->data;
	}
	
	return findmin(root->left);
}

int findmax(node* root)
{
	if(root==NULL)
	{
		return root->data;
	}
	
	return findmax(root->right);
}


int isBst(node *root) 
{
    if(root==NULL) return 1;

    if(root->left!=NULL && findmax(root->left) > root->data)
        return 0;
    if(root->right!=NULL && findmin(root->right) < root->data)
        return 0;
    if(!isBst(root->left) || !isBst(root->right))
        return 0;

   else
    return 1;
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
    
    if(isBst(root)==1)
	{
		printf("This is a binary search tree.\n");
	}
	
	else
	{
		printf("This is not a binary search tree.\n");
	}
    
    return 0;
}

