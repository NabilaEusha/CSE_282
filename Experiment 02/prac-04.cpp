// Write a C++ program to delete the last node of a Singly Linked List.

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


// case  : Deleting the last element
struct Node *deleteLast(Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
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

    head = deleteLast(head);
    cout << "Linked list after deletion: " << endl;
    linkedlistTraversal(head);
    return 0;
}