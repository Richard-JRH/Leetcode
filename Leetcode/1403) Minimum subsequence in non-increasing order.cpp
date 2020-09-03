vector<int> minSubsequence(vector<int>& nums)
{
    // Init
    vector<int> ret;
    sort( nums.begin(), nums.end() );
    int sum = 0;

    // Precompute total sum
    int numsTotal = 0;
    
    for (int &i : nums)
        numsTotal += i;

    for (int i = nums.size() - 1; i >= 0; --i)
    {
        ret.push_back( nums[i] );
        sum += nums[i];
        
        // Check end condition
        if (sum > (numsTotal - sum))
            break;
    }

    return ret;
}