// code to remove the nth element from behind of a linked list;
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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 1;
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < 6; i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    Node *temp = head;
    Node *ar[n];
    int i = 0;
    int flag = 0;
    while (temp)
    {
        Node *check = temp;
        for (int i = 0; i < n; i++)
        {

            ar[i] = check->next;

            if (check->next == nullptr)
            {

                flag = 1;
                break;
            }

            check = check->next;
        }
        if (flag == 1)
        {
            break;
        }
        temp = temp->next;
    }

    if (head->next == ar[0])
    {

        head = head->next;
    }
    Node *temp4 = head;
    Node *temp5 = temp4 != nullptr ? temp4->next : nullptr;
    while (temp5 != nullptr)
    {
        if (temp5->next == ar[0])
        {
            temp4->next = temp4->next->next;
        }
        temp5 = temp5->next;
        temp4 = temp4->next;
    }

    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}
