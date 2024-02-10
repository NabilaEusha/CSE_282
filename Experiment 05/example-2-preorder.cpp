/* Preorder traversal using recursion. */
/* ROOT - LEFT - RIGHT */

#include<iostream>
#include<stdlib.h>
using namespace std;
 
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int n){
        data= n;
        right = left = nullptr;
    }
};

void preOrderTraversal(Node* temp){
    if (temp == nullptr)
    {
        return;
    }
    cout<<temp -> data<<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
} 
int main(){
    Node* root;
    root = new Node(1);
    root-> left = new Node(2);
    root-> right = new Node(3);
    root-> left->left = new Node(4);
    root-> left->right = new Node(5);
    root-> right->left = new Node(6);
    root-> right->right = new Node(7);
    
    cout<<"Preorder Traversal: "<<endl;
    preOrderTraversal(root);


return 0;
}
