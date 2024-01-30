// Write a C++ program to delete the first node of a Singly Linked List.

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

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

    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    // Allocate memory for nodes in the linked list in heap
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    // Link first and second node
    head->data = 1;
    head->next = second;

    // Link second and third node
    second->data = 6;
    second->next = third;

    // Link third and fourth node
    third->data = 88;
    third->next = fourth;

    cout << "Linked list before deletion: " << endl;
    linkedlistTraversal(head);

    head = deleteFirst(head);
    cout << "Linked list after deletion: " << endl;
    linkedlistTraversal(head);

    return 0;
}