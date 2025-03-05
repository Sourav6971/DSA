#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> prices)
    {
        int left = 0;
        int right = 1;
        int profit = 0;
        while (right < prices.size())
        {
            if (prices[left] < prices[right])
            {
                profit = max(profit, prices[right] - prices[left]);
                right++;
            }
            else
            {
                left = right;
                right++;
            }
        }
        return profit;
    }
};

int main()
{
    vector<int> prices = {7, 1, 3, 4, 5, 6, 2};
    Solution sol;
    int profit = sol.maxProfit(prices);
    cout << profit << " ";
}