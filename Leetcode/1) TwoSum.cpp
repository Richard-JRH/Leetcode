#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int>ans;

    int count1 = 0, count2 = 0;

    for (auto& itr : nums)
    {
        count2 = 0;

        for (auto& itr2 : nums)
        {
            if (count1 != count2)
            {
                if ((itr + itr2) == target)
                {
                    ans.push_back(count1);
                    ans.push_back(count2);

                    return ans;
                }
            }

            ++count2;
        }

        ++count1;
        count2 = 0;
    }

    return ans;
}