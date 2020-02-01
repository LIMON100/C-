#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}


void detectAndRemoveLoop(Node *head)
{

    if (head == NULL || head->next == NULL)
        return;

    Node *slow = head, *fast = head;

    slow = slow->next;
    fast = fast->next->next;

    while (fast && fast->next)
    {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        slow = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }

        /* since fast->next is the looping point */
        fast->next = NULL;
    }
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* loop_node;
    Node *head = newNode(50);
    head->next = head;
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    ///head->next->next->next->next = newNode(10);

    ///head->next->next->next->next->next = head->next->next;

    loop_node = head->next->next->next;
	head->next->next->next->next = newNode(5);
	head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(7);
	head->next->next->next->next->next->next->next = newNode(8);
	head->next->next->next->next->next->next->next->next = loop_node;

    detectAndRemoveLoop(head);

    printf("Linked List after removing loop \n");
    printList(head);

    return 0;
}
