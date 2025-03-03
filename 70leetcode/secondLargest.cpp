#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void secondLargest(vector<int> nums)
    {
        int largest = INT_MIN, second_largest = INT_MIN;
        for (int n : nums)
        {
            if (n > largest)
            {
                second_largest = largest;
                largest = n;
            }

            else if (n > second_largest && n != largest)
            {
                second_largest = n;
            }
        }
        cout << "largest and second largest " << largest << " " << second_largest << endl;
    }
    void secondSmallest(vector<int> nums)
    {
        int smallest = INT_MAX;
        int second_smallest = INT_MAX;
        for (int n : nums)
        {
            if (n < smallest)
            {
                second_smallest = smallest;
                smallest = n;
            }
            else if (n < second_smallest && n != smallest)
            {
                second_smallest = n;
            }
        }
        cout << "smallest and second smallest= " << smallest << " " << second_smallest << endl;
    }
};
int main()
{
    Solution sol;
    vector<int> input = {34, 3, 1, 4, 3, 5, 1, 23, 4, 2, 32, 2, 33};
    sol.secondLargest(input);
    sol.secondSmallest(input);
}