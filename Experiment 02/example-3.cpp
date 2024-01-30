// Insert a node at the beginning of the list.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

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

void TraverseList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    Node *head;
    head = constructLL(arr, 5);

    head = insertAtFirst(head, 8);

    TraverseList(head);

    return 0;
}