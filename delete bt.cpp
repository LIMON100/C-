#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has key, pointer to left
   child and a pointer to right child */
struct Node
{
    int key;
    struct Node* left, *right;
};

/* function to create a new node of tree and
   return pointer */
struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};

/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
    if (!temp)
        return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}

/* function to delete the given deepest node
   (d_node) in binary tree */
void deletDeepest(struct Node *root,
                  struct Node *d_node)
{
    queue<struct Node*> q;
    q.push(root);

    // Do level order traversal until last node
    struct Node* temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp->right)
        {
            if (temp->right == d_node)
            {
                temp->right = NULL;
                delete(d_node);
                return;
            }
            else
                q.push(temp->right);
        }

        if (temp->left)
        {
            if (temp->left == d_node)
            {
                temp->left=NULL;
                delete(d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}

/* function to delete element in binary tree */
void deletion(struct Node* root, int key)
{
    queue<struct Node*> q;
    q.push(root);

    struct Node *temp;
    struct Node *key_node = NULL;

    // Do level order traversal to find deepest
    // node(temp) and node to be deleted (key_node)
    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp->key == key)
            key_node = temp;

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    int x = temp->key;
    deletDeepest(root, temp);
    key_node->key = x;
}

// Driver code
int main()
{
    struct Node* root = newNode(47);
    root->left = newNode(40);
    root->left->left = newNode(38);
    root->left->left->left = newNode(30);
    root->left->left->right = newNode(39);
    root->left->right = newNode(43);
    root->left->right->left = newNode(41);
    root->left->right->right = newNode(45);
    root->left->right->right->left = newNode(44);
    root->left->right->right->right = newNode(46);
    root->right = newNode(54);
    root->right->left = newNode(49);
    root->right->right = newNode(70);

    cout << "Inorder traversal before deletion : ";
    inorder(root);

    int key = 43;
    deletion(root, key);

    cout << endl;
    cout << "Inorder traversal after deletion : ";
    inorder(root);

    return 0;
}
