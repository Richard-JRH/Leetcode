vector<int> replaceElements(vector<int>& arr)
{
    vector<int>VecList;
    int Max = INT_MIN;

    for (int i = 0; i < arr.size(); ++i)
    {
        Max = INT_MIN;

        for (int j = (i + 1); j < arr.size(); ++j)
        {
            if (arr[j] > Max)
            {
                Max = arr[j];
            }
        }

        if (i == arr.size() - 1)
            break;
        else
            VecList.push_back(Max);
    }

    VecList.push_back(-1);

    return VecList;
}