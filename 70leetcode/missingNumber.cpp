#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0, 1, 3};

    int n = nums.size();
    int sum = n * (n + 1) / 2;
    for (int n : nums)
    {
        sum -= n;
    }
    cout << sum;
    return 0;
}