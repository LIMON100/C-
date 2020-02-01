#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
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

/*void print(node* head)
{
   if(head!=NULL)
   {
       print(head->left);
       printf("%d ",head->data);
       print(head->right);
   }
}*/

void levelorder(node* head)
{
   if(head==NULL)
   {
       return;
   }

   queue<node*>myque;
   myque.push(root);

   while(!myque.empty())
   {
       node* tptr=myque.front();
       printf("%d ",tptr->data);
       if(tptr->left!=NULL)
       {
           myque.push(tptr->left);
       }
       if(tptr->right!=NULL)
       {
           myque.push((tptr->right));
       }
       myque.pop();
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
    levelorder(root);
    return 0;
}
