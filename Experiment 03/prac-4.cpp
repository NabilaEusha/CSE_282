/* Write a C++ program to insert a node at the end of a DLL. [Consider
possible edge cases] */

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *bak;
    Node(int x)
    {
        data = x;
        next = NULL;
        bak = NULL;
    }
    Node(int x, Node *f, Node *b)
    {
        data = x;
        next = f;
        bak = b;
    }
};

void TraverseList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node(data, nullptr, nullptr);
    ptr->data = data;
    Node *p = head;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->bak = p;

    return head;
}

Node *CreateDLL(int arr[], int arrsize)
{
    Node *head = NULL, *temp = NULL, *prev = NULL;
    head = new Node(arr[0]);
    prev = head;
    for (int i = 1; i < arrsize; i++)
    {
        temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    Node *head;
    head = CreateDLL(arr, 5);

    cout << "Linked List before insertion : ";
    TraverseList(head);

    cout << "\nLinked List after insertion : ";
    head = insertAtEnd(head, 60);
    TraverseList(head);

    return 0;
}