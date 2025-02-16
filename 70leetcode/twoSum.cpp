#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twosum(vector<int> nums, int target)
    {
        unordered_map<int, int> val;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val.count(target - nums[i]))
                return {val[target - nums[i]], i};
            val[nums[i]] = i;
        }
        return {};
    }
};
class Question : public Solution
{
};

int main()
{
    Question ds;
    vector<int> input = {1, 2, 3, 5, 6};
    int target = 4;
    vector<int> output = ds.twosum(input, target);
    for (int n : output)
    {
        cout << n << " ";
    }
}
