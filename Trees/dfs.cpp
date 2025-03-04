// depth first search algorithm of a binary tree

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = this->right = nullptr;
    }
};

void dfs(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << endl;
    dfs(root->left);
    dfs(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    dfs(root);
}
