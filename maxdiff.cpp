#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> input = {1, 2, 3, 4};
    int sum;
    int max = abs(input[0] - input[input.size() - 1]);
    for (int i = 0; i < input.size() - 1; i++)
    {
        sum = abs(input[i] - input[i + 1]);
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
}