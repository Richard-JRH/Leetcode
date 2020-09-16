int findSpecialInteger(vector<int>& arr) 
{
    unordered_map<int, int> mp;

    int size = arr.size() / 4;

    for (int &i : arr)
        ++mp[i];

    for (auto &itr : mp)
        if (itr.second > size)
            return itr.first;

    return -1;
}