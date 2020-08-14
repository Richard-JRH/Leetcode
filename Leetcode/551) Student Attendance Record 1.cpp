bool checkRecord(string s)
{
	int numA = 0;
	bool isLate = false;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'A')
			++numA;

		if (s[i] == 'L')
		{
			if ((i + 2) < s.length())
				if (s[i + 1] == 'L' && s[i + 2] == 'L')
					isLate = true;
		}
	}

	return !(numA > 1 || isLate);
}