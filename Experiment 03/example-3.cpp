/* Create a doubly linked list from an array of values */

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

    TraverseList(head);

    return 0;
}