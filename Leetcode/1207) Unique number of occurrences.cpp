bool uniqueOccurrences(vector<int>& arr)
{
	// Num, count
	map<int, int> mp;

	// Init map with all elems of the vec/arr
	for (int i = 0; i < arr.size(); ++i)
		if (mp.count(arr[i]) != 0)
			mp.insert(make_pair(arr[i], 0));

	// Check count of each element in map
	for (int& itr : arr)
		++mp[itr];

	// Check if occurences != unique
	for (map<int, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr)
		for (map<int, int>::iterator itr2 = itr; itr2 != mp.end(); ++itr2)
			if (itr != itr2)
				if (itr->second == itr2->second)
					return false;

	return true;
}