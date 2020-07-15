vector<int> countBits(int num)
{
	vector<int> arr;

	for (int i = 0; i <= num; ++i)
	{
		int res = 0;
		int tmp = i;

		while (tmp != 0)
		{
			if (tmp % 2 == 1)
				++res;

			tmp /= 2;
		}

		arr.push_back(res);
	}

	return arr;
}