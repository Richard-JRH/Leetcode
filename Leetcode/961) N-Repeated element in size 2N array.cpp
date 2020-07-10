int repeatedNTimes(vector<int>& A)
{
	int res = 0;
	unordered_map<int, int> mp;

	for (int& i : A)
		++mp[i];

	for (auto& itr : mp)
		if (itr.second == A.size() / 2)
		{
			res = itr.first;
			break;
		}

	return res;
}