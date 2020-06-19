int findNumbers(vector<int>& nums)
{
    int Count = 0;
    int Digits = 0;

    for (auto itr : nums)
    {
        while (itr != 0)
        {
            itr /= 10;
            ++Digits;
        }

        if (Digits % 2 == 0)
            ++Count;

        Digits = 0;
    }

    return Count;
}