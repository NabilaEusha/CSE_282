// Insert a node at the end of the list.

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void TraverseList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

struct Node *insertEnd(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = (Node *)malloc(sizeof(Node));
    p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    Node *head = NULL, *second = NULL;

    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));

    head->data = 10;
    second->data = 20;
    head->next = second;
    second->next = NULL;

    cout << "Linked list before insertion: " << endl;
    TraverseList(head);

    head = insertEnd(head, 9);
    cout << "\nLinked list after insertion: " << endl;
    TraverseList(head);

    return 0;
}