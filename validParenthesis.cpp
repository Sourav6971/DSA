#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    if (s[0] == ']' || s[0] == '}' || s[0] == ')')
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (st.empty() == false)
        {
            if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return (st.empty());
}
int main()
{
    string s = "([])";
    if (isValid(s))
    {
        cout << "true";
    }
    else
        cout << "false";
}