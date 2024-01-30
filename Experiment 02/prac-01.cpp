/* Write a C++ program to insert a new node at the end of a Singly Linked
List [Consider all edge cases]. */

// Insert a node at the end of the list.

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
     
     Node(int x){
        data = x;
        next = nullptr;
     }
};

struct Node* constructLL( int arr[ ], int arrsize){
    Node* head = new Node (arr[0]);
    Node* current = head;

    for (int i = 0; i < arrsize; i++)
    {
        Node* temp = new Node (arr[i]);
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

struct Node* insertEnd(Node* head, int data){
    Node* ptr=(Node*) malloc(sizeof(Node));
    Node* p=(Node*) malloc(sizeof(Node));
    p= head;
    ptr->data = data;

    while (p->next != NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    Node *head ;
    int arr[]={ 10 , 20 , 30, 50, 80};
    head = constructLL(arr , 5);
    cout<<"Linked list before insertion: "<<endl;
    TraverseList(head);

    head = insertEnd(head, 90);
    cout<<"\nLinked list after insertion: "<<endl;
    TraverseList(head);

    return 0;
}