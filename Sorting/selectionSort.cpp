#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers = {2, 4, 3, 1, 5};
    int n = numbers.size();
    for (int i = 0; i < n; i++)
    {
        int min = numbers[i];
        for (int j = i; j < n; j++)
        {
            if (numbers[j] < min)
            {
                min = numbers[j];
                swap(numbers[i], numbers[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
}