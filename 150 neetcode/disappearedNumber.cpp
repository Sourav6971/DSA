#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     vector<int> nums = {1, 2, 4, 4, 2};
//     vector<int> check(nums.size(), 0);
//     for (int n : nums)
//     {
//         check[n - 1]++;
//     }

//     vector<int> output;
//     for (int i = 0; i < check.size(); i++)
//     {
//         if (check[i] == 0)
//             cout << i + 1 << " ";
//     }
// }

// same solution using sets:

int main()
{
    vector<int> nums = {1, 3, 4, 4, 3};
    unordered_set<int> check(nums.begin(), nums.end());
    vector<int> out;
    for (int i = 1; i <= nums.size(); i++)
        if (!check.count(i))
            cout << i << " ";
}