vector<int> runningSum(vector<int>& nums)
{
    int Temp = 0;
    vector<int>Vec;

    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j <= i; ++j)
            Temp += nums[j];

        Vec.push_back(Temp);
        Temp = 0;
    }

    return Vec;
}