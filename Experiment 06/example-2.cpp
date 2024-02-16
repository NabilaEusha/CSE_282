/* Check whether a tree is balanced or not. */

// Height calculation function

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
        return 0;
    int lh = 1 + maxDepth(root->left);
    if (lh == -1)
        return -1;
    int rh = 1 + maxDepth(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1) // Check for imbalanced condition
        return -1;
    return max(lh, rh);
}

bool isbalanced(Node *root)
{
    // return 1 if true otherwise return 0
    return maxDepth(root) != -1;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    int h = isbalanced(root);
    if (h == 0)
    {
        cout << "Tree in not balanced" << endl;
    }
    else
    {
        cout << "Tree is balanced" << endl;
    }
}