/* Write a C++ program to find the Inorder, Preorder, and Postorder traver-
sals of the following trees. */
/* Inorder: LEFT - ROOT - RIGHT */
/* Preorder: ROOT - LEFT - RIGHT */
/* Postorder: LEFT - RIGHT - ROOT */

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void InOrderTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    InOrderTraversal(temp->left);
    cout << temp->data << " ";
    InOrderTraversal(temp->right);
}

void preOrderTraversal(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->data << " ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}

void PostOrderTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    PostOrderTraversal(temp->left);
    PostOrderTraversal(temp->right);
    cout << temp->data << " ";
}
int main()
{
    // a no tree
    cout << "Tree no 1: " << endl;
    Node *root;
    root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right = new Node(23);
    root->left->right->right = new Node(19);
    root->right->left = new Node(54);
    root->right->left->right = new Node(67);
    root->right->right = new Node(76);

    cout << "Inorder Traversal: " << endl;
    InOrderTraversal(root);

    cout << "\nPreorder Traversal: " << endl;
    preOrderTraversal(root);

    cout << "\nPostorder Traversal: " << endl;
    PostOrderTraversal(root);
    // b no tree
    cout << "\n\nTree no 2: " << endl;
    Node *root2;
    root2 = new Node(1);
    root2->left = new Node(3);
    root2->left->left = new Node(5);
    root2->left->left->right = new Node(4);
    root2->left->left->right->right = new Node(11);
    root2->left->right = new Node(2);
    root2->left->right->left = new Node(7);
    root2->left->right->left->right = new Node(9);
    root2->left->right->right = new Node(8);
    root2->left->right->right->right = new Node(13);
    root2->left->right->right->right->right = new Node(12);

    cout << "Inorder Traversal: " << endl;
    InOrderTraversal(root2);

    cout << "\nPreorder Traversal: " << endl;
    preOrderTraversal(root2);

    cout << "\nPostorder Traversal: " << endl;
    PostOrderTraversal(root2);
    return 0;
}