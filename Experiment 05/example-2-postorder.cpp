/* Postorder traversal using recursion. */
/* LEFT - RIGHT - ROOT */

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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Postorder Traversal: " << endl;
    PostOrderTraversal(root);
}