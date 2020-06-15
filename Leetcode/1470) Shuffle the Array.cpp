#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n)
{
    vector<int>Temp;

    for (int i = 0; i < n; ++i)
    {
        Temp.push_back(nums[i]);
        Temp.push_back(nums[i + n]);
    }

    return Temp;
}