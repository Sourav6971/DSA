#include <bits/stdc++.h>
using namespace std;
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int profit;
    int left = 0;
    int right = 1;

    int maxProfit = 0;
    for (int i = 0; i < (size(prices) - 1); i++)
    {
        if (prices[left] < prices[right])
        {
            cout << right;
            right++;
        }
        else
        {
            profit = prices[right] - prices[left];
            cout << profit << endl;
            if (profit > maxProfit)
                maxProfit = profit;

            left = right;
            cout << left << "left" << endl;
            right = right + 1;
            cout << right << "right" << endl;
        }
    }

    cout << maxProfit << endl;
}