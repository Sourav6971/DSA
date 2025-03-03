#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void insertionSort(vector<int> nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int val = nums[i];
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] > val)
                {
                    swap(nums[i], nums[j]);
                }
            }
        }
        for (int k : nums)
        {
            cout << k << " ";
        }
    }
};
int main()
{
    Solution sol;
    sol.insertionSort({2, 2, 34, 2, 12, 1, 3, 1, 2232, 12, 0});
}
