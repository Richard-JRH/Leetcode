vector<bool>kidsWithCandies(vector<int>& candies, int Xtra)
{
    vector<bool>vList;
    int Max = INT_MIN;

    for (auto& itr : candies)
        if (itr > Max)
            Max = itr;

    for (auto& itr : candies)
        if ((itr + Xtra) >= Max)
            vList.push_back(true);
        else
            vList.push_back(false);

    return vList;
}