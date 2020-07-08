vector<int> selfDividingNumbers(int left, int right)
{
	vector<int> res;

	for (int i = left; i <= right; ++i)
	{
		bool isSDN = true;
		string str = to_string(i);

		for (char c : str)
			if (c == '0')
				isSDN = false;
			else if (i % (int)(c - 48) != 0)
				isSDN = false;

		if (isSDN)
			res.push_back(i);
	}

	return res;
}