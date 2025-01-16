#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int main()
{
    int a, b, num1 = 0, num2 = 0;
    Node *head1 = new Node(5);
    Node *head2 = new Node(2);
    Node *temp1 = head1;
    Node *temp2 = head2;
    for (int i = 1; i < 3; i++)
    {
        cin >> a;
        temp1->next = new Node(a);
        temp1 = temp1->next;
    }
    for (int i = 1; i < 3; i++)
    {
        cin >> b;
        temp2->next = new Node(b);
        temp2 = temp2->next;
    }
    int count1 = 0, count2 = 0;
    while (head1 != nullptr)
    {
        int term = head1->data;
        num1 = num1 + (int)term * pow(10, count1);

        head1 = head1->next;
        count1++;
    }
    cout << endl;
    while (head2 != nullptr)
    {
        int term = head2->data;
        num2 = num2 + (int)term * pow(10, count2);

        head2 = head2->next;
        count2++;
    }
    cout << num1 << endl;
    cout << num2 << endl;
    int sum = num1 + num2;
    cout << sum << endl;
}
