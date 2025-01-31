#include <iostream>
#include <vector>
#include <map>

// note that in this problem we have used map and not hashmap because vector could not be served as an input to a hashmap

using namespace std;
int main()
{
    vector<string> input = {"act", "pots", "tops", "cat", "stop", "hat"};

    map<vector<int>, vector<string>> freq;
    for (string s : input)
    {
        vector<int> counter(26, 0);
        for (char c : s)
        {
            counter[c - 'a']++;
        }

        if (freq.count(counter))
        {
            freq[counter].push_back(s);
        }
        else
        {
            freq[counter] = {s};
        }
    }

    // code for printing the hashmap

    // for (const auto &pair : freq)
    // {
    //     for (int i = 0; i < 26; i++)
    //     {
    //         cout << pair.first[i] << " ";
    //     }
    //     cout << "->";

    //     // Corrected this part to output the value of the map
    //     for (const auto &str : pair.second)
    //     {
    //         cout << str << " "; // Output the string values in the vector
    //     }

    //     cout << endl;
    // }
    vector<vector<string>> output;
    for (const auto &pair : freq)
    {
        output.push_back(pair.second);
    }
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j];
        }
        cout << endl;
    }
}