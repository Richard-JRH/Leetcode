bool threeConsecutiveOdds(vector<int>& arr) 
{
    // Edge case
    if (arr.size() < 3)
        return false;
    
    // Init
    for (int i = 0; i < arr.size() - 3; ++i)
    {
        if (arr[i]     % 2 != 0 && 
            arr[i + 1] % 2 != 0 &&
            arr[i + 2] & 2 != 0)
        {
            return true;
        }
    }
    
    return false;
}









