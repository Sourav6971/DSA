#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2, 3, 42, 2, 0, 0, 1};
    int k = 2;
    unordered_map<int, int> count;
    vector<vector<int>> freq(nums.size() + 1);

    for (int n : nums)
    {
        count[n] = 1 + count[n];
    }
    for (const auto &entry : count)
    {
        freq[entry.second].push_back(entry.first);
    }

    vector<int> res;
    for (int i = freq.size() - 1; i > 0; --i)
    {
        for (int n : freq[i])
        {
            res.push_back(n);
            if (res.size() == k)
            {
                for (int k : res)
                {
                    cout << k << " ";
                }
                break;
            }
        }
    }
}
