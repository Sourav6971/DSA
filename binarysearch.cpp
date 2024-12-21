#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int first = 0;
    int n = arr.size();
    int target = 9;
    int last = n - 1;
    while (first < last)
    {
        int mid = (first + last) / 2;
        cout << arr[mid] << endl;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            break;
        }
        else if (arr[mid] < target)
        {
            first = mid;
        }
        else if (arr[mid] > target)
        {
            last = mid;
        }
    }
}