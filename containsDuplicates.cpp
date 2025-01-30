#include <bits/stdc++.h>
// #include<unordered_set>

using namespace std;
int main()
{
    vector<int> array = {2, 3, 4, 5, 6, 7, 7, 7, 3};
    unordered_set<int> myset;
    /* available functions:-
    insert(value)
    erase(value)
    find(value) returns the value
    count(value) returns 1 if value exists
    size() returns the size of the set
    clear() clears the set
    empty() returns 1 if the set is empty


    */
    for (int i = 0; i < array.size(); i++)
    {
        if (myset.count(array[i]))
            cout << "True" << array[i];
        myset.insert(array[i]);
    }
}