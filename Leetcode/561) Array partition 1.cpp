int arrayPairSum(vector<int>& nums)
{
	int res = 0;
	sort(nums.begin(), nums.end());

	for (vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr += 2)
		res += *itr;

	return res;
}