/* Write a C++ program to find the sum of the left child of a given tree.
[Hint: use level order traversal] */

/*
             50
           /    \
         17      72
       /   \    /   \
     12    23   54    76

*/

#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int n)
    {
        data = n;
        right = left = nullptr;
    }
};

// Level-Order Traversal Function
int sumOfLeftChild(Node *root)
{
    if (root == nullptr)
        return 0;

    queue<Node *> q;
    q.push(root);
    int sum = 0;

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp->left != nullptr)
        {
            q.push(temp->left);
            sum += temp->left->data;
        }

        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }
    return sum;
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
    cout << "Sum of the left children: " << sumOfLeftChild(root) << endl;

    return 0;
}

