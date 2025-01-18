#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right)
    {
        int width = right - left;
        int minoftwo = height[left] < height[right] ? height[left] : height[right];
        cout << minoftwo << endl;
        int area = minoftwo * width;
        cout << area << endl;
        max = area > max ? area : max;
        if (minoftwo == height[left])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << max << endl;
    return 0;
}