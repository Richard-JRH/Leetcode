#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
    vector<int>Temp;
    int Count = 0;

    for (vector<int>::iterator itr = nums.begin(); itr != nums.end(); ++itr)
    {
        for (vector<int>::iterator itr2 = nums.begin(); itr2 != nums.end(); ++itr2)
        {
            if (itr2 != itr)
            {
                if (*itr2 < *itr)
                {
                    ++Count;
                }
            }
        }

        Temp.push_back(Count);
        Count = 0;
    }

    return Temp;
}