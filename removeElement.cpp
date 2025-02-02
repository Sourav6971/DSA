#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 3, 1, 8, 6};
    int val = 3;
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    for (int i : nums)
    {
        cout << i << " ";
    }
}