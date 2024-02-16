/* Figure 01 */
/*
             50
           /    \
         17      72
       /   \    /   \
     12    23   54    76
   /  \      \     \
  9   14     19     67

*/
/* Write a C++ program to check whether the following tree (Figure 1) is balanced. */

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(Node *root)
{
    int lh, rh;
    if (root == NULL)
    {
        return 0;
    }
    lh = 1 + maxDepth(root->left);
    if (lh == -1)
    {
        return -1;
    }
    rh = 1 + maxDepth(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    return max(lh, rh);
}
bool isBalanced(Node *root)
{
    return maxDepth(root) != -1;
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
    int h = maxDepth(root);
    int b= isBalanced(root);
    if (b==0)
    {
        cout<<"Tree is not balanced"<<endl;
    }
    else{
        cout<<"Tree is balanced"<<endl;
    }
    
    cout << "Height: " << h << endl
         << endl;
    return 0;
}