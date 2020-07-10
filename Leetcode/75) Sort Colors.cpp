void sortColors(vector<int>& nums)
{
	int arr[3] = { 0, 0, 0 };

	for (int& i : nums)
		++arr[i];

	nums.clear();

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		for (int j = 0; j < arr[i]; ++j)
			nums.push_back(i);
}