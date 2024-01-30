// Write a C++ program to delete the first node of a Singly Linked List.

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

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


void linkedlistTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// Case 1: delete the first element of linked list
struct Node *deleteFirst(Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main()
{
    int arr[] = {2, 4, 5, 6};

    Node *head = constructLL(arr, 4);

    linkedlistTraversal(head);

    cout << "Linked list before deletion: " << endl;
    linkedlistTraversal(head);

    head = deleteFirst(head);
    cout << "Linked list after deletion: " << endl;
    linkedlistTraversal(head);

    return 0;
}