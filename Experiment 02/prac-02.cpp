// Write a C++ program to find the length of a singly linked list.

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int dataCount(Node *head)
{
    int count = 1;

    while (head->next != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

int main()
{
    Node *a = NULL, *b = NULL, *c = NULL;

    a = (Node *)malloc(sizeof(Node));
    b = (Node *)malloc(sizeof(Node));
    c = (Node *)malloc(sizeof(Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    cout<<"Length of linked list: "<<dataCount(a)<<endl;

    return 0;
}