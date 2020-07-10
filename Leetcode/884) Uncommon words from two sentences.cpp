vector<string> uncommonFromSentences(string A, string B)
{
	vector<string> res;
	unordered_map<string, int> mp;
	string tmp = "";

	for (int i = 0; i < A.length(); ++i)
	{
		if (A[i] == ' ' || i == A.length() - 1)
		{
			if (i == A.length() - 1)
				tmp += A[i];

			++mp[tmp];
			tmp.clear();
		}
		else
			tmp += A[i];
	}

	for (int i = 0; i < B.length(); ++i)
	{
		if (B[i] == ' ' || i == B.length() - 1)
		{
			if (i == B.length() - 1)
				tmp += B[i];

			++mp[tmp];
			tmp.clear();
		}
		else
			tmp += B[i];
	}

	for (auto& itr : mp)
		cout << itr.first << ", " << itr.second << endl;

	for (auto& itr : mp)
		if (itr.second == 1)
			res.push_back(itr.first);

	return res;
}