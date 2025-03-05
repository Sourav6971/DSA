#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    void noobSolution(vector<int> nums)
    {
        int maximum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {
                int sum = 0;
                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }

                maximum = max(sum, maximum);
            }
        }
        cout << maximum;
    }

    void bruteForce(vector<int> nums)
    {

        int maximum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];

                maximum = max(sum, maximum);
            }
        }
        cout << endl;
        cout << maximum;
    }
    void optimal(vector<int> nums)
    // Kadanes algorithm
    {
        int maximum = INT_MIN;
        int sum = 0;
        for (int n : nums)
        {
            sum += n;

            maximum = max(sum, maximum);
            // we update sum after the maximum has been initialized for test case like [-1];
            if (sum < 0)
                sum = 0;
        }
        cout << maximum;
    }
};
int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    Solution sol;
    // sol.bruteForce(nums);
    // sol.optimal(nums);
    sol.noobSolution(nums);
}