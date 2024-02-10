/* Level order traversal */
#include <iostream>
#include <stdlib.h>
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
void LevelOrderTraversal(Node *root)
{
    if (root == NULL)
        cout << "Tree is Empty." << endl;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
        cout << temp->data << " ";
    }
}

int main()
{
    Node *root;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Level order Traversal: " << endl;
    LevelOrderTraversal(root);

    return 0;
}