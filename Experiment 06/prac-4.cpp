/* Write a C++ program to determine whether a given tree is perfect. [Hint:
height of left subtree and right subtree is equal] */

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
int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
   
    return max(maxDepth(root->left), maxDepth(root->right))+1;
    }
int isPerfect(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = 1 + maxDepth(root->left);
    int rh = 1 + maxDepth(root->right);
    if (lh == rh)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct Node* root = NULL;
    root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
 
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int h = isPerfect(root);
    if (h == 1)
    {
        cout<<"Tree is Perfect"<<endl;
    }
    else
    {
        cout<<"Tree is not Perfect"<<endl;
    }
    
}