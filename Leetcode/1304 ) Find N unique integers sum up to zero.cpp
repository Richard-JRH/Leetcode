vector<int> sumZero(int n)
{
    int itr;
    bool isEven = true;
    vector<int> vec;

    if (n % 2 == 0)
        itr = n;
    else
    {
        isEven = false;
        itr = n - 1;
    }

    for (int i = 0; i < itr / 2; ++i)
    {
        vec.push_back(i + 1);
        vec.push_back(-(i + 1));
    }

    if (!isEven)
    {
        int total = 0;
        int dif = 0;

        for (auto& itr : vec)
            total += itr;

        dif = abs(0 - total);

        vec.push_back(dif);
    }

    return vec;
}