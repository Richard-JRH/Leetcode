vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
{
	vector<int> res;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (index[i] > res.size())
			res.push_back(nums[i]);
		else if (index[i] <= 0)
			res.insert(res.begin(), nums[i]);
		else
			res.insert(res.begin() + index[i], nums[i]);
	}

	return res;
}