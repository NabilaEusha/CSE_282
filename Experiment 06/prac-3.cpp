/*
             50
           /    \
         17      72
       /   \    /   \
     12    23   54    76
   /  \      \     \
  9   14     19     67

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int isBST(Node *root)
{
    Node *prev = nullptr;
    if (root != nullptr)
    {
        if (!isBST(root->left))
        {       

            return 0;
        }
        if (prev != NULL && root-> data <= prev-> data)
        {
            return 0;
        }
        prev = root ;
        return isBST(root -> right);
        
    }
    else{
        return 1;
    }
    
}
int main()
{
 Node *root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);
    int b = isBST(root);
    if (b == 1)
    {
        cout<<"Tree is BST"<<endl;
    }
    else
    {
        cout<<"Tree is not BST"<<endl;
    }
    
}