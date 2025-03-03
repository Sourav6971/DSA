
#include <queue>
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
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Implementation using dfs(recursion)
bool isIdentical(Node *root1, Node *root2)
{

    if (root2 == nullptr && root1 == nullptr)
        return true;
    if (root1 == nullptr || root2 == nullptr)
        return false;

    return (root1->data == root2->data) && (isIdentical(root1->left, root2->left)) && isIdentical(root1->right, root2->right);
}

// implementation using bfs(iteration)
bool isEqual(Node *r1, Node *r2)
{
    if (r1 == nullptr && r2 == nullptr)
        return true;
    if (r1 == nullptr || r2 == nullptr)
        return false;

    queue<Node *> q1, q2;
    q1.push(r1);
    q2.push(r2);

    while (!q1.empty() && !q2.empty())
    {
        Node *node1 = q1.front();
        cout << "top of queue 1 " << q1.front()->data << endl;
        cout << "top of queue 2 " << q2.front()->data << endl;
        Node *node2 = q2.front();
        q1.pop();
        q2.pop();

        if (node1->data != node2->data)
            return false;
        if (node1->left && node2->left)
        {
            q1.push(node1->left);
            q2.push(node2->left);
        }
        else if (node1->left || node2->left)
            return false;
        if (node1->right && node2->right)
        {
            q1.push(node1->right);
            q2.push(node2->right);
        }
        else if (node1->right || node2->right)
            return false;
    }
    return (q1.empty() && q2.empty());
}

int main()
{
    //      1
    //    /  \
    //   2     3
    //  / \   / \
    // 4   5 6   7
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    //      1
    //    /  \
    //   2     3
    //  / \   / \
    // 4   5 6   7
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    bool val = isIdentical(root1, root2);
    if (val)
        cout << "Both the trees are identical" << endl;
    else
        cout << "Both the trees are not identical" << endl;
    bool val2 = isEqual(root1, root2);
    if (val2)
        cout << "Both the trees are identical" << endl;
    else
        cout << "Both the trees are not identical" << endl;
}