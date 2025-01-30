#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> array = {2, 3, 4, 5, 6, 7, 7, 7, 3};
    unordered_set<int> myset;
    for (int i = 0; i < array.size(); i++)
    {
        if (myset.count(array[i]))
            cout << "True" << array[i];
        myset.insert(array[i]);
    }
}