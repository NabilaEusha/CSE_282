// Write a C++ program to find the position of an element from a Singly
// Linked List [Linear Search].

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node* constructLL(int arr[], int arrsize){
    Node* head = new Node(arr[0]);
    Node* current= head;
    for (int i = 1; i < arrsize; i++)
    {
        Node* temp = new Node(arr[i]);
        
            current->next = temp;
            current= temp;
        
    }
    return head;
}

void position( Node* head,int data){
    Node* ptr= head ;
    int count =0;
    while ( ptr !=NULL )
    {
        count++;
        if (ptr-> data == data)
        {
            cout <<"\n"<<data <<" at the position "<<count<<endl;
            return;
        }
        ptr=ptr->next;
    }
   
}
void TraverseList(Node* head){
   
    while (head!= nullptr)
    {
        cout<< head-> data<<" ";
        head= head->next;
    }
    
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    Node *head;
    head= constructLL(arr , 6);
    cout<<"Linked List is: "<<endl;
    TraverseList(head);
    
    position(head,6);
    return 0;
}