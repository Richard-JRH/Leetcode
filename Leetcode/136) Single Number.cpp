int singleNumber(vector<int>& nums)
{
	map<int, int> mp;
	
	for (int &i : nums)
	{
		++mp[i];
	}
	
	for (auto &itr : mp)
		if (itr.second == 1)
			return itr.first;
	
	return -1;
}