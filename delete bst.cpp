#include<stdio.h>
#include<iostream>
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
        node*tptr=root;

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

node* fM(node* r)
{
    while(r->left!=NULL)
    {
        r=r->left;
    }
    return r;
}

node* dn(node *head,int value)
{
    if(head==NULL)
    {
        return NULL;
    }

    else if(value<head->data)
    {
        head->left=dn(head->left,value);
    }

    else if(value>head->data)
    {
        head->right=dn(head->right,value);
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

        else if (head->right==NULL)
        {
           head=head->left;
        }

        else
        {
            node* tptr=fM(head->right);
            head->data=tptr->data;
            head->right=dn(head->right,tptr->data);
        }
    }
}

void print(node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        print(root->left);
        print(root->right);
    }
}

int main()
{
    insertNode(47);    insertNode(40);    insertNode(54);
    insertNode(38);    insertNode(43);    insertNode(49);
    insertNode(39);    insertNode(45);    insertNode(44);
    insertNode(30);    insertNode(41);    insertNode(70);
    insertNode(46);    insertNode(59);

    printf("\nPre-Order Tree printing:\n");
    print(root);

    printf("\n\n");

    node* n=dn(root,45);
    print(n);

    return 0;
}
