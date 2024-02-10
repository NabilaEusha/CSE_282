#include <iostream>
#include <iostream>
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
int main()
{
    Node *root;
    root = new Node(6);
    root->left = new Node(8);
    root->right = new Node(9);
    root->left->left = new Node(7);
    cout << "Preorder Traversal: " << endl;
    preOrderTraversal(root);

    return 0;
}