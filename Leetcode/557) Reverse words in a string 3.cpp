string reverseWords(string s)
{
	string tmp = "";
	string res = "";

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == ' ' || i == s.length() - 1)
		{
			if (i == s.length() - 1)
				tmp += s[i];

			for (int j = tmp.length() - 1; j >= 0; --j)
				res += tmp[j];

			if (i != s.length() - 1)
				res += ' ';

			tmp.clear();
		}
		else
			tmp += s[i];
	}

	return res;
}