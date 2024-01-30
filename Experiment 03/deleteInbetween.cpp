 // Delete element from a particular position of the SLL.

#include <iostream>
#include <stdlib.h>
using namespace std;
// Create a Node Data Type
struct Node
{
    int data;
    Node *next;
    // Initialization
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// This program only includes the Function
// k is the position of the node in the linked list
Node *DeleteKthNode(Node *head, int k)
{
    Node* p= head;
    int i=0;
    while (i == k-1)
    {
        p= p->next;
        i++;
    }
    struct Node* q = p->next;
    p->next = q-> next;
    delete q;
    
    return head;
}

Node *constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

void TraverseList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    Node *head;
    head = constructLL(arr, 5);

    head = DeleteKthNode(head, 3);

    TraverseList(head);

    return 0;
}