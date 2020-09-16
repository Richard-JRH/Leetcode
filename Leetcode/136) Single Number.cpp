int singleNumber(vector<int>& nums) 
{
    // Edge case handling
    if (nums.size() == 1)
        return nums.front();
    
    sort( nums.begin(), nums.end() );
    
    for (int i = 0; i < nums.size(); i += 2)
    {
        if (nums[i] != nums[i + 1])
            return nums[i];
    }
    
    return -1;
}