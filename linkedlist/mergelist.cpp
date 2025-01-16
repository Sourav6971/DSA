#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    Node *l1 = new Node(1);
    Node *l2 = new Node(2);
    Node *head1 = l1;
    Node *head2 = l2;
    for (int i = 1; i < 3; i++)
    {
        int data1, data2;
        cin >> data1;
        cin >> data2;
        head1->data = data1;
        head1 = head1->next;
        head2->data = data2;
        head2 = head2->next;
    }
}