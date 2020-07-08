string removeDuplicates(string& S)
{
	bool dupe = false;

	while (true)
	{
		dupe = false;

		for (int i = 0; i < S.length() - 1; ++i)
			if (S.length() == 0)
				break;
			else if (S[i] == S[i + 1])
			{
				dupe = true;

				S.erase(i, 1);
				S.erase(i, 1);
			}

		if (!dupe)
			break;
	}

	return S;
}