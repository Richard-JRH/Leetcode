bool containsDuplicate(vector<int>& nums)
{
	map<int, int> mp;

	for (auto &itr : nums)
		++mp[itr];

	for (auto &itr : nums)
		if (mp[itr] > 1)
			return true;

	return false;
}