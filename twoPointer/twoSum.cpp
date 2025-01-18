#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> output;
    int left = 0;
    int right = numbers.size() - 1;
    while (left < right)
    {
        int sum = numbers[left] + numbers[right];
        if (sum < target)
        {
            left++;
        }
        if (sum == target)
        {
            output.push_back(left + 1);
            output.push_back(right + 1);
            break;
        }
        if (sum > target)
        {
            right--;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}