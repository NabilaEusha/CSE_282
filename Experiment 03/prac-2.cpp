// Write a C++ program to insert an element at kth position in a singly linked 
// list. [Consider possible edge cases]

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


Node *insertKthNode(Node *head, int k, int data)
{
    Node* ptr= (Node*) malloc(sizeof(Node));
    ptr->data = data;
    Node* p= head;
    int i=0;
    while (i == k-1)
    {
        p= p->next;
        i++;
    }
    Node* q= p->next;

    p->next = ptr;
    ptr->next = q;
   
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

    // Terminating with fourth
    fourth->data = 89;
    fourth->next = NULL;
    cout << "Linked list before insertion" << endl;
    linkedlistTraversal(head);
    

    cout << "Linked list after insertion after a node" << endl;
    head = insertKthNode(head, 2, 88);
    linkedlistTraversal(head);

    return 0;
}