int getKth(int lo, int hi, int k)
{
	unordered_map<int, int> mp;
	vector<pair<int, int>> arr;

	for (int i = lo; i <= hi; ++i)
	{
		// Getting power value
		int tmp = i;
		int pow = 0;

		while (tmp != 1)
		{
			if (tmp % 2 == 0)
				tmp /= 2;
			else
				tmp = 3 * tmp + 1;

			++pow;
		}

		mp[i] += pow;
	}

	// Sorting
	for (auto& itr : mp)
		arr.push_back(make_pair(itr.second, itr.first));

	sort(arr.begin(), arr.end());

	for (auto& itr : arr)
		cout << itr.second << ", " << itr.first << endl;

	return arr[k - 1].second;
}