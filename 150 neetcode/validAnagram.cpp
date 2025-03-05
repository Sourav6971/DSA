#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    string s = "anngram";
    string t = "nagaram";

    int count[26] = {0};
    for (char c : s)
    {
        count[c - 'a']++;
    }
    for (char c : t)
    {
        count[c - 'a']--;
    }
    for (int i : count)
    {

        if (i != 0)
            cout << "not valid anagram";
        break;
    }
    cout << "valid anagram";
}