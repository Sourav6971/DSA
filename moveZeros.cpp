#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0, 32, 0, 3, 4, 5, 6, 0, 4};
    stack<int> st;
    for (int n : nums)
        if (n != 0)
            st.push(n);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}