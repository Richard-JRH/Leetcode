string generateTheString(int n)
{
	string res = "";

	// Is Odd
	if (n % 2 != 0)
	{
		for (int i = 0; i < n; ++i)
			res += 'a';

		return res;
	}

	// Is Even
	for (int i = 0; i < n - 1; ++i)
		res += 'a';

	res += 'b';

	return res;
}