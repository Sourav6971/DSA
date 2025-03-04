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
    Node *r1 = arrtoTree({1, 2, 3, 4, 5, 6}, 0);
    queue<Node *> q;
    q.push(r1);
    while (r1 != nullptr)
    {

        cout << r1->data << endl;
        q.pop();
        if (r1->left)
            q.push(r1->left);
        if (r1->right)
            q.push(r1->right);
    }
}

int main()
{
    printTree();
    return 1;
}