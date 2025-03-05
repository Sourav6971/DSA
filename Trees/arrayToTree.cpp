// convert an array to a binary tree bfs

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

Node *arrtoTree(vector<int> arr, int i)
{
    Node *root = nullptr;
    if (i < arr.size())
    {
        root = new Node(arr[i]);

        root->left = arrtoTree(arr, 2 * i + 1);
        root->right = arrtoTree(arr, 2 * i + 2);
    }
    return root;
}

void printTree()
{
    Node *root = arrtoTree({1, 2, 3, 4, 5, 6}, 0);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->data << " ";

        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
}

int main()
{
    printTree();
    return 1;
}