int findLucky(vector<int>& arr) 
{
    map<int, int> mp;

    for (int &i : arr)
        ++mp[i];

    vector<int> res;

    for (auto &itr : mp)
        if (itr.first == itr.second)
            res.push_back( itr.first );

    if (res.size() == 0)
        return -1;

    if (res.size() == 1)
        return res.front();

    int max = INT_MIN;

    for (int &i : res)
        if (i > max)
            max = i;

    return max;    
}