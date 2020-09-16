int missingNumber(vector<int>& nums) 
{
     // Edge cases
     if (nums.size() == 1)
     {
        if (nums[0] == 0)
            return nums[0] + 1;
        else 
            return nums[0] - 1;
     }
     
     sort( nums.begin(), nums.end() );
    
     for (int i = 0; i < nums.size(); ++i)
     {
         if (i != nums[i])
             return i;
     }
    
     return nums[ nums.size() - 1 ] + 1;
}