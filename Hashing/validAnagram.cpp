#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "anagram", t = "naagram";
    unordered_map<char, int> s_map;
    unordered_map<char, int> t_map;
    if (s.length() != t.length())
    {
        cout << "not anagram";
    }

    for (int i = 0; i < s.length(); i++)
    {

        if (s_map.count(s[i]))
        {
            s_map[s[i]] = s_map[s[i] + 1];
        }
        else
        {
            s_map[s[i]] = 1;
        }
        if (t_map.count(t[i]))
        {
            t_map[t[i]] = t_map[t[i] + 1];
        }
        else
        {
            t_map[t[i]] = 1;
        }
    }
    if (s_map == t_map)
    {
        cout << "valid anagram";
    }
    else
    {
        cout << "invalid anagram";
    }
}