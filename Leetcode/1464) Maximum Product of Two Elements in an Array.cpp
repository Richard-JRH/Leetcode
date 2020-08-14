int maxProduct(vector<int>& nums)
{
    int max = INT_MIN;
    int idx = 0;

    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] > max)
        {
            max = nums[i];
            idx = i;
        }

    int max2 = INT_MIN;

    for (int j = 0; j < nums.size(); ++j)
        if (nums[j] > max2 && j != idx)
            max2 = nums[j];

    return (max - 1) * (max2 - 1);
}